//Introductory21.cpp - Displays the average stock price
//Created/revised by <Kevin Zadonia> on <4/22>

#include <iostream>
#include <iomanip>
using namespace std;

//function prototypes
// Function prototypes
double average(double prices[], int size);

int main()
{
		double prices[10] = {96.5, 100.5, 100.5, 100.5, 99, 99, 99, 100, 98.5, 98.9};

		// Calculate the average stock price
		double avgPrice = average(prices, 10);

		// Display the average stock price
		cout << fixed << setprecision(2); // Set output to 2 decimal places
		cout << "The average stock price is: $" << avgPrice << endl;

		return 0;
} // end of main function

// Function to calculate the average of an array of prices
double average(double prices[], int size)
{
		double sum = 0.0; // Variable to store the sum of prices

		// Loop through the array to calculate the sum
		for (int i = 0; i < size; i++)
		{
			// Add each price to the sum
				sum += prices[i]; 
		}

		// Calculate and return the average
		return sum / size; 
}