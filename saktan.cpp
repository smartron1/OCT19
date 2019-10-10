#include <bits/stdc++.h>

using namespace std;
map<int,int> wrap1;
map<int,int> wrap2;

int main()
{

    int nel,len,que; cin>>nel>>len>>que;
    for(int i=0;i<que;i++)
    {
    int p,s; cin>>p>>s;
    wrap1[p]=wrap1[p]^1;
    wrap2[s]=wrap2[s]^1;
    }
    int p=0,s=0;
    for(auto x:wrap1) if(x.second==1) p++;
    for(auto x:wrap2) if(x.second==1) s++;

    cout<<(p*(len-s))+(s*(nel-p))<<endl;

    return 0;
}

