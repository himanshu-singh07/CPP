#include<iostream>
using namespace std;
int main(){
    int i,j,row,col;
    cout<<"row and col=\t";
    cin>>row>>col;
    for(i=1;i<=row;i++){
        for(j=1;j<=col;j++){
            if(i==1 ||i==row){
                printf("*\t");
            
            }
            else if ( j==1 || j==col )
            {
                printf("*\t");
            }
            else{
                printf("\t");
            }
            
        }
        printf("\n");
    }
}