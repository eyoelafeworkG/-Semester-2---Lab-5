// This is a a template program for you to submit lab assignments in lab 5
// Lab Title: Average Temperature
// Student Details
/// Name: Jonathan Getachew
/// ID: NSR/0294/07

#include <iostream>
#include <iomanip>

using namespace std;

/// State your typedef statement here
typedef double tempDef[50];
tempDef temp;

/// Write your function declarations here
double avgTemp(double [], int);
double maxTemp(double [], int);
double minTemp(double [], int);

/// End of your function declarations

int main()
{
	int input;
	cout << "Enter the number of temperatures you want to input: " << endl;
	cin >> input;
	// loop to accept user input
	for(int i=0; i<input; i++){
		cout << "Input temperature " << i+1 << ": " << endl;
		cin >> temp[i];
	}

	cout << "\nThe average temperature is " << avgTemp(temp, input);
	cout << "\nThe highest temperature is " << maxTemp(temp, input);
	cout << "\nThe lowest temperature is " << minTemp(temp, input);

	return 0;
}

// function to calculate the average
double avgTemp(double temp[], int n){
	double sum, avg;
	for(int i=0; i<n; i++){
		sum+=temp[i];
	}
	avg = sum/n;

	return avg;
}

// function that returns minimum temperature
double minTemp(double temp[], int n){
	double min;
	for(int i=0; i<n; i++){
		if(i==0){
			min=temp[i];
		}else{
			if(min>temp[i]){
				min=temp[i];
			}
		}
	}

	return min;
}

/// End of your function definition


/// function that returns maximum temperature
double maxTemp(double temp[], int n){
	double max;
	for(int i=0; i<n; i++){
		if(i==0){
			max=temp[i];
		}else{
			if(max<temp[i]){
				max=temp[i];
			}
		}
	}

	return max;
}

/// End of your function definition
