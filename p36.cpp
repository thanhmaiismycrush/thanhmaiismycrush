#include<bits/stdc++.h>
using namespace std;
    int n,v,k,s,d=0,a[51]; 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin>>n>>v;
    for (int i=1;i<=n;i++)
    {
        cin>>k; 
        for (int j=1;j<=k;j++)
        {
            cin>>s;
            if (s<v){i=a[i];d++;}
        }
    }
    cout<<d<<"\n";
    for (int i=1;i<=n;i++)
    {
        if (a[i]!=0){cout<<a[i];}
    }

}