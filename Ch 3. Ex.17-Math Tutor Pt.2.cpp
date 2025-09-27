/* Program File Name: Chapter 3 - Math Tutor
* Programmer: Philip Rodgers
* Date: September 2025
* Requirements: Write a program that can display two random numbers being added, it should allow for a pause to give the student
time to solve the problem, and then when the student is ready they should be able to press a key that will allow them to see the
answer to the problem.
*/

#include <iostream>
#include <random>
using namespace std;

int main()
{
	//Create your random number engine, distribution object, and necessary variables
	random_device engine;
	uniform_int_distribution<int> randomInt(0, 999);
	int numb1 = randomInt(engine), numb2 = randomInt(engine);

	//Display the equation of the random intergers
	cout << "Add the two values together: \n" << numb1 << " + " << numb2;

	//Pause the program to allow time for solving the equation
	cin.get();
	cout << "\nPress enter when you're ready to see the answer \n";
	cin.get();

	//Display the answer
	cout << "The answer is " << numb1 + numb2;
}
