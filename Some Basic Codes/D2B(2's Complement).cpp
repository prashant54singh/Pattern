// Program to convert from Decimal to Binary (2's Complement)
#include <iostream>
#include <math.h>
#include<bits/stdc++.h>
using namespace std;
    string complement(string bi){
       
       for(int i=0; i<bi.size() ; i++)
        {
            if(bi[i]=='0') bi[i]='1';
            else bi[i]='0';
            
        }
        
        for(int i=bi.size()-1; i>=0 ; i--)
        {
            if(bi[i]=='0') 
            {
                bi[i]='1';
                break;
            }
            else bi[i]='0';
            
        }
        
        
        return bi;
}
int main() {
    // Write C++ code here
    int n;
    int i=0,bit,ans=0;
    cin >>n;
    if (n<0)
    {
        n*=-1;
        while(n!=0)
    {
        bit=n&1;
        ans=(bit*pow(10,i))+ans;
        n=n>>1;
        i++;
    }
    cout<<"binary : "<<ans<<endl;
    string str = to_string(ans);
    cout<<"2's Complement : "<<complement(str);
    }
    else
    {
        while(n!=0)
    {
        bit=n&1;
        ans=(bit*pow(10,i))+ans;
        n=n>>1;
        i++;
    }
    cout<<"Binary : "<<ans;
    }
    return 0;
}