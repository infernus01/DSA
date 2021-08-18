#include<iostream>
using namespace std;
int main()
// {
//     int x[3]={2,3,1},y[3]={5,1,2};
//     int res=0;
//     for(int i=0;i<3;i++)
//     {
//         res=res+x[i]*y[i];
//     }
// cout<<res;
// }
{
    int n;
    cin>>n;
    int x[n],y[n];
    for(int c=0;c<n;c++)
    {
        cin>>x[c];
        cin>>y[c];
    }
    int res=0;
    for(int i=0;i<n;i++)
    {
        res=res+x[i]*y[i];
    }
    cout<<res;
}