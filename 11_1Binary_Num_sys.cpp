#include <iostream>
using namespace std;
int main()
{
    int D,i;
    cout << "D=";
    cin >> D;

    while (D > 0)
    {
        if (D % 2 == 0)
        {
            printf("0");
        }
        else{
            printf("1");
        }
        D = D / 2;
        // i = D/2;
        // if(i == 1/2){
        //     printf("0");
        // }
        // D=D;
       
    }
    // printf("1");
    // int i;
    // i =1/2;
    // cout<<i<<endl;
}