#include<iostream>
using namespace std;

void fib(int n){
    int t1=0;
    int t2=1;
    int nextTerm;

    for(int i=1; i<=n; i++){
         cout<<t1<<endl;
         nextTerm =t1+t2;
         t1=t2;
         t2=nextTerm;
    }
    return;
}

int main()
{
    int n;
    cin>>n;

    fib(n);

    return 0;

}

// #include<iostream>
// using namespace std;
// int main(){
//     int n,t1=0,t2=1,i;
//     cin>>n;
//     for(i=1; i<=n; i++){
//         int nextTerm=t1+t2;
//         t1=t2;
//         t2=nextTerm;
//         cout<<nextTerm;

//     }
// }