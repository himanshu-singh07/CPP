#include<iostream>
using namespace std;

void ToH(int n,char src, char dest, char help){

    if(n==0){
        return;
    }

    ToH(n-1,src,help,dest); 
    cout<<"Move from src "<<src<<" to "<<dest<<endl;
    ToH(n-1,help,dest,src);
}

int main(){
    int n;
    ToH(n,'A','C','B');
    cin>>n; 

    return 0;

}