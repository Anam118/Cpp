#include <iostream>
using namespace std;
void sumofele(int a[],int n)
{
	int i;
	int sum =0;
	for(i=0;i<=n;i++)
	{
	  sum += a[i];	
	}
	cout<<sum;
}

int main() {
	// your code goes here
	int arr[] = {1,2,3};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	sumofele(arr,n);
	
	return 0;
}
