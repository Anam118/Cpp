int miss(int a[] , int n )
{
  int	total = (n+2)*(n+1)/2;
  for (int i=0;i<n;i++)
  {
  	total =  total - a[i];
  }
  	return total;
 
 
}
 
#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
	int arr[] = {1,2,3,4,6};
	int n = sizeof(arr)/sizeof(arr[0]);
    int missing =	miss(arr,n);
    cout<<missing;
 
	return 0;
}
