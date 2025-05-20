#include <bits/stdc++.h>
#include<math.h>
using namespace std;
int main() {

      int n,m,s=0;
      cin>>n>>m;
      vector<int>v(n);
      for(int i=0;i<n;i++)
        cin>>v[i];
      sort(v.begin(),v.end());
     for(int i=0;i<m;i++)
     {
         if(v[i]<0)
        s+=v[i];
     }
     cout<<abs(s)<<endl;
    return 0;
}



