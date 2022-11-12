#include <iostream>
using namespace std;

void update(int *a,int *b) {
    int y;
    int x=*a+*b;
    if(*a>*b)
        y=*a-*b;
    else
        y=*b-*a;

    *a=x;
    *b=y;
}

int main() {
    int a, b;
    
    cin>>a;
    cin>>b;
    update(&a, &b);
    cout<<a<<endl<<b;

    return 0;
}
