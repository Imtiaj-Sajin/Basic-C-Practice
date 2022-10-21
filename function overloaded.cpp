#include<iostream>
using namespace std;

int op(){
    cout<<"uff"<<endl;
    }
void op(double y){cout<<"mmmm"<<endl;}
    void op(float y){cout<<y<<endl;}
    void op(int x){cout<<"beta"<<endl;}
        void op(bool x){cout<<"tu tuu toottu"<<endl;}
        void op (int x,double y){cout<<x<<y<<endl;}
        void op (float x,int y){cout<<x<<y<<endl;}
int main() {
op(6);
op();
int y=5;
op(29);
float    x=9.995;
op(x);
op (3.99f);
op (3.99);
op(2.33602132415451);//this is always double

    op(true);

    op(y,x);
    op(x,y);
}
