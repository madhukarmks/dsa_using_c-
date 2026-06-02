#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;
    vector<long long> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    
    sort(a.begin(), a.end());

    while(q--) {
        long long x;
        cin >> x;

        // Check if x is a root
        auto it = lower_bound(a.begin(), a.end(), x);
        
        if (it != a.end() && *it == x) {
            cout << "0" << endl;
        } else {
            // Count how many roots are greater than x
            // end() - it gives the number of elements > x
            long long count_greater = distance(it, a.end());
            
            if (count_greater % 2 != 0) {
                cout << "NEGATIVE" << endl;
            } else {
                cout << "POSITIVE" << endl;
            }
        }
    }
    return 0;
}
