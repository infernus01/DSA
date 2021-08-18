#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int size=(int)s.length();
    int code='a';
    for(int i=0;i<size;i++)
    {
        int diff=s[i]-code;
        char neww='A'+diff;
        s[i]=neww;
    }
    cout<<s;
}