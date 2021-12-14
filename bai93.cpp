#include<C:\MinGW\include\c++\9.2.0\x86_64-w64-mingw32\bits\stdc++.h>
using namespace std;
int stN(char x)
{
    int N;
    stringstream tg;
    tg << x;
    tg>>N;
    return N;
}
int main()
{
   int nform,nsoccer;
   int o2=0,v2=0,n2=0,o=0,v=0,n=0,c,d,e;
   int o1[11],v1[11],n1[11],m[11];
   string form,b[11],pos;
   string p[25];
   cin>>nform;
   for (int i=1;i<=nform;i++)
   {
       cin>>form;
       b[i]=form;
       if (form.size()==5)
       {
           for (int j=0;j<form.size();j++)
            {
                if (form[j] != '-' && j==0){o1[i]=stN(form[j]);}
                if (form[j]!='-'&& j==2){ v1[i]=stN(form[j]);}
                if (form[j]!='-' && j==4){ n1[i]=stN(form[j]);}
                
           }
           m[i]=min(min(o1[i],v1[i]),min(v1[i],n1[i]));
       }
   }
   cin>>nsoccer;
   for (int i=1;i<=nsoccer;i++)
   {
        cin>>pos;  
        p[i]=pos;
        for (int j=0;j<pos.size();j++){ 
        if (pos[j] =='O'){o2++;}//cout<<o2<<endl;}
        if (pos[j]=='O' && pos[j]!='V' && pos[j]!='N'){o++;}
        if (pos[j] =='V'){v2++;}
        if (pos[j]=='V' && pos[j]!='O' && pos[j]!='N'){v++;}
        if (pos[j] =='N'){n2++;}
        if (pos[j]=='N' && pos[j]!='V' && pos[j]!='O'){n++;}}
   }
   for (int i=1;i<=nform;i++)
   {   
       if (b[i].size()==6)
       {
           if (o2>=10 || v2>=10|| n2>=10){cout<<"DA"<<endl;continue;}
            else {cout<<"NE"<<endl;continue;}
       }
       if (b[i].size()==5)
       {
           if (o>o1[i] && v>v1[i] && n>n1[i]){cout<<"DA"<<endl;continue;}
           else
           {
               if (o2<=o1[i] || v2<=v1[i] || n2<=n1[i]){cout<<"NE"<<endl;continue;}
               else 
               {
                  c=o1[i]-o;d=v1[i]-v;e=n1[i]-n;
                  for(int i=0;i<nsoccer;i++)
                  {
                      if (p[i]=="OV" || p[i]=="VO")
                      {if (c-o2+o<d-v2+v)
                      {o2--;o1[i]--;v2--;}else{v2--,v1[i]--,o2--;}}
                      if (p[i]=="ON" || p[i]=="NO")
                      {if (c-o2+o<e-n2+n)
                      {o2--;o1[i]--;n2--;}else{n2--,n1[i]--,o2--;}}
                      if (p[i]=="NV" || p[i]=="VN")
                      {if (e-n2+n<d-v2+v)
                      {n2--;n1[i]--;v2--;}else{v2--,v1[i]--,n2--;}}
                      if (p[i]=="OVN"||p[i]=="ONV"||p[i]=="NOV"||p[i]=="NVO"||p[i]=="VON"||p[i]=="VNO")
                      {if (c-o2+o<d-v2+v&&d-v2+v<=e-n2+n){o2--;o1[i]--;v2--;}
                       if (c-o2+o>=d-v2+v&&c-o2+o<e-n2+n){v2--,v1[i]--,o2--;}
                       if (e-n2+n<d-v2+v&&c-o2+o>=d-v2+v){n2--;n1[i]--;v2--;}}
                  }
                  cout<<o1[i]<<v1[i]<<n1[i]<<endl;
                  if (o1[i]==0&&v1[i]==0&&n1[i]==0){cout<<"DA"<<endl;}
                  else{cout<<"NE"<<endl;}
               }
           }
       }
   }
}
//thu lai truong hop 5 3 2 o cout da...