#include <bits/stdc++.h>
using namespace std;
int main() {

      int t;
      cin>>t;
      while(t--)
      {
      string s;
      cin>>s;
     int d,len,ans;
     len=s.size();
     d=s[0]-'0';
     ans=((d-1)*10+(len*(len+1))/2);
     cout<<ans<<endl;

      }
    return 0;
}



