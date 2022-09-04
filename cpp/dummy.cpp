#include<iostream>
using namespace std;
class a
{
    int x;
    string name;

    public :
     int y;
     void fun()
     {
         cin>>x;
         cin>>name;
        //  cin>>y;
     }
     void dis();
};
void a :: dis()
{
    cout<<x<<endl;
    cout<<name<<endl;
    cout<<y;
}
int main()
{
    a a1;
    a1.y = 56;
    a1.fun();
    a1.dis();
}