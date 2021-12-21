#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[101],h,x=0;
    int kq=INT_MAX;
    cin>>n;
    for (int i=1;i<=n;i++){cin>>a[i];}
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=a[i];j++)
        {
            cin>>h;
            x+=(h*5)+15;
        }
        kq=min(kq,x);
        x=0;
    }
    cout<<kq;
    return 0;
}
