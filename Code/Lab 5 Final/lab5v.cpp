// This is a a template program for you to submit lab assignments in lab 5
// Lab Title: Distinct Integers

//  Student Details
/// Name: Jonathan Getachew
/// ID: NSR/0294/07

#include <iostream>
#include <iomanip>

using namespace std;

// declaration of countOfDistinct function
int countOfDistinct(int a[], int len);
// End of function declaration

int main()
{

	int test[]={1, 2, 3, 10};
	cout << "Output of countOfDistinct function:\n" <<endl;

	cout << "Number of distinct integers in {1, 2, 3, 10} = " << countOfDistinct(test, 4) << endl;

	/*
	cout << "Number of distinct integers in {1, 2, 3, 10} = " << countOfDistinct({1, 2, 3, 10}, 4) << endl;
	cout << "Number of distinct integers in {5, 5, 5, 5} = " << countOfDistinct({5, 5, 5, 5}, 4) << endl;
	cout << "Number of distinct integers in {8, 9, 321, 9, 321, 9, 8} = " << countOfDistinct({8, 9, 321, 9, 321, 9, 8}, 7) << endl;
	cout << "Number of distinct integers in {} = " << countOfDistinct({}, 0) << endl;
    */
	return 0;
}

// Definition countOfDistinct function
int countOfDistinct(int a[ ], int len)
{
	int returnValue = 0;

	/// Write your solution here
	//loop to sort the array in ascending order
	for(int i=0; i<len; i++){
        for(int j=0; j<len-1-i; j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
	}
	//loop to count the distinct elements
	for(int k = 0; k<len; k++){
        if(a[k]!=a[k+1]){
            returnValue++;
        }
	}

	return returnValue;
}
// End of function definition
