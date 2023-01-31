#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    srand(time(0));
cout<<"random Array of size?:"<<endl;
int n;
cin>>n;

int *a=new int [n];

for(int i=0;i<n;i++)
    a[i]=rand()%1000;

for(int i=0;i<n;i++)
    cout<<a[i]<<endl;
    
    int index= LinearSearch(a,
    
}

                            
