#include <bits/stdc++.h>
using namespace std;
int main()
     {
      int t;
      cin>>t;
     while(t--)
     {
        int n,x,y=1;
        float m;

        cin>>n>>x;
        if(n<=2)
            cout<<y<<endl;
       else if(n>2)
        {
            n=n-2;
            m=(float)n/x;
            y+=ceil(m);
            cout<<y<<endl;

        }
     }
    return 0;
}



