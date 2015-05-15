// This is a a template program for you to submit lab assignments in lab 5
// Lab Title: Chained Iteration

//  Student Details
/// Name: Jonathan Getachew
/// ID: NSR/0294/07

#include <iostream>
#include <iomanip>

using namespace std;

// declaration of isInfinite function
int isInfinite(int a[], int len);
// End of function declaration

int main()
{

	int test[]={5, 3, 4, -1, 1, 2};
	cout << "Output of isInfinite function:" <<endl;

	cout << "{5, 3, 4, -1, 1, 2} : " << isInfinite(test, 6) << endl;

    /*
	cout << "When the input is {1, 2, -1, 5} = " << isInfinite({1, 2, -1, 5}, 4) << endl;
	cout << "When the input is {1, 2, 4, -1} = " << isInfinite({1, 2, 4, -1}, 4) << endl;
	cout << "When the input is {5, 3, 4, -1, 1, 2} = " << isInfinite({5, 3, 4, -1, 1, 2}, 6) << endl;
	cout << "When the input is {3} = " << isInfinite({3}, 1) << endl;
	cout << "When the input is {3, 2, 3, 1} = " << isInfinite({3, 2, 3, 1}, 4) << endl;
	cout << "When the input is {0} = " << isInfinite({0}, 1) << endl;
	cout << "When the input is {-1} = " << isInfinite({-1}, 1) << endl;
    */
	return 0;
}

// Definition isInfinite function
int isInfinite(int a[], int len)
{
	int returnValue = 0;

	/// Write your solution here
	for(int i=0; i<len; i++){
        if(a[i]==-1){
            returnValue = -1;
            break;
        }else if(a[i]<-1 || a[i]>=len){
            returnValue = 1;
            break;
        }
	}
	return returnValue;
}
// End of function definition
