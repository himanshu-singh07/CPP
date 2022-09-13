#include<iostream>
using namespace std;
int main()
{
     int a,b,c;
     cin>>a>>b>>c;
     if(a>b){
        if(a>c){
            cout<<"a is greatest\t"<<a<<endl;
        }
        else{
            cout<<"c is greatest\t"<<c<<endl;
        }
     }
     else if(b>a){
        if(b>c){
            cout<<"b is greatest\t"<<b<<endl;
        }
        else{
            cout<<"c is greatest\t"<<c<<endl;
        }
     }
     else if(a==b && b==c){
        cout<<"a b c are equall\t"<<a <<b <<c<<endl;
     }
} 
