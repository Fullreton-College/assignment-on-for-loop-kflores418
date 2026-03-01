/*

Assignment-2. Write a program whose input is two integers, and whose 
output is the first integer and subsequent increments of 5 as long as 
the value is less than or equal to the second integer.


Ex: If the input is:

-15 10 the output is:

-15 -10 -5 0 5 10

Ex: If the second integer is less than the first as in:

20 5 the output is:

Second integer can't be less than the first.

For coding simplicity, output a space after every integer, including the last.
*/

#include <iostream>
using namespace std;

int main() {

int num1, num2;

cout << "Increments of 5's Program" << endl;
cout << "Please enter 2 integers (Second Integer can't be less than first) " << endl;

cout << "First Number:";
cin >> num1;

cout << "Second Number:";
cin >> num2;

cout << "Your First Number:" << num1 << endl;
cout << "Your Second Number:" << num2 << endl;

while (num2 < num1)
{
cout << "Second integer can't be less than first" << endl;
cout << "Enter Second Number:";
cin >> num2;
}


for (int i = 0; i<= ((num2-num1)/5); i++)
{
cout << num1 + (i*5) << " ";
}

cout << endl;

   return 0;
}
