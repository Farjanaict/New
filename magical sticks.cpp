#include <bits/stdc++.h>
using namespace std;
int main() {

     int t;
     cin>>t;
     while(t--)
     {
         int n,ans;
         cin>>n;
        if(n%2==1)
            n++;
        ans=n/2;
         cout<<ans<<endl;
     }
    return 0;
}



