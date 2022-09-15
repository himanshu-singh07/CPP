#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    printf("n=");
    cin>>n;
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}