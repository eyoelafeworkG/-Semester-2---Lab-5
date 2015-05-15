// This is a a template program for you to submit lab assignments in lab 5
// Lab Title: Value of the Polynomial

//  Student Details
/// Name: Jonathan Getachew
/// ID: NSR/0294/07

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

// declaration of eval function
double eval(double x, int a[], int len);
// End of function declaration

int main()
{

    int test[]={0, 1, 2, 3, 4};
	cout << "Output of eval function:" <<endl;
	if(eval(test, 5)){
        cout << "{0, 1, 2, 3, 4} : Yes" << endl;
    }else{
        cout << "{0, 1, 2, 3, 4} : No" << endl;
    }
	/*
	cout << "x = 1.0, a = {0, 1, 2, 3, 4} : eval = " << eval(1.0, {0, 1, 2, 3, 4}, 5) << endl;
	cout << "x = 2.0, a = {3, 2, 1} : eval = " << eval(2.0, {3, 2, 1}, 3) << endl;
	cout << "x = 3.0, a = {3, -2, -1} : eval = " << eval(3.0, {3, -2, -1}, 3) << endl;
	cout << "x = -3.0, a = {3, 2, 1} : eval = " << eval(-3.0, {3, 2, 1}, 3) << endl;
	cout << "x = 2.0, a = {3, 2} : eval = " << eval(2.0, {3, 2}, 2) << endl;
	cout << "x = 2.0, a = {4, 0, 9} : eval = " << eval(2.0, {4, 0, 9}, 3) << endl;
	cout << "x = 2.0, a = {10} : eval = " << eval(2.0, {10}, 1) << endl;
	cout << "x = 10.0, a = {0, 1} : eval = " << eval(10.0, {0, 1}, 2) << endl;
    */
	return 0;
}

// Definition eval function
double eval(double x, int a[], int len)
{
	double returnValue=0;
	/// Write your solution here
	for(int i=len-1; i>=0; i--){
        returnValue = returnValue + (a[i]*pow(x,i));
	}

	return returnValue;
}
// End of function definition
