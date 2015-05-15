// This is a a template program for you to submit lab assignments in lab 5
// Lab Title: Dual Array

//  Student Details
/// Name: Jonathan Getachew
/// ID: NSR/0294/07

#include <iostream>
#include <iomanip>

using namespace std;

// declaration of isDual function
int isDual(int a[], int len);
// End of function declaration

int main()
{

	int test[]={1, 2, 3, 0};
	cout << "Output of isDual function:" <<endl;
	if(isDual(test, 4)){
        cout << "{1, 2, 3, 0} : Yes" << endl;
    }else{
        cout << "{1, 2, 3, 0} : No" << endl;
    }
    /*
	cout << "{1, 2, 3, 0} : " << 1 == isDual({1, 2, 3, 0}, 4) ? "Yes": "No"<<endl;
	cout << "{1, 2, 2, 1, 3, 0} : " << 1 == isDual({1, 2, 2, 1, 3, 0}, 6) ? "Yes": "No"<<endl;
	cout << "{1, 1, 2, 2} : " << 1 == isDual({1, 1, 2, 2}, 4) ? "Yes": "No" <<endl;
	cout << "{1, 2, 1} : " << 1 == isDual({1, 2, 1}, 3)  ? "Yes": "No" <<endl;
	cout << "{} : " << 1 == isDual({}, 0)  ? "Yes": "No" <<endl;
    */
	return 0;
}

// Definition isDual function
int isDual(int a[ ], int len)
{
	int returnValue = 1;

	int _size=len/2;
    int sum[_size];

	/// Write your solution here
    if(len%2==0){
        int j=0;
        //loop to add consecutive pair array elements
        for(int i=0; i<len; i+=2){
            sum[j]=a[i]+a[i+1];
            j++;
        }
        //loop to check if elements of the sum array are equal
        for(int i=0; i<_size-1; i++){
            if(sum[i]!=sum[i+1]){
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
