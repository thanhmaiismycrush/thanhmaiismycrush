#include<bits/stdc++.h>
using namespace std;
int m,n,dem=0,b=INT_MAX,i;
int a[10001][10001];
string c[10001];
string ntS(int x)
{
    stringstream tg;
    tg<<x;
    string s=tg.str();
    return s;
}
int main()
{ 
    cin>>m>>n;
    for (int i=1;i<=m;i++)
    {
        for (int j=1;j<=n;j++)
        {
             cin>>a[i][j];
             c[i]+=ntS(a[i][j]);
        }
    }
    if (m%2!=0){cout<<m;return 0;}
    else 
    {
        i=m;
        while (i%2==0)
        {
           for (int j=1;j<=i/2;j++)
           {
               if (c[j]==c[m+1-j]){dem++;}
           }
           if (dem==i/2){b=min(b,i/2);}
           i/=2;
        }
        cout<<b;
    }
      
}