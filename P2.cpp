#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("inp.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int d[1001]={0},m,n,kq=0;
    string a;
    cin>>m>>n;
    for (int i=1;i<=m;i++)
    {
        cin>>a;
        int x,y;
        x=a.find('G');y=a.find('S');
        if (x>y){cout<<-1;}
        else{d[y-x]++;}
    }
    for (int i=1;i<=n;i++){if (d[i]>0){kq++;}}
    cout<<kq;
}
