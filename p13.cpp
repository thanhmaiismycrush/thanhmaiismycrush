#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,a,b,w;
    cin>>n>>a>>b;
    for (ll i=1;i<=n;i++)
    {
        cin>>w;
        cout<<((w*a)%b)/a<<" ";
    }
    
}