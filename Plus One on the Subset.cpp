#include <bits/stdc++.h>
using namespace std;
int main()
     {
      int t;
      cin>>t;
     while(t--)
     {
        int n,c;
        cin>>n;
       vector<int>v(n);
       for(int i=0;i<n;i++)
        cin>>v[i];
        sort(v.begin(),v.end());
         c=v[n-1]-v[0];
       cout<<c<<endl;

     }
    return 0;
}



