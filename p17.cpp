#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c[101] = {0},d[101],e;
    cin>>n>>a>>b;
    for (int i=1;i<=a;i++)
    {
        cin>>e;
        c[e] = 1;
    }
    for (int i=1;i<=b;i++)
    {
        cin>>d[i];
    }
    for (int i=1;i<=n;i++)
    {
        if (c[i]) cout << 1 << " ";    else cout << 2 << " ";}
}
