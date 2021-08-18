#include <iostream>
using namespace std;
int main()
{
    int n=35;
    int i=2;
    while(i<n)
    {
        if(n%i==0)
        cout<<"not prime ";
        break;
        else
        {
            i++;
        }
        
    }
    cout<<"prime"<<endl;   
}