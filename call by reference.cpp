#include<iostream>
using namespace std;
void swap(int *x, int *y);
int main()
{
    int a,b;
    cout<<"Enter a and b : ";
    cin>>a>>b;
    swap(&a,&b);
    cout<<"Value of a : "<<a<<endl;
    cout<<"Value of b : "<<b<<endl;
}
void swap(int *x, int *y)
{
    int c;
    c=*x;
    *x=*y;
    *y=c;

}