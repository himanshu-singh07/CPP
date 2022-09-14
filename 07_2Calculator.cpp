#include<iostream>
using namespace std;
int main(){
    int a,b,sum,sub,multi,div,modu;
    cout<<"a and b is:\t";
    cin>>a>>b;
    char op;
    cout<<"Enter the arthimatic opreation i.e;(+,-,*,/,%)"<<endl;
    cin>>op;
    switch (op)
    {  
    case '+':
        sum = a+b;
        cout<<sum<<endl;
        break;

    case '-':
        sub = a-b;
        cout<<sub<<endl;
        break;
    
    case '*':
        multi = a*b;
        cout<<multi<<endl;
        break;

    case '/':
        div = a/b;
        cout<<div<<endl;
        break;

    case '%':
        modu = a%b;
        cout<<modu<<endl;
        break;
    
    default:
        cout<<"Artimatic opreator error"<<endl;
        break;
    }
    return 0;

}