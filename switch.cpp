#include<iostream>
using namespace std;
int main()
{
    char button;
    cout<<"Input a character : ";
    cin>>button;
/*  if(button=='a'){cout<<"Hello!";}
    else if(button=='b'){cout<<"Hola";}
    else if(button=='c'){cout<<"Namaste";}
    else if(button=='d'){cout<<"Adaab";}
    else cout<<"I'm still learning"; */
    switch (button)
    {
    case 'a':
        cout<<"Hello!";
        break;
    case 'b':
        cout<<"Hola";
        break;
    case 'c':
        cout<<"Namaste";
        break;
    case 'd':
        cout<<"Adaab";
        break;

    default:
    cout<<"I'm still learning";
        break;
    }
}