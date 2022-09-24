#include<iostream>

using namespace std;
int main()
{
    int n,r=0,lastdigit;
    cin>>n;
    while(n>0){
        lastdigit=n%10;
        r=r*10+lastdigit;
        n=n/10;
    }
    printf("%d",r);
    return 0;
}