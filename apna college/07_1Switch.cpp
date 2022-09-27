#include<iostream>
using namespace std;
int main()
{
     char button;
     cout<<"Input a character:\t";
     cin>>button;

     switch (button){
        case 'a':
            cout<<"App";
            break;
        case 'b':
            cout<<"Bro";
            break;
        case 'c':
            cout<<"Chat";
            break;
        case 'd':
            cout<<"Dost";
             break;
        default:
            cout<<"I dont know";
            break;

     }
    return 0;
} // namespace std;

