#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"n=\t";
    cin>>n;

    for(i=2; i<n; i++){
        if(n%i==0){
            cout<<"Not Prime"<<endl;
            break;
        }
        
    }
    if(i==n){
    cout<<" n is prime no"<<n<<endl;
    }
    return 0; 
     
} // namespace std;
