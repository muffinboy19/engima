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
#define ia(a,n) long long int n;cin>>n;long long int a[n];for(int i=0;i<n;i++){cin>>a[i];}
#define YES cout<<"YES"<<endl;
#define NO cout<<"NO"<<endl;
#define de  cout<<"*****"<<endl;
#define pob pop_back
#define sz(x) (x.size())
#define all(x) (x).begin(), (x).end()
#define co(x) cout<<x<<endl;
#define cot(x) cout<<x<<" ";
#define fff(i,a,b) for(int i=a;i<b;i++)
#define fo(n)       for(int i = 0;i<n;i++)
#define test(t)     int t; cin >> t; while(t--)
#define e           "\n"
#define ce          cout<<"\n"
#define da(a,n)  long long int a[n];for(int i=0;i<n;i++){cin>>a[i];}
#define re           return
#define fast        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pr          pair<int,int> 
#define input(a) for(auto &it:a)cin>>it;
#define matrix(n,m) ll n,m;cin>>n>>m;ll mat[n][m];for(int i=0;i<n;i++){for(int j=0;j<m;j++){cin>>mat[i][j];}}
#define u 1000000007


bool check(ll mid, string s,ll a[],ll k,ll n){
    ll maxpenalty = mid;
    ll wrongBs =0;
    ll numberofoperation =0;
    bool insegment = false;

    for(ll i=0;i<n;i++){
        if(s[i]=='R' and a[i] > maxpenalty){
            /// this ccelll is red
            // but its 

            if(wrongBs >0){
                numberofoperation++;
                wrongBs=0;
            }
        }
        if(s[i]=='B' and a[i] > maxpenalty){
            wrongBs++;
        }
    }


    if(wrongBs >0)numberofoperation++;
    return numberofoperation <= k;
}
//Gaurav_Chhetri
void solve(){

    ll n,k;
    cin>>n>>k;
    string s;cin>>s;
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    ll low = 0;
    ll high = *max_element(a,a+n);

    while(high - low > 1 ){

        ll mid= (low+high)/2;
        if(check(mid,s,a,k,n)){
            high = mid;
        }
        else{
            low = mid;
        }
    }

    cout<<(check(low,s,a,k,n)?low:high)<<endl;




}
int main(){
fast
test(t){
    solve();
    cout.flush();
 
}
    return 0;
}