#include<iostream>
using namespace std;
int main()
{
    int x=0,y=1,z,n,i;
    cout<<"Enter value of n : ";
    cin>>n;
    // printf("%d",x);
    // printf("%d",y);
    for(i=0;i<n;i++)
    {
        cout<<x<<endl;
        x=y;
        z=x+y;
    }
}