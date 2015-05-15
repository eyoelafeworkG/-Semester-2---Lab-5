// This is a a template program for you to submit lab assignments in lab 5
// Lab Title: Flip-flop Array

//  Student Details
/// Name: Jonathan Getachew
/// ID: NSR/0294/07

#include <iostream>
#include <iomanip>

using namespace std;

// declaration of isFlipFlop function
int isFlipFlop(int[], int len);
// End of function declaration

int main()
{
    int test[]={0, 3, 4, -7};
	cout << "Output of isFlipFlop function:" <<endl;
    if(isFlipFlop(test, 4)){
        cout << "{0, 3, 4, -7} : Yes" << endl;
    }else{
        cout << "{0, 3, 4, -7} : No" << endl;
    }
	/*
	cout << "{1, 2, 3, 4} : " << 1 == isFlipFlop({1, 2, 3, 4} , 4) ? "Yes": "No" <<endl;
	cout << "{2, 2, 3, 4} : " << 1 == isFlipFlop({2, 2, 3, 4},  4)  ? "Yes": "No" <<endl;
	cout << "{1, 2, 3, 3, 4} : " << 1 == isFlipFlop({1, 2, 3, 3, 4}, 5)  ? "Yes": "No" <<endl;
	cout << "{2} : " << 1 == isFlipFlop({2}, 1)  ? "Yes": "No" <<endl;
    */
	return 0;
}

// Definition isFlipFlop function
int isFlipFlop(int a[], int len)
{
	int returnValue;

	/// Write your solution here
	for(int i=0; i<len; i++){
        if(a[i]%2==0){
            if(a[i+1]%2!=0){
                returnValue=1;
            }else{
                returnValue=0;
                break;
            }
        }else{
            if(a[i+1]%2==0){
                returnValue=1;
            }else{
                returnValue=0;
                break;
            }
        }
	}

	return returnValue;
}
// End of function definition
