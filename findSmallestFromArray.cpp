#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"How many integers:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
      cin>>arr[i];
    // int n=sizeof(arr)/4;
    int smallest=arr[0];
    for(int i=1;i<n;i++){
        if(smallest>arr[i]){
        smallest=arr[i];
      }
    }
    cout<<"Smallest="<<smallest;
}
