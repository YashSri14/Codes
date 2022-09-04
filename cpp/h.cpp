#include<iostream>
using namespace std;
// class Employee
// {
//    static int id;
//    int no;
//    public :
//    void getdata()
//    {
//        cout<<"Enter no :";
//        cin>>no;
//        id++;
//    }
//    void printdata();
// };
// int Employee :: id;
// void Employee :: printdata()
// {
//     cout<< no <<" "<<id<<endl;
// }
// int main()
// {
//     Employee e;
//     e.getdata();
//     e.printdata();

//     e.getdata();
//     e.printdata();
    
//     e.getdata();
//     e.printdata();
// }
class test
{
    public :
    int a;
    test()
    {
        a = 0;
        cout<<"initial value of a :"<<a<<endl;
    }
    test (int );
    test (test &t)
    {
        a = t.a;
        cout<<"Copy value "<<a<<endl;
    }

};
test :: test(int z)
{
    a = z;
    cout<<"Normal value "<<a<<endl;
}
int main()
{
    test t(5);
    test t1(t);
}