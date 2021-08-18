#include<iostream>
using namespace std;
int main()
{
    int n,rev=0,t=0;
    cin>>n;
    for(int i=0;i<4;i++)
    { 
        t=n%10;
        rev=(rev*10)+t;
        n=n/10;
    }
    cout<<rev;
}