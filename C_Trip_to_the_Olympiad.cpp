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
int onesComplement(int num) {
    int significantBits = floor(log2(num)) + 1; // Number of significant bits
    int mask = (1 << significantBits) - 1;     // Create a mask with all 1s in the significant bit range
    return (~num) & mask;                      // Flip the bits and mask to significant bits
}
void solve(){
int l, r;
    cout << "Enter the range [l, r]: ";
    cin >> l >> r;

    int largestNum = -1; // To store the largest number with valid 1's complement

    // Iterate through the range to find the largest valid number
    for (int num = r; num >= l; --num) {
        int complement = onesComplement(num);
        if (complement >= l && complement <= r) { // Check if complement is within the range
            largestNum = num;
            break; // Since we are going from r to l, we stop at the first valid number
        }
    }

    if (largestNum == -1) {
        cout << "No number found in the range where both the number and its complement exist." << endl;
    } else {
        cout << "Largest number: " << largestNum << endl;
        cout << "Its 1's complement: " << onesComplement(largestNum) << endl;
    }
}
int main(){
fast
test(t){
    solve();
    cout.flush();
 
}
    return 0;
}