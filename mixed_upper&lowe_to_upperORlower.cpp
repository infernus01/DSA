#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int size=(int)s.length();
    for(int i=0;i<size;i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            int diff=s[i]-'A';
            char neww='a'+diff;
            s[i]=neww;
        }
        
    }cout<<s<<endl;;
    string temp=s;

    for(int i=0;i<size;i++)
        {
            int diff=temp[i]-'a';
            char neww='A'+diff;
            temp[i]=neww;
        }
        
    cout<<temp;

}