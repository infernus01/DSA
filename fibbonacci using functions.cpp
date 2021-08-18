#include<iostream>
using namespace std;
int fib(int a);
int main()
{
    int a=0,b=1,c,n,res;
    cin>>n;
    res=fib(n);
    cout<<res;

}
int fib(int a)
{   int n1=0,n2=1,n3;
for(int i=0;i<a;i++)
{
    n3=n1+n2;
    n1=n2;
    n2=n3;
    
}

    return fib(n1);
}