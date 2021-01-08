#include <iostream>
using namespace std;
void majority(int a[], int n)
{
	int maxcount = 0;
	int index = -1;
	for(int i= 0 ; i < n;i++)
	{
		int count = 0;
		for(int  j= 0;j< n;j++)
		{
			if(a[i] == a[j] )
			{
				count++;
			}
		}
		if(count > maxcount)
		{
			maxcount = count;
			index = i;
		}
	}
	if(maxcount > n/2)
	{
		cout << "majority element"<<a[index]<<endl;
 
	}
	else
	{
		cout<<"There exist no majority element";
	}
 
}
 
 
 
int main() {
	// your code goes here
	int arr[] = {1,1,1,2,2,2,2,2,2,2,2,3,4,5,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	majority(arr,n);
	return 0;
}
