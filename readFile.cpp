#include<bits/stdc++.h>
using namespace std;

void printList(int* p,int n)
{
    for(int i=0;i<n;i++)
        cout<<p[i]<<endl;
        cout<<"----------------------------";
}

int main(){
    ifstream fin("1k.txt");
    int *a=new int[10];

    for(int i=0;i<10;i++)
        fin>>a[i];

    printList(a,10);
}
