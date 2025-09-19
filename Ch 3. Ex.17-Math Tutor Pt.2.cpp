/* Program File Name: Chapter 3 - Math Tutor
* Programmer: Philip Rodgers
* Date: September 2025
* Requirements: Write a program that can display two random numbers being added, it should allow for a pause to give the student
time to solve the problem, and then when the student is ready they should be able to press a key that will allow them to see the
answer to the problem.
*/

#include <iostream>
using namespace std;

int main()
{
	double numb1, numb2;
	char al;

	cout << "Enter the first number: ";
	cin >> numb1;
	cout << "Enter the second number: ";
	cin >> numb2;
	cin.get();
	cout << "Press enter when you're ready to see the answer: \n";
	cin.get();
	cout << "The answer is " << numb1 + numb2;
}
