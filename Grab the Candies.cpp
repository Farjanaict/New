#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int n,a=0,b=0;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }for(int i=0;i<n;i++)
    {
        if(ar[i]%2==0)
            a+=ar[i];
        else
            b+=ar[i];
    }
    if(a>b)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


}
    return 0;
}

