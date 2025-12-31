// ========================================
// 1. I/O (cin / cout) - INPUT/OUTPUT
// ========================================

#include <iostream>
using namespace std;

int main() {
    // BASIC OUTPUT (cout) - console output
    cout << "Hello World!" << endl;  // endl adds newline
    cout << "This is C++" << "\n";   // \n also adds newline
    
    // MULTIPLE OUTPUTS
    int age = 25;
    double salary = 50000.50;
    cout << "Age: " << age << ", Salary: $" << salary << endl;
    
    // BASIC INPUT (cin) - keyboard input
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;  // Read two values separated by space/enter
    cout << "Sum: " << (x + y) << endl;
    
    // STRING INPUT
    string name;
    cout << "Enter your name: ";
    cin >> name;  // Reads until whitespace (space/tab/newline)
    cout << "Hello, " << name << "!" << endl;
    
    

    string semester;
    cout << "Enter your semester: ";
    cin >> semester;  // Reads until whitespace
    cout << "You are in " << semester << " semester." << endl;
    return 0;
}

// NOTES:
// - #include <iostream> needed for cin/cout
// - cout << for output, cin >> for input
// - Multiple items: cout << a << b << c;
// - cin stops reading at whitespace
// - endl flushes buffer, \n just newline

// ========================================
// 2. DATA TYPES
// ========================================

#include <iostream>
using namespace std;

int main() {
    // INTEGER TYPES
    int num = 10;              // 4 bytes, -2^31 to 2^31-1
    short smallNum = 100;      // 2 bytes, -32768 to 32767
    long bigNum = 1000000L;    // 4/8 bytes
    unsigned int positive = 50; // Only positive, 0 to 4 billion
    
    // FLOATING POINT
    float price = 19.99f;      // 4 bytes, 7 decimal digits
    double pi = 3.1415926535;  // 8 bytes, 15 decimal digits
    
    // CHARACTER
    char letter = 'A';         // 1 byte, single character
    char digit = '7';
    
    // BOOLEAN
    bool isTrue = true;        // 1 byte, true(1) or false(0)
    bool isFalse = false;
    
    // SIZE OF TYPES
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    cout<<"the size of long"<<sizeof(long)<<"bytes"<<endl;
    
    // TYPE CONVERSION
    int a = 10;
    double b = 3.5;
    double result = a + b;  // int automatically converted to double
    
    return 0;
}

// NOTES:
// - int: whole numbers, float/double: decimal numbers
// - char: single character in single quotes
// - bool: true/false values
// - unsigned: only positive numbers
// - sizeof(): get size in bytes
// - Automatic type conversion in expressions

// ========================================
// 3. OPERATORS
// ========================================

#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 3;
    
    // ARITHMETIC OPERATORS
    cout << "a + b = " << (a + b) << endl;   // Addition: 13
    cout << "a - b = " << (a - b) << endl;   // Subtraction: 7
    cout << "a * b = " << (a * b) << endl;   // Multiplication: 30
    cout << "a / b = " << (a / b) << endl;   // Division: 3 (integer division)
    cout << "a % b = " << (a % b) << endl;   // Modulus: 1 (remainder)
    
    // INCREMENT/DECREMENT
    int x = 5;
    cout << "x++ = " << x++ << endl;  // Post-increment: use then increase
    cout << "x = " << x << endl;      // Now x = 6
    cout << "++x = " << ++x << endl;  // Pre-increment: increase then use
    
    // RELATIONAL OPERATORS (return true/false)
    cout << "a == b: " << (a == b) << endl;  // Equal to: false
    cout << "a != b: " << (a != b) << endl;  // Not equal: true
    cout << "a > b: " << (a > b) << endl;    // Greater than: true
    cout << "a < b: " << (a < b) << endl;    // Less than: false
    
    // LOGICAL OPERATORS
    bool t = true, f = false;
    cout << "t && f: " << (t && f) << endl;  // AND: false
    cout << "t || f: " << (t || f) << endl;  // OR: true
    cout << "!t: " << (!t) << endl;          // NOT: false
    
    // ASSIGNMENT OPERATORS
    int c = 10;
    c += 5;  // c = c + 5, now c = 15
    c -= 3;  // c = c - 3, now c = 12
    c *= 2;  // c = c * 2, now c = 24
    
    // TERNARY OPERATOR (Conditional)
    int max = (a > b) ? a : b;  // If a>b then a else b
    cout << "Maximum: " << max << endl;
    
    return 0;
}

// NOTES:
// - /: integer division truncates decimal
// - %: remainder after division (only for integers)
// - ++x (pre): increment then use, x++ (post): use then increment
// - &&: AND, ||: OR, !: NOT
// - +=, -=, *=, /=, %=: shorthand operators
// - ?: ternary operator for simple if-else

// ========================================
// 4. if / else STATEMENTS
// ========================================

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    // SIMPLE IF
    if (num > 0) {
        cout << "Number is positive" << endl;
    }
    
    // IF-ELSE
    if (num % 2 == 0) {
        cout << "Number is even" << endl;
    } else {
        cout << "Number is odd" << endl;
    }
    
    // IF-ELSE IF LADDER
    int marks;
    cout << "Enter marks (0-100): ";
    cin >> marks;
    
    if (marks >= 90) {
        cout << "Grade: A" << endl;
    } 
    else if (marks >= 80) {
        cout << "Grade: B" << endl;
    }
    else if (marks >= 70) {
        cout << "Grade: C" << endl;
    }
    else if (marks >= 60) {
        cout << "Grade: D" << endl;
    }
    else {
        cout << "Grade: F" << endl;
    }
    
    // NESTED IF
    int age;
    cout << "Enter age: ";
    cin >> age;
    
    if (age >= 18) {
        cout << "Adult ";
        if (age >= 60) {
            cout << "and Senior Citizen" << endl;
        } else {
            cout << "but not Senior" << endl;
        }
    } else {
        cout << "Minor" << endl;
    }
    
    return 0;
}

// NOTES:
// - if(condition) { code } - executes if condition is true
// - else - optional, executes if all if/else if are false
// - else if - check another condition if previous were false
// - Conditions in parentheses, code in braces {}
// - Nested if: if inside another if

// ========================================
// 5. switch STATEMENT
// ========================================

#include <iostream>
using namespace std;

int main() {
    int day;
    cout << "Enter day number (1-7): ";
    cin >> day;
    
    // SWITCH WITH INT
    switch(day) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid day! Enter 1-7." << endl;
            break;
    }
    
    // SWITCH WITH CHAR
    char grade;
    cout << "Enter grade (A, B, C, D, F): ";
    cin >> grade;
    
    switch(grade) {
        case 'A':
        case 'a':
            cout << "Excellent!" << endl;
            break;
        case 'B':
        case 'b':
            cout << "Good!" << endl;
            break;
        case 'C':
        case 'c':
            cout << "Average" << endl;
            break;
        case 'D':
        case 'd':
            cout << "Poor" << endl;
            break;
        case 'F':
        case 'f':
            cout << "Fail" << endl;
            break;
        default:
            cout << "Invalid grade" << endl;
    }
    
    // SIMPLE CALCULATOR USING SWITCH
    char op;
    double n1, n2;
    
    cout << "\nSimple Calculator" << endl;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
    
    switch(op) {
        case '+':
            cout << n1 << " + " << n2 << " = " << (n1 + n2) << endl;
            break;
        case '-':
            cout << n1 << " - " << n2 << " = " << (n1 - n2) << endl;
            break;
        case '*':
            cout << n1 << " * " << n2 << " = " << (n1 * n2) << endl;
            break;
        case '/':
            if (n2 != 0)
                cout << n1 << " / " << n2 << " = " << (n1 / n2) << endl;
            else
                cout << "Error: Division by zero!" << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
    }
    
    return 0;
}

// NOTES:
// - switch(expression) - expression must be int/char/enum
// - case value: - constant values (no variables)
// - break; - exits switch (without it, falls through to next case)
// - default: - optional, executes if no case matches
// - Multiple cases can share same code (fall-through)

// ========================================
// 6. LOOPS (for, while)
// ========================================

#include <iostream>
using namespace std;

int main() {
    // FOR LOOP - when you know exact iterations
    cout << "For loop (1 to 5): ";
    for(int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;
    
    // FOR LOOP VARIATIONS
    cout << "Even numbers (0 to 10): ";
    for(int i = 0; i <= 10; i += 2) {
        cout << i << " ";
    }
    cout << endl;
    
    // SUM OF FIRST N NUMBERS
    int n, sum = 0;
    cout << "Enter n: ";
    cin >> n;
    for(int i = 1; i <= n; i++) {
        sum += i;
    }
    cout << "Sum of first " << n << " numbers = " << sum << endl;
    
    // WHILE LOOP - when iterations depend on condition
    cout << "\nWhile loop (1 to 5): ";
    int j = 1;
    while(j <= 5) {
        cout << j << " ";
        j++;
    }
    cout << endl;
    
    // COUNT DIGITS OF A NUMBER
    int number, count = 0;
    cout << "Enter a number: ";
    cin >> number;
    int temp = number;
    
    while(temp != 0) {
        temp /= 10;  // Remove last digit
        count++;
    }
    cout << "Number of digits in " << number << " = " << count << endl;
    
    // DO-WHILE LOOP - executes at least once
    char choice;
    do {
        cout << "\nMenu:" << endl;
        cout << "1. Say Hello" << endl;
        cout << "2. Say Goodbye" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        
        switch(choice) {
            case '1': cout << "Hello!" << endl; break;
            case '2': cout << "Goodbye!" << endl; break;
            case '3': cout << "Exiting..." << endl; break;
            default: cout << "Invalid choice!" << endl;
        }
    } while(choice != '3');
    
    // NESTED LOOPS - multiplication table
    cout << "\nMultiplication Table (5x5):" << endl;
    for(int row = 1; row <= 5; row++) {
        for(int col = 1; col <= 5; col++) {
            cout << row * col << "\t";
        }
        cout << endl;
    }
    
    // LOOP CONTROL: break and continue
    cout << "\nNumbers 1-10 (skip 5, stop at 8): ";
    for(int k = 1; k <= 10; k++) {
        if(k == 5) continue;  // Skip 5
        if(k == 9) break;     // Stop before 9
        cout << k << " ";
    }
    cout << endl;
    
    return 0;
}

// NOTES:
// - for(init; condition; update) { code } - fixed iterations
// - while(condition) { code } - condition checked first
// - do { code } while(condition); - executes once, then checks
// - break: exit loop, continue: skip to next iteration
// - Infinite loop: for(;;) or while(true)
// - Nested loops: loop inside another loop
//////////////////////////////////////////////////HANDS ON///////////////////////////////////////////////////////
// Calculator


#include<iostream>
using namespace std;
int main(){
    int n1;
    int n2;
    string operation;
    cout<<"ENTER FIRST NUMBER"<<endl;
    cin>>n1;

    cout<<"ENTER SECOND NUMBER"<<endl;
    cin>>n2;
    
    cout<<"ENTER OPERATION TO PERFORM"<<endl;
    cout<<"sum for + sub for -, div for / ,mod for %";
    cin>>operation;


    if(operation=="sum")
    {
        cout << n1 << " + " << n2 << " = " << (n1 + n2) << endl;
    }

    else if(operation=="sub")
    {
        cout << n1 << " - " << n2 << " = " << (n1 - n2) << endl;
    }

    else if(operation=="div")
    {
        cout << n1 << " + " << n2 << " = " << (n1 + n2) << endl;
    }

    else if(operation=="mod")
    {
        cout << n1 << " % " << n2 << " = " << (n1 % n2) << endl;
    }
    else {
        cout<<"you entered an invalid operator";
    }
    return 0;
}
// Even / odd


#include<iostream>
using namespace std;
int main(){
int number;
cout<<"ENTER A NUMBER TO CHECK"<<endl;
cin>>number;
if(number/2==0){
    cout<<"THE NUMBER IS EVEN "<<endl;

}
else{
    cout<<"THE NUMBER IS ODD"<<endl;

}
}
 

// Prime

#include <iostream>
using namespace std;

int main() {
    int num;
    int prime = 1;  // 1 means true (prime), 0 means false (not prime)
    
    cout << "Enter a number: ";
    cin >> num;
    
    // 0 and 1 are not prime
    if (num <= 1) {
        prime = 0;
    }
    else {
        // Check from 2 to num-1
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                prime = 0;  // Found divisor, not prime
                break;
            }
        }
    }
    
    if (prime == 1) {
        cout << num << " is PRIME" << endl;
    }
    else {
        cout << num << " is NOT PRIME" << endl;
    }
    
    return 0;
}

// Factorial

#include <iostream>
using namespace std;

int main() {
    int n, fact = 1;
    cout << "Enter number: ";
    cin >> n;
    
    for(int i = 1; i <= n; i++) 
        fact = fact * i;
    
    cout << "Factorial = " << fact;
    return 0;
}

// Fibonacci
#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"LIMIT "<<endl;
    cin>>n;
    int a = 0, b = 1;
    
    for(int i = 0; i < n; i++) {
        cout << a << " ";
        int c = a + b;
        a = b;
        b = c;
    }
    
    return 0;
}

// Reverse number

