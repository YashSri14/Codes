#include<iostream>
using namespace std;
class student
{
public:
    int marks;
    void input()
    {
        cout<<"Enter :";
        cin >> marks;
    }
        friend void fun(student * s)
        {
            for (int i = 0; i < 3; i++)
            {
                cout << s[i].marks << endl;
            }
        }
    };

    int main()
    {
        student s[3];
        for (int i = 0; i < 3; i++)
        {
            s[i].input();
        }
        student s1;
        fun(s);
    }