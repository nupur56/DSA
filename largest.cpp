#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n,max;
	cout<<"Enter the length of array:  ";
	cin>>n;
	int A[n];
	cout<<"Enter array elements:  ";
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	max =A[0];
	for(int i=0;i<n;i++)
	{
		if(A[i]>max)
		{
			max=A[i];
		}
	}
	cout<<"Largest number is:  "<<max;
	return 0;
}
