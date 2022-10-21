#include<iostream>
using namespace std;
#include<unistd.h>


int fn()
{
    string x=">>",y=" ";

    for(int i=1;i<=10;i++)
    {

            cout<<x<<y;

     }
     //system("cls");
     sleep(1);
}
int main()
{
    fn();

}

