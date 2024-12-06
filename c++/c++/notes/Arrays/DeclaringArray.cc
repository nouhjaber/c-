#include <iostream>

using namespace std; 


int main () 
{
    //? 1. **Declaration and Initialization of Arrays** || (*إعلان وتهيئة المصفوفات**)
    //? An array is a collection of elements of the same type. You declare the array type, followed by the array name, and the number of elements inside square brackets. || 
    //? (المصفوفة هي مجموعة من العناصر من نفس النوع. تقوم بإعلان نوع المصفوفة، ثم اسم المصفوفة، وعدد العناصر بين الأقواس المربعة.) 

    //? Example 1: Declaring and initializing an integer array
    int numbers[5] = {1, 2, 3, 4, 5}; 

    //? Declare an array without specifying the size, the size is inferred
    int num[] = {10, 20, 30, 40, 50};  //? Compiler will deduce the size to be 5

    //? Declare an array of strings
    string arr[3] = {"Apple", "Banana", "Cherry"};

    //? Example 2: Declaring an array without initialization || (المثال 2: إعلان مصفوفة بدون تهيئة)
    int emptyArray[3];  //? Declares an array of 3 integers, but values are not initialized || (إعلان مصفوفة تحتوي على 3 أعداد صحيحة ولكن القيم غير مهيأة)

    //? Example: 2D Array (array of arrays) || (المثال: مصفوفة ثنائية الأبعاد (مصفوفة من المصفوفات))
    int matrix[2][3] = { {1, 2, 3}, {4, 5, 6} };  //? A 2x3 matrix || (مصفوفة 2x3)

    //? Declare a 2D array (3x3)
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    //? Declare an array without initialization
    int arr[5];
    
    //? Initialize elements manually
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;



    return 0;
}