#include<iostream>
using namespace std;

class savings_acc
{
    protected :
    string name;
    int acc_no;
    float balance;
    void get1()
    {
        cin>>name;
        cin>>acc_no;
        cin>>balance;
    }
};

class b : public savings_acc
{
    public :
    int lac;
    int la;
    int lad;
    void input()
    {
        savings_acc :: get1();   
        cout<<"Enter the balance";
        cin>>la;
    }
    void update()
    {
        balance = balance + la;
    }
    void display()
    {
        cout<<balance;
    }

};
int main ()
{
    cout << 2;
}