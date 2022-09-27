// 
//Learnprogramo - programming made simple
#include<iostream>
using namespace std;
  int main()
  {
   int no,rev=0,r,a;
   cout<<"Enter any numb: ";
   cin>>no;
   a=no;
   for(;no>0;)
   {
    r=no%10;
    rev=rev*10+r;
    no=no/10;
   }
  cout<<"\nReverse of "<<a<<" is: "<<rev;
 }