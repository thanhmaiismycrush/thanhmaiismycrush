#include<bits\stdc++.h>
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
        if (pos=="O"){o++;}
        if (pos[j] =='V'){v2++;}
        if (pos=="V"){v++;}
        if (pos[j] =='N'){n2++;}
        if (pos=="N"){n++;}}
   }
                  for(int i=1;i<=nsoccer;i++)
                  {
                      if (p[i]=="OV" || p[i]=="VO")
                      {if (o1[i]-o-o2<v1[i]-v-v2)
                      {o2--;o1[i]--;v2--;c=o1[i];continue;}else{v2--;v1[i]--;o2--;d=v1[i];continue;}}
                      if (p[i]=="ON" || p[i]=="NO")
                      {if (o1[i]-o-o2<n1[i]-n-n2)
                      {o2--;o1[i]--;n2--;c=o1[i];continue;}else{n2--;n1[i]--;o2--;e=n1[i];continue;}}
                      if (p[i]=="NV" || p[i]=="VN")
                      {if (n1[i]-n-n2<v1[i]-v-v2)
                      {n2--;n1[i]--;v2--;e=n1[i];continue;}else{v2--;v1[i]--;n2--;d=v1[i];continue;}}
                      if (p[i]=="OVN"||p[i]=="ONV"||p[i]=="NOV"||p[i]=="NVO"||p[i]=="VON"||p[i]=="VNO")
                      {if (min(min(o1[i]-o-o2,v1[i]-v-v2),min(o1[i]-o-o2,n1[i]-n-n2))==o1[i]-o-o2){o2--;o1[i]--;v2--;n2--;c=o1[i];continue;}
                       if (min(min(o1[i]-o-o2,v1[i]-v-v2),min(o1[i]-o-o2,n1[i]-n-n2))==v1[i]-v-v2){v2--;v1[i]--;o2--;n2--;d=v1[i];continue;}
                       if (min(min(o1[i]-o-o2,v1[i]-v-v2),min(o1[i]-o-o2,n1[i]-n-n2))==n1[i]-n-n2){n2--;n1[i]--;v2--;o2--;e=n1[i];continue;}}
                  }
                  cout<<c<<" "<<d<<" "<<e;
                  if (c==0&&d==0&&e==0){cout<<"DA"<<endl;}
                  else{cout<<"NE"<<endl;}

}

