#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
    long long int n,sum=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    long long int sq=sqrt(sum);
    if(sq*sq==sum)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    }
    return 0;
}



