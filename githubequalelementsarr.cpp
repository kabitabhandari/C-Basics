#include<iostream>
using namespace std;

bool are_elements_equal (int arr[], int lowindex, int highindex );
int arraylength = 9; // 9 is inclusive (0 to 9)
int main() {

	int arr[]={8,8,8,8,8,8,8,8,8,8};
	//int arr[] = {5,9,4,6,5,5,5,5,5};
	bool answer= are_elements_equal(arr,0, arraylength);
  	if (answer == true){
		cout<<"All the elements in the array are equal";
	}
	else {
		cout<<" The elements in the array are not equal";
	}
    int a;
  	cin>>a;
	return 0;
}
bool are_elements_equal (int arr[], int lowindex, int highindex ){
	int mid;
	/* Case 1: single element left in the sub-problem */
	if (lowindex>= highindex){
		return true;
	}
	/* Case 2: create sub-problems and make recursive calls if 
	leftmost and rightmost elements are equal */

	else {
		if (arr[lowindex]== arr[highindex]){
			mid = (lowindex+highindex)/2;
			bool answerleft = are_elements_equal (arr,lowindex, mid);
			bool answerright = are_elements_equal (arr,mid+1,highindex);
			return answerleft && answerright;
			
		}
		/* Case 3: stop if leftmost and rightmost elements are unequal */
		else {
			return false;
		}
		
	}
}
