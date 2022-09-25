#include<bits/stdc++.h>
using namespace std;

int binaryToDecimal(int b){
    int ans=0;
    int x=1;
    while(x>0){
        int y =b%10;
        ans =ans+x*y;
        x=x*2;
        b=b/10;
    }
    return ans;
}

int octalToDecimal(int o){
    
    int ans=0;
    int x=1;
    while(x>0){
        int y =o%10;
        ans =ans+x*y;
        x=x*8;
        o=o/10;
    }
    return ans;
}

int hexaTODecimal(string h){
    int ans=0;
    int x=1;
    int s=h.size();
    // cout<<s<<endl;
    for( int i=s-1; i>=0; i--){
        if(h[i]>='0'&&h[i]<='9'){
            //cout<<h[i];//check the value of i
            ans += x*(h[i]-'0');
        }
        else if(h[i]>='A'&&h[i]<='F'){
            ans += x*(h[i]-'A'+10);
        }
        x *=16;
    }
    return ans;
}

int decimalToBinary(int D){
    int x=1,ans=0;
    while(x<=D){
        x=x*2;
        // cout<<x<<"\t";
    }
    x/=2;
    // cout<<x<<endl;

    while(x>0){
        int lastDigit =D/x;
        D-=lastDigit*x;
        // cout<<"D="<<D;
        x/=2;
        ans=ans*10+lastDigit;
        // cout<<"ans="<<ans;
    }
    return ans;
}

int decimalToOctal(int OD){
    int x=1,ans=0;
    while(x<=OD){
        x=x*8;
        // cout<<x<<"\t";
    }
    x/=8;
    // cout<<x<<endl;

    while(x>0){
        int lastDigit =OD/x;
        OD-=lastDigit*x;
        // cout<<"D="<<D;
        x/=8;
        ans=ans*10+lastDigit;
        // cout<<"ans="<<ans;
    }
    return ans;

}

string decimalToHexa(int DH){
    int x=1;
    string ans="";
    while(x<=DH){
        x*=16;
    }
    x/=16;
    while(x>0){
        int lastDigit = DH/x;
        DH-=lastDigit*x;
        x/=16;

        if(lastDigit<=9){
            ans =ans+to_string(lastDigit);

        }
        else{
            char c='A'+lastDigit-10;
            ans.push_back(c);
        }

    }
    return ans;
}

int32_t main(){
    int n,b,D,DO,DH;
    string h;
    cin>>b>>n>>h>>D>>DO,DH;

    cout<<binaryToDecimal(b)<<endl;
    cout<<octalToDecimal(n)<<endl;
    cout<<hexaTODecimal(h)<<endl; 
    cout<<decimalToBinary(D)<<endl;
    cout<<decimalToOctal(DO)<<endl;
    cout<<decimalToHexa(DH)<<endl;
    

}