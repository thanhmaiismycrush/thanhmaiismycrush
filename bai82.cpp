#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,x[21],y[21],maxx=-1e9,maxy=-1e9,minx=1e9,miny=1e9;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        cin>>x[i]>>y[i];
        maxx=max(x[i],maxx);
        maxy=max(y[i],maxy);
        minx=min(x[i],minx);
        miny=min(y[i],miny);
    }    
    int e=max(maxx-minx,maxy-miny);
    cout<<e*e;
}