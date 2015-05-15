// This is a a template program for you to submit lab assignments in lab 5
// Lab Title: Odd-Heavy Array

//  Student Details
/// Name: Jonathan Getachew
/// ID: NSR/0294/07

#include <iostream>
#include <iomanip>

using namespace std;

// declaration of isOddHeavy function
int isOddHeavy(int a[], int len);
// End of function declaration

int main()
{

	int test[]={1};
	cout << "Output of isOddHeavy function:" <<endl;
    if(isOddHeavy(test, 1)==1){
        cout << "{1} : Yes" << endl;
    }else{
        cout << "{1} : No" << endl;
    }
    /*
	cout << "{1} : " << 1 == isOddHeavy({1}, 1) ? "Yes": "No"<<endl;
	cout << "{2} : " << 1 == isOddHeavy({2}, 1) ? "Yes": "No" <<endl;
	cout << "{1, 1, 1, 1, 1, 1} : " << 1 == isOddHeavy({1, 1, 1, 1, 1, 1}, 6)  ? "Yes": "No" <<endl;
	cout << "{2, 4, 6, 8, 11} : " << 1 == isOddHeavy({2, 4, 6, 8, 11}, 5)  ? "Yes": "No" <<endl;
	cout << "{-2, -4, -6, -8, -11} : " << 1 == isOddHeavy({-2, -4, -6, -8, -11}, 5)  ? "Yes": "No" <<endl;
    */
	return 0;
}

// Definition isOddHeavy function
int isOddHeavy(int a[ ], int len)
{
	int returnValue = 1, Size=3, isOdd[Size], evenElement,  j=0;

	/// Write your solution here
	if(len>1){
        for(int i=0; i<len, j<Size; i++){
            if(a[i]%2!=1){
                isOdd[j]=a[i];
                j++;
            }
        }
        for(int j=0; j<Size; j++){
            for(int i=0; i<len; i++){
                if(a[i]%2==0){
                    evenElement=a[i];
                }
                if(isOdd[j]<evenElement){
                    returnValue=0;
                    break;
                }
            }
        }
	}else{
        if(a[0]%2==0){
            returnValue = 0;
        }
	}

	return returnValue;
}
// End of function definition
