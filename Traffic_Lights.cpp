#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
    ll x, n;
    cin >> x >> n;

    set<int> pos = {0, x};  // Maintain sorted positions
    multiset<int> lengths = {x};  // Store segment lengths

    for(auto it:pos)cout<<it<<" ";cout<<endl;

    while (n--) {
        ll qq;
        cin >> qq;




        auto it = pos.lower_bound(qq); 
        
        cout<<"loweer bound "<<*it<<endl;
                        
         // First element >= qq
        int b = *it;  // Right boundary
        it--;
        int a = *it;  // Left boundary


        cout<<a<<" "<<b<<endl;








        // Remove the old segment [a, b]
        lengths.erase(lengths.find(b - a));

        // Insert the new segments [a, qq] and [qq, b]
        lengths.insert(qq - a);
        lengths.insert(b - qq);

        // Insert the new position
        pos.insert(qq);
        
        // Get the maximum segment length
        cout << *lengths.rbegin() << " ";


    }
    cout << "\n";
}

int main() {
    fast
    solve();
    return 0;
}

