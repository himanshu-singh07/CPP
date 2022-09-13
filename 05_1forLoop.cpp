#include<iostream>
using namespace std; 
int main(){
    int sum,n,i;
    sum=0;
    cin>>n;
    for(i=0; i<=n; i++){
        sum=sum+i;
        cout<<"i=\t"<<i<<endl;
        cout<<sum<<endl;
        i++;
        cout<<"Updated i=\t"<<i<<endl;
        // sum=sum+i;
        cout<<"updated sum =\t"<<sum<<endl;
    }
    cout<<sum<<endl;
}
