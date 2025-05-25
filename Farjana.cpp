#include <bits/stdc++.h>
using namespace std;
int main() {

     int t;
     cin>>t;
     while(t--)
     {
        int n,m=0;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];
         sort(v.begin(),v.end());
         for(int i=0;i<n-1;i++)
            {
                if(v[i]==v[i+1])
                   m++;

            }
            if(m==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;


     }
    return 0;
}


