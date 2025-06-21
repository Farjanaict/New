#include <bits/stdc++.h>
using namespace std;
int main()
     {
      int n,m,f,c=0,b=0;
      cin>>n>>m;
      char a[n][m];
      f=m*n;
      for(int i=0;i<n;i++)
      {
          for(int j=0;j<m;j++)
          {
              cin>>a[i][j];
          }
      }
      for(int i=0;i<n;i++)
      {
          for(int j=0;j<m;j++)
          {
              if(a[i][j]=='C'||a[i][j]=='M'||a[i][j]=='Y')
               c++;
            else if(a[i][j]=='B'||a[i][j]=='W'||a[i][j]=='G')
               b++;
          }
      }
      if(c>=1)
      cout<<"#Color"<<endl;
      else
        cout<<"#Black&White"<<endl;


    return 0;
}



