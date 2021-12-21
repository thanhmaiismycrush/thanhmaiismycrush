#include<bits/stdc++.h>
using namespace std;
int main()
{freopen("p13.inp","r",stdin);
    freopen("p13.out","w",stdout);
    int a[101],n,m,b,vt;
    cin>>n>>m;
    vt=n;
    for (int i=1;i<=m;i++)
    {
        cin>>b;
        for (int j=b;j<=vt;j++)

            a[j]=b;
            vt=min(vt,b-1);

    }
    for (int i=1;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
