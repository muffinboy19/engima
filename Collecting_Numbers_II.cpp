#include<bits/stdc++.h>
using namespace std;
using ll =  long long int;
using ld = long double;
#define i(n)  long long int n; cin>>n;
#define ii(a,b) long long int a,b; cin>>a>>b
#define iii(a,b,c) long long int a,b,c; cin>>a>>b>>c
#define pb push_back
#define p(v) for(auto it:v)cout<<it<<" ";cout<<e;
#define fi first
#define se second
#define ce cout<<"\n"
#define ia(a,n) long long int n;cin>>n;long long int a[n];for(int i=0;i<n;i++){cin>>a[i];}
#define YES cout<<"YES"<<endl;
#define NO cout<<"NO"<<endl;
#define pob pop_back
#define sz(x) (x.size())
#define all(x) (x).begin(), (x).end()
#define co(x) cout<<x<<endl;
#define cot(x) cout<<x<<" ";
#define fff(i,a,b) for(int i=a;i<b;i++)
#define fo(n)       for(int i = 0;i<n;i++)
#define test(t)     int t; cin >> t; while(t--)
#define e           "\n"
#define re           return
#define fast        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pr          pair<int,int> 
#define input(a) for(auto &it:a)cin>>it;
#define matrix(n,m) ll n,m;cin>>n>>m;ll mat[n][m];for(inti=0;i<n;i++){for(intj=0;j<m;j++){cin>>mat[i][j];}}
#define u 1000000007

//Gaurav_Chhetri
void solve(){

    ll n,m;cin>>n>>m;

    vector<int> ind(n+1,0),a(n+1,0);
    for(int i=1;i<=n;i++){
        ll x;cin>>x;
        ind[x] =i;
        a[i] = x;
    }

    ll startIndex   = 1;
    ll count = 1;
    set<pair<int,int>> sp;

    // intial calcuation 

    for(int i=1;i<n;i++){
        count+=(ind[i+1]<ind[i]);
    }

    cout<<count<<endl;


    for(int i=0;i<m;i++){
        ll i1,i2;cin>>i1>>i2;

        ll v1 = a[i1];
        ll v2= a[i2];

        
        // first we will find teh current inversions 
        // since to check inversion we do not need anyting othr than ajdace negihpbur as if 

        // 4 1 is not a inveriosn bcz 4 is before but 1 is a injveison fcenyter as 2 4 1 \
        // pos[1] > pos[2] hece it is going to create a inveriso nanyway 
        

        // my method calcualte the curretn invesions 
        if(i1+1<=n)sp.insert({a[i1],a[i1+1]});
        if(i1-1 >=1)sp.insert({a[i1-1],a[i1]});
        if(i2-1>=1)sp.insert({a[i2-1],a[i2]});
        if(i2+1<=n)sp.insert({a[i2],a[i2+1]});


        for(auto it:sp){
            count-=(ind[it.first] >  ind[it.second]);
        }

        // now we swap 

        swap(ind[a[i1]],ind[a[i2]]);
        swap(a[i1],a[i2]);

        for(auto it:sp){
            count+=(ind[it.first] >  ind[it.second]);
        }

        cout<<count<<endl;

        sp.clear();


    }



}
int main(){
fast
    solve();
    cout.flush();
 
    return 0;
}