#include <iostream>
using namespace std;
int main()
{
	int n;
	int arr[n];
	int sum=0;
	cout<<"Enter nos.";
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		sum = sum + arr[i];
	}
	cout<<sum<<" sum of elements in the array"<<endl;
	cout<<float(sum)/n<<" is the average value of array";
}
