#include<iostream>
using namespace std;

class employee
{
    int a,b,c;

    public :
           int d ,e;
           void getdata(int , int ,int);
           void setdata();
           void add();
};

void employee :: getdata(int a1,int b1,int c1)
{
    a = a1;
    b = b1;
    c = c1;
}
void employee :: setdata()
{
    cout<<"A "<<a<<endl;
    cout<<"B "<<b<<endl;
    cout<<"C "<<c<<endl;
    // cout<<"E "<<e<<endl;
    // cout<<"D "<<d<<endl;
}

void employee :: add()
{
    cout<<"The sum of a and b is "<<a+b<<endl;
}
int main()
{
    employee e;
    int a1 , b1 ,c1 ;
    cout<<"Enter a b c"<<endl;
    cin>>a1;
    cin>>b1;
    cin>>c1;
    e.getdata(a1,b1,c1);
    e.setdata();
    e.add();
}

#include <iostream>
using namespace std;

class info
{
    int n, a;
    void input()
    {
        cout << "Enter a and n :";
        cin >> a;
        cin >> n;
    }

public:
    int add();
};

int info :: add()
{
    input();
    cout << "Add is :" << a + n << endl;
    return 0; 
}
int main()
{
    info i;
    // int z =
     i.add();
    // cout << "Add is :" <<z<< endl;
}
