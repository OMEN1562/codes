#include <iostream>
using namespace std;
int main()
{
	int arr[] = {1,2,3,1,2,3,4,5,5,4,6};
	int count=0;
	for(int i=0;i<=10;i++){
		for(int j=0;j<=10;j++){
			if(arr[i]==arr[j]){
				count++;
			}
		}
		
		cout<<arr[i]<<":"<<count<< "times"<<endl;
		count=0;
	}
}
