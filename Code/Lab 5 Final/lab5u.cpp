// This is a a template program for you to submit lab assignments in lab 5
// Lab Title: Cucumber Array

//  Student Details
/// Name: Jonathan Getachew
/// ID: NSR/0294/07

#include <iostream>
#include <iomanip>

using namespace std;

// declaration of isCucumber function
int isCucumber(int a[], int len);
// End of function declaration

int main()
{

	int test[]={3, 4, 12, 11};
	cout << "Output of isCucumber function:" <<endl;
	if(isCucumber(test, 4)){
        cout << "{3, 4, 12, 11} : Yes" << endl;
    }else{
        cout << "{3, 4, 12, 11} : No" << endl;
    }
	return 0;
}

// Definition isCucumber function
int isCucumber(int a[ ], int len)
{
	int returnValue = 1;

	/// Write your solution here
	if(len>1){
        int ctr=0;
        for(int i=0; i<len; i++){
            for(int j=1; j<len-1; j++){
                int sum = a[i] + a[j];
                if(sum == 15){
                    ctr++;
                }
            }
            if(ctr>1){
                returnValue = 0;
                break;
            }
        }

    }else{
        returnValue = 0;
    }

	return returnValue;
}
// End of function definition
