#include <iostream>
using namespace std;
void leftrotatebyone(int arr[],int n)
{
  int temp = arr[0];
  int i;
  for( i =0 ; i< n-1; i++)
  {
  	arr[i] = arr[i+1];
  }
  
  arr[i] = temp;
  
}
void leftrotate(int arr[],int d, int n)
{
	for(int i = 0;i<d;i++)
	{
		leftrotatebyone(arr,n);
	}
}
void printrotate(int arr[],int n)
{
	for(int i=0;i< n ;i++)
	{
		cout<< arr[i] <<" ";
	}
}
int main() {
	// your code goes here
	int arr[] ={ 1,2,3,7,4,5,5,6};
	int n = sizeof(arr)/sizeof(arr[0]);
	leftrotate(arr,2,n);
	printrotate(arr,n);
	return 0;
}
