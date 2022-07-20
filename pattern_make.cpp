// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int i=1;
    int r1=n;
    while(i<=n)
    {
        //1st triangle
        int one=1;
        while(one<=r1)
        {
            cout<<one;
            one++;
        }r1--;
        
        //2nd triangle
        int two=1;
        int r2=i-1;
        while(two<=r2)
        {
            cout<<"*";
            two++;
        }
        
        // 3rd triangle 
        int three=1;
        int r3=i-1;
        while(three<=r3)
        {
            cout<<"*";
            three++;
        }
        
        //4th triangle
        int four=1;
        int r4=n-i+1;
        while(r4>=four)
        {
            cout<<r4;
            r4--;
        }
        cout << endl;
        i++;
    }
    return 0;
}