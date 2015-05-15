// This is a a template program for you to submit lab assignments in lab 5
// Lab Title: Sum of Negative Values

//  Student Details
/// Name: Jonathan Getachew
/// ID: NSR/0294/07

#include <iostream>
#include <iomanip>

using namespace std;

// declaration of negSum function
int negSum(int a[], int len);
// End of function declaration

int main()
{

	int test[]={1, -2, 4, -1};
	cout << "Output of negSum function:" <<endl;

	cout << "{1, -2, 4, -1} : " << negSum(test, 4) << endl;
	/*
	cout << "When the input is {1, 2, -1, 5} = " << negSum({1, 2, -1, 5}, 4) << endl;
	cout << "When the input is {1, -2, 4, -1} = " << negSum({1, -2, 4, -1}, 4) << endl;
	cout << "When the input is {5, -3, 4, -1, 1, 2} = " << negSum({5, 3, 4, -1, 1, 2}, 6) << endl;
	cout << "When the input is {-5, -2, -3, -1} = " << negSum({-5, -2, -3, -1}, 4) << endl;
	cout << "When the input is {3, 2, 3, 1} = " << negSum({3, 2, 3, 1}, 4) << endl;
	cout << "When the input is {193,-193} = " << negSum({193,-193}, 2) << endl;
	cout << "When the input is {-1} = " << negSum({-1}, 1) << endl;
	cout << "When the input is {3} = " << negSum({3}, 1) << endl;
	cout << "When the input is {0} = " << negSum({0}, 1) << endl;
    */
	return 0;
}

// Definition negSum function
int negSum(int a[], int len)
{
	int returnValue = 0;

	/// Write your solution here
	for(int i=0; i<len; i++){
        if(a[i]<0){
            returnValue+=a[i];// adding each value to the returnValue
        }
	}

	return returnValue;
}
// End of function definition
