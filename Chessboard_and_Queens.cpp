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
bool isSafe(vector<vector<char>>&bd,int i,int j){
    int jLeft = j;
    int jRight = j;
    while(i>=0){
        if(bd[i][j]=='1' || ( jLeft >= 0 && bd[i][jLeft]=='1' ) || (jRight<8 &&  bd[i][jRight]=='1' )){
            return false;
        }

        i--;
        jLeft--;
        jRight++;
    }
    return true;
}
int func(vector<vector<char>>&bd,int i){
    if(i==8){
        return 1;   
    }
    int count =0;
    for(int j =0;j<8;j++){
        if(isSafe(bd,i,j) && bd[i][j]!='*'){
            bd[i][j]='1';
            count+=func(bd,i+1);
            bd[i][j]='.';
        }
    }

    return count;
}
void solve(){
    vector<vector<char>>board;
    for(int i=0;i<8;i++){
        string a;cin>>a;
        vector<char>row(a.begin(),a.end());
        board.push_back(row);
    }
    // for(auto it:board){
    //     for(auto jt:it){
    //         cout<<jt<<" ";
    //     }
    //     cout<<endl;
    // }
    // ce;
    cout<<func(board,0)<<endl;




}
int main(){
fast
// test(t){
    solve();
    cout.flush();
 
// }
    return 0;
}