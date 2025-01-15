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

//Gaurav_Chhetri
void solve(){

    ll n;cin>>n;
    vector<int> a;
    ll chef = 0;
    for(int i=0;i<n;i++){
        ll x;cin>>x;
        if(i==0)chef = x;
        a.push_back(x);
    }
    int ubvalue =0;
    auto ub = upper_bound(a.begin(), a.end(), chef);
    if (ub == a.end()){
        ubvalue  = chef;
    }
    else ubvalue= *ub;
    int lbvalue =0;
    sort(a.begin(),a.end());
    auto lower = lower_bound(a.begin(), a.end(), chef);
    if (lower != a.begin() && *(lower - 1) != chef) {
       lbvalue = *(lower-1);
    } else {
        lbvalue = chef;
    }

    cout<<lbvalue<<" "<<ubvalue<<"****"<<endl;
    ll count =0;
    if(lbvalue==chef){
        count+= (chef); // contes itslf
        ll gap = ubvalue - chef - 1;
        ll add = ceil((double)gap/(double)2);
        count+=add; // no count itself
        
    }
    else if(ubvalue == chef){
        count+=(int)(1000000-chef+1); // counts itslef// no ocunt itslef 
        ll gap = chef - lbvalue - 1;
        ll add = ceil((double)gap/(double)2);
        count+=add;
    }
    else {
        count+=(ceil((double)(chef-lbvalue-1)/2.0)); // no ocunt itslef 
        count+=(ceil((double)(ubvalue-chef-1)/2.0)); // no count itself
        count++;
    }
    cout<<count<<endl;
    return;
 
}
int main(){
fast
test(t){
    solve();
    cout.flush();
 
}
    return 0;
}