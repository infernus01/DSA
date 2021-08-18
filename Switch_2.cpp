#include<iostream>
using namespace std;
int main()
{
    float n1,n2;
    cout<<"Enter two no.s : ";
    cin>>n1>>n2;
    char op;
    cout<<"Enter an operator : ";
    cin>>op;
    
    switch (op)
    {
    case '+':
        cout<<n1+n2<<endl;
        break;
    case '-':
        cout<<n1-n2<<endl;
        break;
    case '*':
        cout<<n1*n2<<endl;
        break;
    case '/':
        cout<<n1/n2<<endl;
        break;
    default:
    cout<<"Error 404:Not found";
        break;
    }
}