// This is a a template program for you to submit lab assignments in lab 5
// Lab Title: Age Population Program
// Student Details
/// Name: Jonathan Getachew
/// ID: NSR/0294/07

#include <iostream>
#include <iomanip>

using namespace std;

/// State your typedef statement here, if any
#define size 101
typedef int ageDef[size];
typedef int ctr[size];
ageDef age;
ctr counter;
/// Write your function declaration here, if any
// function to display the collected data
void displayData(int ctr[]);

int main()
{

	int i = 0, age;

	do{
		i++;
		//Prompt the user to input an age
		cout << "Enter an age between 1 and 100 or -99 to exit." << endl;
		cin >> age;
		if(age >= 1 && age <= 100){
			counter[age]++;
		}else if(age!=-99){
			cout << "Age must be between 1 and 100!" << endl;
		}

	}while(age!=-99);
	// function call
	displayData(counter);

	return 0;
}

void displayData(int ctr[]){

	for(int k=0; k<size; k++){
		if(ctr[k]!=0){
			cout << "The number of people " << k << " years old is " << counter[k] << endl;
		}
	}
}
