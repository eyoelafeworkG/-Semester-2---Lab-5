// This is a a template program for you to submit lab assignments in lab 5
// Lab Title: Balanced Array

//  Student Details
/// Name: Jonathan Getachew
/// ID: NSR/0294/07

#include <iostream>
#include <iomanip>

using namespace std;

// declaration of isBalanced function
int isBalanced(int a[], int len);
// End of function declaration

int main()
{

    int test[]={2, 3, 6, 7};
	cout << "Output of isBalanced function:" <<endl;
    if(isBalanced(test, 4)){
        cout << "{2, 3, 6, 7} : Yes" << endl;
    }else{
        cout << "{2, 3, 6, 7} : No" << endl;
    }
	/*
	cout << "{2, 3, 6, 7} : " << 1 == isBalanced({2, 3, 6, 7}, 4) ? "Yes": "No"<<endl;
	cout << "{6, 3, 2, 7} : " << 1 == isBalanced({6, 3, 2, 7} , 4) ? "Yes": "No" <<endl;
	cout << "{6, 7, 2, 3, 12} : " << 1 == isBalanced({6, 7, 2, 3, 12},  5)  ? "Yes": "No" <<endl;
	cout << "{6, 7, 2, 3, 14, 95} : " << 1 == isBalanced({6, 7, 2, 3, 14, 95}, 6)  ? "Yes": "No" <<endl;
	cout << "{7, 15, 2, 3} : " << 1 == isBalanced({7, 15, 2, 3}, 4)  ? "Yes": "No" <<endl;
	cout << "{16, 6, 2, 3} : " << 1 == isBalanced({16, 6, 2, 3}, 4)  ? "Yes": "No" <<endl;
	cout << "{2} : " << 1 == isBalanced({2}, 1)  ? "Yes": "No" <<endl;
	cout << "{3} : " << 1 == isBalanced({3}, 1)  ? "Yes": "No" <<endl;
	cout << "{0} : " << 1 == isBalanced({}, 0)  ? "Yes": "No" <<endl;
    */
	return 0;
}

// Definition isBalanced function
int isBalanced(int a[ ], int len)
{
	int returnValue = 1;

	/// Write your solution here
	for(int i=0; i<len; i+=2){
        if(a[i]%2!=0){
            returnValue=0;
            break;
        }
        if(a[i+1]%2!=1){
            returnValue=0;
            break;
        }
	}

	return returnValue;
}
// End of function definition
