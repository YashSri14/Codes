#include<iostream>
using namespace std;
class B;
class A
{
   private :
   float temp;
   public :
      A(float x)
      {
          temp = x;
      }
      friend void ab(A,B);
};
class B
{
    private :
    float humid;
    public :
    B(float y)
    {
       humid = y;
    }
    friend void ab(A,B);
};

void ab(A a,B b)
{
   cout<<a.temp<<endl<<b.humid;

}
int main()
{
    A a(34.5);
    B b(23.23);
    ab(a ,b);
}