#include <bits/stdc++.h>
using namespace std;
int main() {

     int n,sum=0,i=1,c=0,total=0;
     cin>>n;

     for(int i=1;i<=sqrt(n);i++)
     {
      sum=sum+i;
      total=total+sum;
      if(total<=n)
            c++;
     }
    cout<<c<<endl;
    return 0;
}


