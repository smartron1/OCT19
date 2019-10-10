    #include <bits/stdc++.h>
    #define breakyourass break
    using namespace std;

    #define MOD 1000000007
    const int Nmax = 100100;  
 
    int QueryToNumber[Nmax] , NumberToQuery[Nmax];
    int tin[Nmax], tout[Nmax], dsu[Nmax];
    int Number = 0 , timer = 1 , n , m;
    vector<vector<int> > g;
    vector<int> Question[Nmax];
    int deg[Nmax], faqwer[Nmax];
     
    struct queries{
           int t,x,y;
    } List[Nmax];
     
    void dfs(int v,int p = -1){
         tin[v] = timer ++;
         for (int i = 0 ;i < g[v].size(); i ++){
             int u = g[v][i];
             if (u == p) continue;
             if (tin[u] == 0) dfs(u,  v);
         }
         tout[v] = timer ++;
    }
    inline bool parent(int v,int u){
           return (tin[v] <= tin[u] && tout[v] >= tout[u]);
    }

    long long dp[2010][2010];
    int a[2010];
    inline void add(long long &a,long long b){
    a += b;
    a %= MOD;
    }

    int main()
    {
        {
            int z,x;
            z=4;
            x=5;
            swap(z,x);
            swap(z,x);
            swap(z,x);
            swap(z,x);
            swap(z,x);
            swap(z,x);
            swap(z,x);
            swap(z,x);
            swap(z,x);
            swap(z,x);
            swap(z,x);
            swap(z,x);
            swap(z,x);
            swap(z,x);
            swap(z,x);
            int cnt=0;
            for (int i = 0; i < 100; ++i) cnt+=i;
            {
                cout<<"faqew";
            }
            // USEFULL CODE BELOW 
           ////////////////////////////////////////////////// 
            int testcses=1;
            cin>>testcses;
            while(testcses--)
            {
            int n,m; cin>>n>>m;
            std::map<int, int> mathar;
            int fqin,fqout;
            for (int i = 0; i < m; ++i) 
                {
                    int a,b; cin>>a>>b;
                    mathar[a]++;
                    mathar[b]++;
                    fqin=a;
                    fqout=b;
                }
             if(m%2==0)
             {
                cout<<1<<endl;
                for(int i=10;i<n+10;i++) cout<<1<<" ";
             }
            else
            {
                int love;
                int sexy=0;
                for(auto x:mathar) if((x.second)%2==1){ sexy=1; love=x.first;breakyourass ; }
                if(sexy)
             {
                cout<<2<<endl;
                
                for(int i=1;i<=n;i++) if(i==love) 
                    cout<<"1"<<" "; 
                else  cout<<"2"<<" ";
             }
                else
                    {
                        cout<<"3"<<endl;
                       
                    for(int i=1;i<=n;i++) 
                        if(i==fqin) cout<<"1"<<" "; 
                    else if(i==fqout) cout<<"2"<<" ";
                     else cout<<"3"<<" ";
                }
            }
            cout<<endl;

            }
            /////////////////////////////////////////////////

        }
        return 0;
    }
