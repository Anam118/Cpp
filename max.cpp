#include <iostream>
using namespace std;
void maxele(int a[],int n)
{
	int max = a[0];
	int i;
	for(i=0;i<=n;i++)
	{
		if(max<a[i])
		{
			max= a[i];
		}
	}
	cout<<"max element: "<< max;
}

int main() {
	// your code goes here
	int arr[]={0,1,2,3};
	int n = sizeof(arr)/sizeof(arr[0]);
	maxele(arr,n);
	return 0;
}
