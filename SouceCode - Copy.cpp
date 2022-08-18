#include <iostream>
#include <string>
#include <sstream>

using namespace std;

// Function Prototypes
void CalculateModulus(int num);
void PrintResult(int div3, int div5, int num);

int main()
{
	// Explain the program
	cout << "Wellcome to FizzBuzz." << endl;
	cout << "This program will replace any number that can be perfectly divided by 3 with Fizz, and by 5 with Buzz." << endl;
	cout << "If it is divisable by both it will be a FizzBuzz" << endl;

	// Maximum value
	int max;

	// Ask for user imput
	cout << "Please introduce the maximum number you wanna check: ";
	cin >> max;	

	for (int i = 1; i < max+1; i++)
	{
		// Calculate the modulus
		CalculateModulus(i);
	}

	return 0;
}

void CalculateModulus(int num)
{
	// Result Variable
	int result3, result5;

	// Calculate modulus
	result3 = num % 3;
	result5 = num % 5;

	// Call the print result function
	PrintResult(result3, result5, num);
}

void PrintResult(int div3, int div5, int num)
{
	string message;
	stringstream stream;

	if (div3 == 0)
		message += "Fizz";
	if (div5 == 0)
		message += "Buzz";
	if (message == "")
	{
		// Casting the int as a string
		stream << num;
		stream >> message;

		// Reseting the stream
		stream.str();
		stream.clear();
	}

	cout << message << endl;

}