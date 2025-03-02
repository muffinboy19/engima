#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, Q;
    cin >> N >> Q;
    
    // Initialize arrays to track:
    // 1. Which nest each pigeon is in (pigeon_location[i] = nest number for pigeon i)
    // 2. Which pigeons are in each nest (nest_occupants[i] = set of pigeons in nest i)
    vector<int> pigeon_location(N + 1);
    vector<vector<int>> nest_occupants(N + 1);
    
    // Initialize: pigeon i is in nest i
    for (int i = 1; i <= N; i++) {
        pigeon_location[i] = i;
        nest_occupants[i].push_back(i);
    }
    
    for (int q = 0; q < Q; q++) {
        int type;
        cin >> type;
        
        if (type == 1) {
            // Move pigeon a to nest b
            int a, b;
            cin >> a >> b;
            
            int current_nest = pigeon_location[a];
            
            // Remove pigeon a from its current nest
            for (int i = 0; i < nest_occupants[current_nest].size(); i++) {
                if (nest_occupants[current_nest][i] == a) {
                    nest_occupants[current_nest].erase(nest_occupants[current_nest].begin() + i);
                    break;
                }
            }
            
            // Add pigeon a to nest b
            nest_occupants[b].push_back(a);
            pigeon_location[a] = b;
        }
        else if (type == 2) {
            // Swap all pigeons between nests a and b
            int a, b;
            cin >> a >> b;
            
            // Swap the vectors directly
            swap(nest_occupants[a], nest_occupants[b]);
            
            // Update the locations of all moved pigeons
            for (int pigeon : nest_occupants[a]) {
                pigeon_location[pigeon] = a;
            }
            
            for (int pigeon : nest_occupants[b]) {
                pigeon_location[pigeon] = b;
            }
        }
        else if (type == 3) {
            // Report the nest number for pigeon a
            int a;
            cin >> a;
            cout << pigeon_location[a] << "\n";
        }
    }
    
    return 0;
}