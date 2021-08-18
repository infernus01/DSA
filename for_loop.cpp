#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0, count=1;
    for(count=1;count<=n;count+=1)
    {
        sum+=count;
    }
    cout<<sum;
    return 0;
}