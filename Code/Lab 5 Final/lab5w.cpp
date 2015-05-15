// This is a a template program for you to submit lab assignments in lab 5
// Lab Title: Character Filtering

//  Student Details
/// Name: Jonathan Getachew
/// ID: NSR/0294/07

#include <iostream>
#include <iomanip>

using namespace std;

// declaration of filterChars function
char filterChars(int index[], char a[], int iLen, int aLen);
void printArray(char a[], int len);
// End of function declaration

int main()
{

	cout << "Output of filterChars function:" <<endl;
	int index[]={2, 1, 0}, iLen=3, aLen=3;
    char a[]={'r', 'a', 'm'};

	filterChars(index, a, 3, 3);

	/*
	cout << "{1} and {'d', 'i', 'g'} : " << filterChars({1}, {'d', 'i', 'g'}, 1, 3) <<endl;
	cout << "{2, 1, 0}  and {'r', 'a', 'm'} : " << filterChars({2, 1, 0}, {'r', 'a', 'm'}, 3, 3) <<endl;
	cout << "{3, 1, 0} and {'r', 'a', 'm'} : " << filterChars({3, 1, 0}, {'r', 'a', 'm'}, 3, 3) <<endl;
	cout << "{2, -1, 0} and {'r', 'a', 'm'} : " << filterChars({2, -1, 0}, {'r', 'a', 'm'}, 3, 3) <<endl;
	cout << "{1, 1, 1} and {'c', 'a', 't'} : " << filterChars({1, 1, 1}, {'c', 'a', 't'}, 3, 3) <<endl;
	cout << "{3} and {'a'} : " << filterChars({3}, {'a'}, 1, 1) <<endl;
	cout << "{} and {'c','a','t'} : " << filterChars({}, {'c', 'a', 't'}, 0, 3) <<endl;
	cout << "{3} and {} : " << filterChars({3}, {}, 1, 0) <<endl;
    */
	return 0;
}

// Definition filterChars function
char filterChars(int index[], char a[], int iLen, int aLen)
{
	char returnValue[] = "NULL";

	/// Write your solution here
	for(int i=0; i<iLen; i++){
        if(index[i]>=0 && index[i]<aLen){
            returnValue[i] = a[index[i]]; // assigning values of the character array to the returnValue array
        }else{
            iLen=4;
            break;
        }
	}
    printArray(returnValue, aLen);

}
// definition of function to print out the output of filterChars array
void printArray(char a[], int len){
    for(int i=0; i<len; i++){
        cout << a[i];
    }
}
// End of function definition

