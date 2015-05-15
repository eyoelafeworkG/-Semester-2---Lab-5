// This is a a template program for you to submit lab assignments in lab 5
// Lab Title: Centered Array

//  Student Details
/// Name: Jonathan Getachew
/// ID: NSR/0294/07

#include <iostream>
#include <iomanip>

using namespace std;

// declaration of isCentered function
int isCentered(int a[], int len);
// End of function declaration

int main()
{

    int test[]={1, 2, 3, 4, 5};
	cout << "Output of isCentered function:" <<endl;
	if(isCentered(test, 5)){
        cout << "{1, 2, 3, 4, 5} : Yes" << endl;
    }else{
        cout << "{1, 2, 3, 4, 5} : No" << endl;
    }
	/*
	cout << "{1, 2, 3, 4, 5} : " << 1 == isCentered({1, 2, 3, 4, 5}, 5) ? "Yes": "No"<<endl;
	cout << "{3, 2, 1, 4, 5} : " << 1 == isCentered({3, 2, 1, 4, 5}, 5) ? "Yes": "No" <<endl;
	cout << "{3, 2, 1, 4, 1} : " << 1 == isCentered({3, 2, 1, 4, 1}, 5)  ? "Yes": "No" <<endl;
	cout << "{3, 2, 1, 1, 4, 6} : " << 1 == isCentered({3, 2, 1, 1, 4, 6}, 6)  ? "Yes": "No" <<endl;
	cout << "{} : " << 1 == isCentered({}, 0)  ? "Yes": "No" <<endl;
	cout << "{1} : " << 1 == isCentered({1}, 1)  ? "Yes": "No" <<endl;
    */
	return 0;
}

// Definition isCentered function
int isCentered(int a[ ], int len)
{
	int returnValue = 1;

	/// Write your solution here
	if(len>0){
        if(len%2==1){
            int mid = len/2;
            for(int i=0; i<len; i++){
                if(i!=mid){
                    if(a[i]<=a[mid]){
                        returnValue = 0;
                    }
                }
            }
        }else{
            returnValue = 0;
        }
    }else{
        returnValue = 0;
    }

	return returnValue;
}
// End of function definition
