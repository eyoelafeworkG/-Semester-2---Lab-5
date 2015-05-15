// This is a a template program for you to submit lab assignments in lab 5
// Lab Title: Cumulative Array

//  Student Details
/// Name: Jonathan Getachew
/// ID: NSR/0294/07

#include <iostream>
#include <iomanip>

using namespace std;

// declaration of isCumulative function
int isCumulative(int a[], int len);
// End of function declaration

int main()
{

    int test[]={3, 3, 6, 12, 24};
	cout << "Output of isCumulative function:" <<endl;
    if(isCumulative(test, 5)){
        cout << "{3, 3, 6, 12, 24} : Yes" << endl;
    }else{
        cout << "{3, 3, 6, 12, 24} : No" << endl;
    }
	/*
	cout << "{1} : " << 1 == isCumulative({1}, 1) ? "Yes": "No"<<endl;
	cout << "{0,0,0,0,0,0} : " << 1 == isCumulative({0,0,0,0,0,0}, 6) ? "Yes": "No" <<endl;
	cout << "{1, 1, 1, 1, 1, 1} : " << 1 == isCumulative({1, 1, 1, 1, 1, 1}, 6)  ? "Yes": "No" <<endl;
	cout << "{3, 3, 6, 12, 24} : " << 1 == isCumulative({3, 3, 6, 12, 24}, 5)  ? "Yes": "No" <<endl;
	cout << "{-3, -3, -6, -12, -24} : " << 1 == isCumulative({-3, -3, -6, -12, -24}, 5)  ? "Yes": "No" <<endl;
	cout << "{-3, -3, 6, 12, 24} : " << 1 == isCumulative({-3, -3, 6, 12, 24}, 5)  ? "Yes": "No" <<endl;
    */
	return 0;
}

// Definition isCumulative function
int isCumulative(int a[ ], int len)
{
	int returnValue = 1;

	/// Write your solution here
	if(len<2){
        returnValue = 0;
	}else{
        for(int i=0; i<len-1; i++){
            if(i==0){
                if(a[i]!=a[i+1]){
                    returnValue = 0;
                    break;
                }
            }else{
                if(a[i+1]!=(a[i]+a[i-1])){
                    returnValue = 0;
                    break;
                }
            }
        }
	}

	return returnValue;
}
// End of function definition
