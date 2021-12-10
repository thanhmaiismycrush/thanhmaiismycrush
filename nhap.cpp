#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    string a[101],b[101];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        //b[i]=a[i].size();
    }
    sort(a+1,a+n+1,greater< a[101].size() >());
    cout<<"___"<<endl;
    for (int i=1;i<=n;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
