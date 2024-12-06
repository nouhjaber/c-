#include <iostream>
#include <string>
#include <limits>
#include <iomanip> //? لتنسيق الأرقام العشرية

using namespace std;

int main() {
    //? 1. **Integer Types || (أنواع الأعداد الصحيحة)**
    //? Integers are used to represent whole numbers (without decimals) || (تُستخدم الأعداد الصحيحة لتمثيل الأعداد الكاملة (دون الكسور)).
    int intVar = 42;                //? A basic integer (int) || عدد صحيح بسيط (int)
    short shortVar = 10;            //? A short integer (short), typically uses less memory || (عدد صحيح قصير (short)، يستخدم ذاكرة أقل عادةً)
    long longVar = 100000L;         //? A long integer (long), used for larger numbers ||(عدد صحيح طويل (long)، يستخدم للأرقام الكبيرة)
    long long longLongVar = 10000000000LL;  //? A long long integer (long long), used for even larger numbers || (عدد صحيح طويل جداً (long long)، يستخدم للأرقام الأكبر)
    

    
    //? 2. **Floating-Point Types || نواع الأعداد العشرية (فاصلة عائمة)**
    //? Floating-point types are used for numbers with decimal points. || (تُستخدم الأعداد العشرية لتمثيل الأرقام التي تحتوي على فاصلة عشرية.)
    float floatVar = 3.14159f;      //? A single-precision floating-point number (float), stores less precision || (عدد عشري دقيق (float)، يخزن دقة أقل)
    double doubleVar = 3.14159265358979;  //? A double-precision floating-point number (double), stores more precision || (عدد عشري دقيق مزدوج (double)، يخزن دقة أعلى)
    long double longDoubleVar = 3.14159265358979323846264338327950288L;  //? A long double for even more precision || (عدد عشري دقيق طويل (long double)، يخزن دقة أعلى بكثير)
    
    
    //? 3. **Character Types** || ( **أنواع الأحرف**)
    //? Char types are used to store single characters or Unicode characters. || ( تُستخدم أنواع الأحرف لتخزين الحروف الفردية أو الحروف من نوع يونيكود)
    char charVar = 'A';            //? A basic character (char), stores a single character || (حرف بسيط (char)، يخزن حرفًا واحدًا)
   // char8_t char8Var = u8'B';      //? A UTF-8 encoded character (char8_t) || (حرف مشفر بتنسيق UTF-8 (char8_t))
    char16_t char16Var = u'C';     //? A UTF-16 encoded character (char16_t) || (حرف مشفر بتنسيق UTF-16 (char16_t))
    char32_t char32Var = U'D';     //? A UTF-32 encoded character (char32_t) || (حرف مشفر بتنسيق UTF-32 (char32_t))

    
    //? 4. **Boolean Type** || (**نوع البيانات المنطقية (Boolean)**)
    //? Booleans are used for logical values, either true or false. || (تُستخدم القيم المنطقية لتمثيل القيم (صح أو خطأ))
    bool boolVar = true;           //? A boolean variable (true or false) 
    bool falseVar = false;         //? Another boolean value

    
    //? 5. **String Type** || (**نوع البيانات السلسلية (String)**)
    //? Strings store sequences of characters (text). || (تُستخدم السلاسل النصية لتخزين تسلسل من الأحرف (نصوص))
    string strVar = "Hello, C++!"; //? A standard string (string) from the C++ Standard Library || (سلسلة نصية قياسية (string) من مكتبة C++ القياسية)
    const char* cStrVar = "Hello, C-style string!"; //? A C-style string (const char*) || ( سلسلة نصية من نوع C (const char*))

    
    //? 6. **Constant Variables** || (**المتغيرات الثابتة (Constant Variables)**)
    //? Constants are variables whose values cannot be changed once initialized. || (لثوابت هي متغيرات لا يمكن تغيير قيمتها بعد التعيين)
    const int constantVar = 100;   //? A constant integer (const) || (// عدد صحيح ثابت (const))

    
    //? **Pointers** - A pointer stores the memory address of another variable. || (**المؤشرات (Pointers)** - المؤشر يخزن عنوان الذاكرة لمتغير آخر.)
    int* ptrInt = &intVar; //? Pointer to an integer || (مؤشر إلى عدد صحيح)
    double* ptrDouble = &doubleVar; //? Pointer to a double || (مؤشر إلى عدد عشري)
    
    //? **References** - A reference is an alias for an existing variable. || (**المراجع (References)** - المرجع هو اسم مستعار لمتغير موجود)
    int& refInt = intVar; //? Reference to an integer variable || (مرجع إلى متغير من النوع int)
    double& refDouble = doubleVar; //? Reference to a double variable || (مرجع إلى متغير من النوع double)

    
    //? 8. **Union** || (**الاتحاد (Union)**)
    //? A union allows storing different data types in the same memory location, but only one member can be used at a time. || 
    //? (يسمح الاتحاد بتخزين أنواع بيانات مختلفة في نفس موقع الذاكرة، ولكن يمكن استخدام عضو واحد فقط في نفس الوقت.)
    union dataUnion {
        int intData;   //? Union member for storing an integer || (عضو الاتحاد لتخزين عدد صحيح)
        float floatData; //? Union member for storing a floating-point number || (عضو الاتحاد لتخزين عدد عشري)
    };
    
    dataUnion u;
    u.intData = 42;  //? Sets the int data in the union || (تعيين البيانات الصحيحة في الاتحاد)
    

    u.floatData = 3.14f;  //? Now the float data is set in the union
    cout << "Union holds float: " << u.floatData << endl;

    //? 9. **Structure** || (الهيكل)
    //? A structure is a user-defined data type that groups different variables under one name. || (لهيكل هو نوع بيانات معرف من قبل المستخدم يجمع متغيرات مختلفة تحت اسم واحد)
    struct Person {
        string name;  //? Name of the person (string type) || ( اسم الشخص (من نوع string))
        int age;      //? Age of the person (integer type) || (عمر الشخص (من نوع int))
    };
    
    Person p1 = {"John", 30}; //? Create a struct instance for a person || (إنشاء مثيل من الهيكل لشخص)

    
    //? 10. **Enumerations** || (**التعدادات (Enumerations)**)
    //? An enum defines a set of named integer constants. Useful for grouping related values. || (التعداد يعرف مجموعة من الثوابت العددية المسماة. مفيد لتجميع القيم المرتبطة)
    enum Color { Red, Green, Blue }; //? Define an enum for colors || (تعريف تعداد للألوان)
    Color myColor = Blue; //? Set the color to Blue || (تعيين اللون إلى الأزرق)
    
    
    //? 11. **Type Modifiers** || ( **تعديلات النوع (Type Modifiers)**)
    //? Type modifiers change the behavior of the base integer types. || (تعديلات النوع تغير سلوك الأنواع الصحيحة الأساسية)
    unsigned int uIntVar = 42;  //? An unsigned integer (cannot hold negative values) || (عدد صحيح غير موقع (لا يمكن أن يحتوي على قيم سالبة))
    signed int sIntVar = -10;   //? A signed integer (can hold both negative and positive values) || (عدد صحيح موقع (يمكن أن يحتوي على قيم سالبة وإيجابية))
    
    
    //? 12. **Type Aliases** || (**أسماء مستعارة للأنواع (Type Aliases)**)
    //? typedef allows you to define an alias for an existing data type, making the code more readable. || (تسمح `typedef` بتعريف اسم مستعار لنوع بيانات موجود، مما يجعل الكود أكثر وضوحًا)
    typedef unsigned long ulong;  //? Create a new alias for "unsigned long" || (إنشاء اسم مستعار لـ "unsigned long")
    ulong aliasVar = 12345678;    //? Use the alias "ulong" to declare a variable || (استخدام الاسم المستعار "ulong" لتعريف متغير)

    
    return 0;
}
