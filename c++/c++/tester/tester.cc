#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <unistd.h>
#include <thread>
#include <chrono>

using namespace std;

string executeProgram(const string& program, const string& testFile) {
    string command = "./" + program + " < " + testFile;
    char buffer[128];
    string result = "";

    FILE* pipe = popen(command.c_str(), "r");
    if (!pipe) {
        cerr << "Failed to execute program: " << program << endl;
        exit(1);
    }

    while (fgets(buffer, sizeof(buffer), pipe) != nullptr) {
        result += buffer;
    }

    fclose(pipe);
    return result;
}

void compareOutputs(const string& program1Output, const string& program2Output, const string& testName) {
    cout << "\n========================" << endl;

    if (program1Output == program2Output) {
        cout << "No diff in " << testName << endl;
    } else {
        cout << "Diff found in " << testName << ":" << endl;

        ofstream prog1Out("prog1_output.txt");
        prog1Out << program1Output;
        prog1Out.close();

        ofstream prog2Out("prog2_output.txt");
        prog2Out << program2Output;
        prog2Out.close();

        string diffCommand = "diff prog1_output.txt prog2_output.txt";
        system(diffCommand.c_str());

        remove("prog1_output.txt");
        remove("prog2_output.txt");
    }

    cout << "========================" << endl;
}

bool isValidProgramName(const string& programName) {
    if (programName.empty()) {
        return false;
    }

    ifstream file(programName);
    return file.good();
}

bool isValidTestCaseCount(int numTests) {
    return numTests > 0;
}

int main() {
    string schoolSolution, yourProgram, testPrefix, testName;
    string testFile;
    int numTests;

    while (true) {
        while (true) {
            cout << "Enter the name of the school solution program: ";
            getline(cin, schoolSolution);
            if (isValidProgramName(schoolSolution)) {
                break;
            } else {
                cout << "Invalid program name or file not found. Please try again.\n";
            }
        }

        while (true) {
            cout << "Enter the name of your program: ";
            getline(cin, yourProgram);
            if (isValidProgramName(yourProgram)) {
                break;
            } else {
                cout << "Invalid program name or file not found. Please try again.\n";
            }
        }

        while (true) {
            cout << "\nEnter the test prefix (e.g., ex7a): ";
            getline(cin, testPrefix);
            if (!testPrefix.empty()) {
                break;
            } else {
                cout << "Test prefix cannot be empty. Please try again.\n";
            }
        }

        while (true) {
            cout << "How many test cases do you want to run? ";
            cin >> numTests;
            cin.ignore();

            if (isValidTestCaseCount(numTests)) {
                break;
            } else {
                cout << "Please enter a valid positive number for test cases.\n";
            }
        }

        cout << "\nPreparing to run the tests..." << endl;
        this_thread::sleep_for(chrono::seconds(2));

        for (int i = 0; i < numTests; i++) {
            testName = testPrefix + "_test" + (i < 10 ? "0" : "") + to_string(i);

            testFile = testName + ".in";

            ifstream file(testFile);
            if (!file) {
                cout << "File " << testFile << " not found. Please enter the path manually: ";
                getline(cin, testFile);
                ifstream fileManual(testFile);
                if (!fileManual) {
                    cout << "File still not found! Skipping this test case.\n";
                    continue; 
                }
            }

            cout << "\nRunning test: " << testName << "..." << endl;

            this_thread::sleep_for(chrono::milliseconds(500)); 

            string schoolSolutionOutput = executeProgram(schoolSolution, testFile);
            string yourProgramOutput = executeProgram(yourProgram, testFile);

            compareOutputs(schoolSolutionOutput, yourProgramOutput, testName);
        }

        char runAgain;
        cout << "\nDo you want to run the tests again from the beginning? (y/n): ";
        cin >> runAgain;
        cin.ignore();

        if (runAgain == 'n' || runAgain == 'N') {
            cout << "Exiting program..." << endl;
            break;
        }
    }

    return 0;
}
