#include<iostream>
using namespace std;
int main()
{
    int a;
    a=90;
    printf("size of a\n%d", sizeof(a));
    cout<<"\nsize of a\n"<<sizeof(a)<<endl;


    float b;
    b=234.4l;
    printf("size of b\n%d\n",sizeof(b));
    cout<<"size of b\n"<<sizeof(b)<<endl;
    

    char c;
    cout<<"size of c\n"<<sizeof(c)<<endl;
    printf("size of c \n%d\n",sizeof(c));

    bool d;
    printf("size of d\n%d\n",sizeof(d));
    cout<<"size of d  \n"<<sizeof(d)<<endl;

    short int ab;
    long int li;
    cout<<"size of ab \t"<<sizeof(ab)<<endl;
    cout<<"size of longint \t"<<sizeof(li)<<endl;
    printf("hello\n%d\n",sizeof(li));




    
}
