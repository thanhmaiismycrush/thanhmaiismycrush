#include<bits/stdc++.h>
using namespace std;
bool comp(string a,string b)
{
    if (a.size()!=b.size()){return a.size()<b.size();}
    else
    {
        if (a.size()==1){return a>b;}
        if (a.size()==3){return a<b;}
        if (a.size()==2)
        {for (int i=0;i<a.size();i++)
        {
            if (a[i]=='O'){return a>b;}
            else if (a[i]=='V'){return a>b;}
            else if (a[i]=='N'){return b>a;}
        }}
    }
}
int main()
{
    int n;
    string a[19];
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n,comp);
    for (int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
