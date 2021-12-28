#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
   public:
   int *real;
   int *imagi;
complex(int *real,int *imagi)
{
this->real=real;
this->imagi=imagi;
}
void display()
{
   cout<<*real<<endl<<*imagi<<endl;
}
};
void add(complex c1,complex c2)
{
cout<<*c1.real+*c2.real<<"+"<<*c1.imagi+*c2.imagi<<"i"<<endl;
}
void sub(complex c1, complex c2)
{
cout<<"("<<*c1.real-*c2.real<<")+("<<*c1.imagi-*c2.imagi<<"i)"<<endl;
}
void multi(complex c1,complex c2)
{
int a=*c1.real;
int b=*c2.real;
int c=*c1.imagi;
int d=*c2.imagi;
cout<<"("<<a*b-c*d<<")+("<<a*d+c*b<<"i)"<<endl;
}
int main()
{
int c1=3,c2=4,c3=4,c4=5;
complex p1(&c1,&c2);
complex p2(&c3,&c4);
  add(p1,p2);
  sub(p1,p2);
  multi(p1,p2);
  getchar();
  return 0;
}