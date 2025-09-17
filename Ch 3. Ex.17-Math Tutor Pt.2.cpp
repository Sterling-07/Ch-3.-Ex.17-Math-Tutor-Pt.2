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
	char alpha;
	double numb1, numb2;

	cout << "Enter the first number: ";
	cin >> numb1;
	cout << "Enter the second number: ";
	cin >> numb2;
	cout << "Please enter your answer when you're ready: ";
	cin.get(alpha);
	cin.ignore(alpha);
	cout << "The answer is " << numb1 + numb2;
}
