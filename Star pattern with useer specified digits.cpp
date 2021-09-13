#include <iostream>
using namespace std;
int main()
{
    int n, d;
    cout<<"Enter Size of square patter";
    cin>>n;
    cout<<"Enter digit to be printed";
    cin>>d;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<" "<<d<<" ";
        }
        cout<<endl;
        
    }
}
