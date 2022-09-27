#include<iostream>
using namespace std;
int main()
{
    int a,b,i,n;
    cout<<"a and b is\t";
    cin>>a>>b;

    for(n=a; n<=b; n++){
        for(i=2;i<n;i++){
            if (n%i==0)
            {
                break;
            }
            
        }
        if(n==i){
            cout<<"Prime No"<<i<<endl;
        }
    }
} // namespace std;
