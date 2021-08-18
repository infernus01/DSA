#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x[n],y[n];
    int res[n];
    
    for(int c=0;c<n;c++)
    {  
        cin>>x[c]>>y[c];
        res[c]=x[c]+y[c];
    }

    for(int i=0;i<n;i++){
        cout<<"["<<res[i]<<"]";
    }
    return 0;
}