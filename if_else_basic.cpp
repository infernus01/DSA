#include<iostream>
using namespace std;
int main()
{
  /*  #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif */
    int savings;
    cin>>savings;
    if(savings>5000)
    {
        if(savings>10000)
        {
            cout<<"Mobile";
        }
        else
        {
            cout<<"Watch";
        }
    }
    else if(savings>2000)
    {
        cout<<"Watch \n";
    }
    else
    {
        cout<<"Nothing \n";
    }
    return 0;
}