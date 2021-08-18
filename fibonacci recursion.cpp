#include<bits/stdc++.h>
using namespace std;
 
// int fib(int n)
// {
//     if (n <= 1)
//         return n;
//     else
//     return fib(n-1) + fib(n-2);
// }
 
// int main ()
// {
//     int n;
//     cin>>n;
//     cout <<fib(n)<<endl;
//     return 0;
// }
 
int fibo(int val)
{
    if (val==0)
        return 0;
    else if (val==1)
        return 1;
    else
        return (fibo(val-1)+fibo(val-2));
}
 
int main()
{
    int i,n;
    printf("Enter the nth term: ");
    scanf("%d",&n);
    printf("Fibonacci series of first %d terms is :     ",n);
    for(i=0;i<n;i++)
    {
        printf("%d\t",fibo(i));
    }
}
