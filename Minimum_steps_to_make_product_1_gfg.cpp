#include <iostream>
using namespace std;

int main()
{
	int n, count=0, steps=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]<0){
			count++;
		}
	}
	for(int i =0;i<n;i++)	
	{
		if(a[i]<0)
		{
			steps=steps + (1-a[i]);
		}
		else
		{
			steps = steps + (a[i]-1);
		}
	}
	cout<<steps;
}
