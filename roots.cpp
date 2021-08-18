#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the co-eff.: ";
    cin>>a>>b>>c;
    cout<<"The equation is "<<a<<"x^2+"<<b<<"x+"<<c<<endl;
    int d,r1,r2;
    d=b*b - 4*a*c;
    if(d==0)
    {
        cout<<"Roots are equal.";
        r1=-b/2*a;
        r2=r1;
        cout<<"Roots are: "<<r1<<endl<<r2;

    }
    else if(d>0)
    {
        cout<<"Roots are real and distinct."<<endl;
        r1=(-b+d^(1/2))/2*a;
        r2=(-b-d^(1/2))/2*a;
        cout<<"Roots are: "<<r1<<"\t"<<r2;
    }
    else
    {
        cout<<"Roots are imaginary or complex.";
    }
    
}