// This is a a template program for you to submit lab assignments in lab 5
// Lab Title: Daphne Array

//  Student Details
/// Name: Jonathan Getachew
/// ID: NSR/0294/07

#include <iostream>
#include <iomanip>

using namespace std;

// declaration of isDaphneArray function
int isDaphneArray(int a[], int len);
// End of function declaration

int main()
{

	int test[]={1, -3, 5, -6};
	cout << "Output of isDaphneArray function:" <<endl;
	if(isDaphneArray(test, 4)){
        cout << "{1, -3, 5, -6} : Yes" << endl;
    }else{
        cout << "{1, -3, 5, -6} : No" << endl;
    }

	/// Write statements that call your function to test your solution
	/*
	cout << "{1, -3, 5, -6} : " << 1 == isDaphneArray({1, -3, 5, -6}, 4) ? "Yes": "No"<<endl;
	cout << "{{-3, 5, -6} : " << 1 == isDaphneArray({{-3, 5, -6}, 3) ? "Yes": "No"<<endl;
	cout << "{-3, 5} : " << 1 == isDaphneArray({-3, 5}, 2) ? "Yes": "No" <<endl;
	cout << "{5} : " << 1 == isDaphneArray({5}, 1)  ? "Yes": "No" <<endl;
	cout << "{} : " << 1 == isDaphneArray({}, 0)  ? "Yes": "No" <<endl;
    */
	return 0;
}

// Definition isDaphneArray function
int isDaphneArray(int a[], int len)
{
	int returnValue = 1;

	/// Write your solution here
	if(len>1){
        for(int i=0; i<len-1; i++){
            if( a[i]*a[i+1] > 0){
                returnValue = 0;
                break;
            }
        }
    }else if(len==1);
    else{
        returnValue = 0;
        cout << "else "<<returnValue << endl;
    }
    cout << returnValue<< endl;

	return returnValue;
}
// End of function definition
