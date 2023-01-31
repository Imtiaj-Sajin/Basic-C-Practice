#include<iostream>
#include<stdlib.h> //rand(),srand()
#include<time.h> //time()
using namespace std;

int main(){
    srand(time(0)); //assign seeds(while assigning random number it needed initially
    for(int i=0;i<100;i++){
        //cout<<rand()<<" "<<endl;
        //cout<<rand()<<" "<<rand()%2<<endl;//if I need bool number
        //cout<<rand()<<" "<<rand()%10<<endl;//if I need 1-9 number
        //cout<<rand()<<" "<<rand()%100<<endl;//if I need 1-99 number
        cout<<rand()<<" "<<rand()%100+1<<endl;//if I need 0-100 number
    }
}
