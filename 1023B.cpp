// Author : Muhtasim
// Allah is the best planner


#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;

#define ln              "\n" // no flush, oppos of endl
#define _flush          endl
#define stop_sync       ios::sync_with_stdio(false) // not to use c-stye io
#define untie_ios       cin.tie(nullptr) // no flush
#define lli             long long int
#define vi              vector<int>
#define vii             vector<lli>
#define vss             vector<string>
#define pb              push_back
#define ppb 	        pop_back
#define sz(x)           ((x).size())
#define all(x)          (x).begin(), (x).end()
#define bin_sc(a, x)    binary_search(all(a), x)
#define lbd(a, x)       lower_bound(all(a), x) // an iter.
#define ubd(a, x)       upper_bound(all(a), x) // an iter.
#define eq_seg(a, x)    equal_range(all(a), x) // a pair of lb, ub
#define FIXED(x)        cout << fixed << setprecision(x)
const long double PI = acos(-1.0L);

int main(void){

	#ifndef ONLINE_JUDGE
		//freopen("generator.txt", "r", stdin);
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
		freopen("error.txt", "w", stderr);
	#endif

	lli n, k;
	cin >> n >> k;
	if(n >= k) cout << (k - 1) / 2 << ln;
	else{
		lli ans = ((k - 1) / 2) - (k - n) + 1;
		if(ans >= 0) cout << ans << ln;
		else cout << 0 << ln;
	}
	return 0;
}
