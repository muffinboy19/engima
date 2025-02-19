
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
    ll n;cin>>n;
    ll a[n];
    map<int,int> m;
    for(int i=0;i<n;i++){
        cin>>a[i];
        m[a[i]]++;
    }
    int maxValue =0,maxCount=0;
    for(auto it:m){
        // cout<<it.first<<" "<<it.second<<endl;
        if(it.second >=  maxCount){
            maxCount = it.second;
            maxValue = it.first;
        }
    }
    // cout<<maxValue<<endl;
    sort(a,a+n);
    ll min1 = a[n/2];
    ll min2 = a[(n/2) + 1 ];
    ll min0 = a[(n/2)-1];
    ll osh = 0,nan =0,ank=0,kesh=0;
    for(auto it:a){
        osh+=(abs(it-maxValue));
    }
    for(auto it:a){
        nan+=(abs(it-min1));
    }
    for(auto it:a){
        ank+=(abs(it-min2));
    }
    for(auto it:a){
        kesh+=(abs(it-min0));
    }
    
    // cout<<osh<<" "<<nan<<" "<<ank<<" "<<kesh<<endl;
    cout<<min({osh,nan,ank,kesh})<<endl;
    return;
    


}
int main(){
fast
    solve();
    cout.flush();
 
    return 0;
}