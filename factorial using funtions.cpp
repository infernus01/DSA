#include<iostream>
using namespace std;
int fact(int n);
int main()
{
    int n;
    cout<<"Enter a no. : ";
    cin>>n;
    cout<<"Factorial of "<<n<<" : "<<fact(n);
}
int fact(int n)
{  
    int fact=1;
    for(int i=n;i>0;i--)
    {
        fact*=i;
    }
    return fact;
}