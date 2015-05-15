// This is a a template program for you to submit lab assignments in lab 5
// Lab Title: Layered Array

//  Student Details
/// Name: Jonathan Getachew
/// ID: NSR/0294/07

#include <iostream>
#include <iomanip>

using namespace std;

// declaration of isLayered function
int isLayered(int a[], int len);
// End of function declaration

int main()
{
    int test[]={1, 1, 2, 2, 2, 3, 3};
	cout << "Output of isLayered function:" <<endl;
	if(isLayered(test, 7)){
        cout << "{1, 1, 2, 2, 2, 3, 3} : Yes" << endl;
    }else{
        cout << "{1, 1, 2, 2, 2, 3, 3} : No" << endl;
    }
	/*
	cout << "{1, 1, 2, 2, 2, 3, 3} : " << 1 == isLayered({1, 1, 2, 2, 2, 3, 3}, 7) ? "Yes": "No"<<endl;
	cout << "{3, 3, 3, 3, 3, 3, 3} : " << 1 == isLayered({3, 3, 3, 3, 3, 3, 3}, 7) ? "Yes": "No"<<endl;
	cout << "{1, 2, 2, 2, 3, 3} : " << 1 == isLayered({1, 2, 2, 2, 3, 3}, 6) ? "Yes": "No" <<endl;
	cout << "{2, 2, 2, 3, 3, 1, 1} : " << 1 == isLayered({2, 2, 2, 3, 3, 1, 1}, 7)  ? "Yes": "No" <<endl;
	cout << "{2} : " << 1 == isLayered({2}, 1)  ? "Yes": "No" <<endl;
	cout << "{} : " << 1 == isLayered({}, 0)  ? "Yes": "No" <<endl;
    */
	return 0;
}

// Definition isLayered function
int isLayered(int a[ ], int len)
{
	int returnValue = 1;

	/// Write your solution here
	if(len > 1){
        for(int i=0; i<len; i++){
            if(a[i]>a[i+1]){
                returnValue=0;
                break;
            }
        }

        for(int j=1; j<len; j++){
            int checkRep = a[0], ctr=0; // variable to check the number of iterations
            for(int k=1; k<j; k++){
                if(checkRep==a[k]){
                    ctr++;// update the counter
                }else{
                    if(ctr>0){
                        checkRep = a[k];//setting the a new value to checkRep in order to check other repetitions
                        ctr=0; // resetting the counter in order to be used by the next iteration of the loop
                    }else{
                        returnValue = 0;
                        break;
                    }
                }
            }
        }
    }else{
        returnValue = 0;
    }

	return returnValue;
}
// End of function definition
