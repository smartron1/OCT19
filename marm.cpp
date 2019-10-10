    #include <bits/stdc++.h>
    using namespace std;

    #define MOD 1000000007
    const int Nmax = 100100;  
 
    int QueryToNumber[Nmax] , NumberToQuery[Nmax];
    int tin[Nmax], tout[Nmax], dsu[Nmax];
    int Number = 0 , timer = 1 , n , m;
    vector<vector<int> > g;
    vector<int> Question[Nmax];
    int deg[Nmax], answer[Nmax];
     
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
            // USEFULL CODE BELOW 
           ////////////////////////////////////////////////// 
            int sum=0;
            for(int u=0;u<100;u++) sum+=u;
            int n,k ; cin>>n>>k;
            int test=0;
            int tp=k;
            int Q=3*n;
            k=k%(Q);
            std::vector<int > a(n);
            for(int i=0;i<n;i++) cin>>a[i];
            for(int i=0;i<k;i++) a[i%n]=a[i%n]^a[n-i%n-1];
            if(tp>n/2 && n%2==1) a[n/2]=0;
            for(auto x:a) cout<<x<<" ";
            cout<<"\n";
            /////////////////////////////////////////////////

        }
        return 0;
    }
