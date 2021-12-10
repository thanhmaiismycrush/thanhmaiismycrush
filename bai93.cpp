#include<bits/stdc++.h>
using namespace std;
int ntS(char x)
{
    int N;
    stringstream tg;
    tg<<x;
    tg>>N;
    return N;
}
int main()
{
    int so_doi_hinh,so_cau_thu;
    int a,o1[11],v1[11],n1[11],o2=0,v2=0,n2=0;
    string doi_hinh,vi_tri_choi,b[11];
    cin>>so_doi_hinh;
    for (int i=1;i<=so_doi_hinh;i++)
    {
        cin>>doi_hinh;
        b[i]=doi_hinh;
        if (doi_hinh.size()==6){a=10;}
        if (doi_hinh.size()==5)
        {
            for (int j=0;j<doi_hinh.size();j++)
            {
                if (j=0){o1[i]=ntS(doi_hinh[j]);}
                if (j=2){v1[i]=ntS(doi_hinh[j]);}
                if (j=4){n1[i]=ntS(doi_hinh[j]);}
            }
        }
    }
    cin>>so_cau_thu;
    for (int i=1;i<=so_cau_thu;i++)
    {
        cin>>vi_tri_choi;
        for (int j=0;j<vi_tri_choi.size();j++)
        {
            if (vi_tri_choi[j]=='O'){o2++;}
            if (vi_tri_choi[j]=='V'){v2++;}
            if (vi_tri_choi[j]=='N'){n2++;}
        }
    }
    for (int i=1;i<=so_doi_hinh;i++)
    {
        if (b[i].size()==6)
        {
            if (o2>=a||v2>=a||n2>=a){cout<<"DA"<<endl;}
            else{cout<<"NE"<<endl;}
        }
    }
}