#include <stdio.h>
int main() {    

    int number1, number2, sum;
    
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    // calculating sum
    sum = number1 + number2;      
    
    printf("%d + %d = %d", number1, number2, sum);
    return 0;
}
Run Code
Output

Enter two integers: 12
11
12 + 11 = 23
In this program, the user is asked to enter two integers. These two integers are stored in variables number1 and number2 respectively.

printf("Enter two integers: ");
scanf("%d %d", &number1, &number2);
Then, these two numbers are added using the + operator, and the result is stored in the sum variable.

sum = number1 + number2;
Adding two integers in C programming
Add Two Numbers
Finally, the printf() function is used to display the sum of numbers.

printf("%d + %d = %d", number1, number2, sum);
Share on:
Did you find this article helpful?

Related Examples
C Example

Find GCD of two Numbers

C Example

Find LCM of two Numbers

C Example

Find Largest Element in an Array

C Example

Find Largest Number Using Dynamic Memory Allocation


Join our newsletter for the latest updates.
Enter Email Address*
Join


Tutorials
Python 3 Tutorial
JavaScript Tutorial
SQL Tutorial
C Tutorial
Java Tutorial
Kotlin Tutorial
C++ Tutorial
Swift Tutorial
C# Tutorial
Go Tutorial
DSA Tutorial
Examples
Python Examples
JavaScript Examples
C Examples
Java Examples
Kotlin Examples
C++ Examples
Company
About
Advertising
Privacy Policy
Terms & Conditions
Contact
Blog
Youtube
Apps
Learn Python
Learn C Programming
Learn Java
© Parewa Labs Pvt. Ltd. All rights reserved.

   
