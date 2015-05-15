// This is a a template program for you to submit lab assignments in lab 5
// Lab Title: Number of Grades

//  Student Details
/// Name: Jonathan Getachew
/// ID: NSR/0294/07

#include <iostream>
#include <iomanip>

using namespace std;

/// State your typedef statement here
typedef char gradeDef[50];
gradeDef gradeInput;

/// Write declarations for the function that counts the grades here
int gradeCounter(char grade, int n);
/// End of your function declaration

int main()
{
	int input;

	cout << "Enter the number of grades you want to input 1->50: " << endl;
	cin >> input;

    if(input > 0 && input <= 50){
        cout << "\nAll grades must be upper case A B C D or F\n" << endl;

        // loop to accept user input and count the number of grades
        for(int i=0; i<input; i++){
            cout << "Input a letter grade(A->F): " << endl;
            cin >> gradeInput[i];
        }

        cout << "Number of A = " << gradeCounter('A', input) << endl;
        cout << "Number of B = " << gradeCounter('B', input) << endl;
        cout << "Number of C = " << gradeCounter('C', input) << endl;
        cout << "Number of D = " << gradeCounter('D', input) << endl;
        cout << "Number of E = " << gradeCounter('E', input) << endl;
        cout << "Number of F = " << gradeCounter('F', input) << endl;

        ///  1. Initialize all elements of the array to null character
        ///  2. Prompt the user to input the total number of letter grades
        ///  3. Accept the grade count from the keyboard
        ///  4. If this input is greater than the total size of allowed grades (50 in this case) prompt error and stop
        ///  5. Else, iteratively accept the grades and store them to the array
        ///  7. For each grade later call the function that returns total number of that grade letters entered by the user
        ///  8. Display the returned value to the screen
    }else{
        cout << "Invalid amount of grades!" << endl;
    }

	return 0;
}

/// Write definition for the function that counts the grades here
int gradeCounter(char grade, int n){
    int amount;
    for(int i=0; i<n; i++){
        if(gradeInput[i]==grade){
            amount++;
        }
    }

    return amount;
}

/// End of your function definition
