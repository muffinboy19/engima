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


    ll totalchildren,stepsize ;
    cin>>totalchildren>>stepsize;


    /// here awe are going to store the  chilren in gropu os srqt(ccount of them ) // 
    vector<vector<int>> groups;

    int groupsize= sqrt(totalchildren);
    int currentgroup = 0;
    int currentindex =0;
    int childcount =0;


    vector<int> tempgroup;// before we push it hte int hegroupus 

    for(int i=1;i<=totalchildren;i++){
        if(childcount > groupsize){
            childcount = 0;
            groups.push_back(tempgroup);
            tempgroup.clear();
        }

        tempgroup.push_back(i);
        childcount++;
    }

    // now we have chilrencd in groupsize number of gropsp in teh group vector

    if(!tempgroup.empty()){
        // if not empty then put it back in the gourp
        groups.push_backk(tempgroup);
    }

    // dgbug 

    for(auto it:groups){
        for(auto jt:it){

            cout<<jt<<" ";
        }
        cout<<endl;
    }


    // ittreate tiiill al lthechilrdne are out 

    for(int i=0;i<totalchildren;i++){
        int reminingsteps = stepsize  % (totalchildren-i); 
    }


}
int main(){
fast
    solve();
    cout.flush();
 
    return 0;
}