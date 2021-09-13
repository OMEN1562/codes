#include <iostream>
using namespace std;
char entry(char arr[],int n){
	for(int i=0;i<=n;i++)
	cin>>arr[i];
}

char output(char arr[],int n){
	for(int i=0;i<=n;i++)
	cout<<arr[i]<<" ";
}
	
main()
{
	int n;
	cout<<"Enter n";
	cin>>n;
	char arr[n];
	entry(arr, n);
	output(arr, n);
}