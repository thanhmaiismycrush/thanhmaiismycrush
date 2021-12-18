#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("inp.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int n,x,t[1001],a=0,b;
    cin>>n>>x;
    for (int i=1;i<=n;i++)
    {
        cin>>t[i];
        a+=t[i];
    }
    cout<<ceil((double)abs(a)/x);
}
