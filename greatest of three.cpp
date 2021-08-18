#include<iostream>
using namespace std;
int main()
{
  int a,b,c;
    cin>>a>>b>>c;
    if(a<b)
    {
        if(a<c)
        {
            cout<<"a is the smallest";
        }
        else
        {
            cout<<"c is the smallest";
        }
    }
    else if(b<c)
    {
        cout<<"b is the smallest \n";
    }
    else
    {
        cout<<"c is the smallest";
    }
    return 0;
}