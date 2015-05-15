// This is a a template program for you to submit lab assignments in lab 5
// Lab Title: Hollow Array

//  Student Details
/// Name: Jonathan Getachew
/// ID: NSR/0294/07

#include <iostream>
#include <iomanip>

using namespace std;

// declaration of isHollow function
int isHollow(int a[ ], int len);
// End of function declaration

int main()
{
	int test[]={1,2,0,0,0,3,4};
	cout << "Output of is hollow function:" <<endl;

	if(isHollow(test, 7)){
        cout << "{1,2,0,0,0,3,4} : Yes" << endl;
    }else{
        cout << "{1,2,0,0,0,3,4} : No" << endl;
    }
    /*
	cout << "{1,2,0,0,0,3,4} : " << 1 == isHollow(test, 7) ? "Yes": "No"<<endl;
	cout << "{1,2,0,0,0,3,4} : " << 1 == isHollow({1,2,0,0,0,3,4}, 7) ? "Yes": "No"<<endl;//yes
	cout << "{1,1,1,1,0,0,0,0,0,2,1,2,18} : " << 1 == isHollow({1,1,1,1,0,0,0,0,0,2,1,2,18} , 13) ? "Yes": "No" <<endl;//yes
	cout << "{1,2,0,0,3,4} : " << 1 == isHollow({1,2,0,0,3,4}, 6)  ? "Yes": "No" <<endl;//no
	cout << "{1,2,0,0,0,3,4,5} : " << 1 == isHollow({1,2,0,0,0,3,4,5}, 8)  ? "Yes": "No" <<endl;//no
	cout << "{3,8,3,0,0,0,3,3} : " << 1 == isHollow({3,8,3,0,0,0,3,3}, 8)  ? "Yes": "No" <<endl;//no
	cout << "{1,2,0,0,0,3,4,0} : " << 1 == isHollow({1,2,0,0,0,3,4,0}, 8)  ? "Yes": "No" <<endl;//no
	cout << "{0,1,2,0,0,0,3,4} : " << 1 == isHollow({0,1,2,0,0,0,3,4}, 8)  ? "Yes": "No" <<endl;//no
	cout << "{0,0,0} : " << 1 == isHollow({0,0,0}, 3) ? "Yes": "No" <<endl;//yes
	*/
	return 0;
}

// Definition isHollow function
int isHollow(int a[ ], int len)
{
	int returnValue, non0Before=0, non0After=0, zeroCtr=0, i=0;
	// Write your solution here
	//loop to count the number of non zero elements before
	for(; i<len; i++){
        if(a[i]!=0){
            non0Before++;
        }else{
            break;
        }
	}
	//loop to count the number of zeros
	for(; i<len; i++){
        if(a[i]==0){
            zeroCtr++;
            if(a[i+1]==0){
                zeroCtr++;
                if(a[i+2]==0){
                    zeroCtr++;
                    break;
                }else{
                    break;
                }
            }else{
                break;
            }
        }else{
            break;
        }
    }

    for(;i<len; i++){
        if(a[i]!=0){
            non0After++;
        }
    }

    if(non0Before==non0After && zeroCtr>=3){
        returnValue=1;
    }else{
        returnValue=0;
    }

	return returnValue;
}
// End of function definition
