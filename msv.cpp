    #include <bits/stdc++.h>
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
                
            }
            // USEFULL CODE BELOW 
           ////////////////////////////////////////////////// 
           int testcases=1;

        cin>>testcases;
        while(testcases--)
        {
            int n; cin>>n;
            vector<int> a(n);
            int i=0;
            for( i=0;i<n;i++) cin>>a[i];
            reverse(a.begin(),a.end());
            map<int,int> mpppppppppppppppp,mptttttttttttttttt;

            for(int i=0;i<n;i++)
            {
                for(int j=1;j*j<=a[i];j++)
                {
                    if(a[i]%j==0)
                    {
                        if(mpppppppppppppppp[j]==1)
                        {
                            mptttttttttttttttt[j]++;
                        }
                        if(mpppppppppppppppp[a[i]/j]==1 and a[i]!=j*j)
                        {
                        mptttttttttttttttt[a[i]/j]++;
                        }

                    }
                }
                mpppppppppppppppp[a[i]]=1;
            }
            int faq=INT_MIN;
            for(auto x:mptttttttttttttttt) faq=max(faq,x.second);
            cout<<faq<<endl;

        }
            /////////////////////////////////////////////////

        }
        return 0;
    }
