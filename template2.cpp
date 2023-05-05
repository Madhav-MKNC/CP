// author: Madhav Kumar (https://github.com/Madhav-MKNC/)

#include <bits/stdc++.h>
using namespace std;

// *Fast Input Output
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

// *Short Naming
#define ll long long			 // Long Long Type Variable
#define nl '\n'					 // New Line
#define py cout << "Yes" << endl // Print Yes
#define pn cout << "No" << endl	 // Print No
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
#define imax INT_MAX
#define imin INT_MIN
#define llmax LLONG_MAX
#define llmin LLONG_MIN
#define maxll max<ll> // Max for ll
#define minll min<ll> // Min for ll
#define pi = 3.1415926535897932384626
const int mod = 1e9 + 7;
long long INFF = 1000000000000000005ll;

// -------------------------------------------------------------------------------------

// *Loops
#define forr(i, start, n) for (int(i) = (start); (i) < (n); ++(i))		   // For <
#define forn(i, start, n) for (int(i) = (start); (i) <= (n); ++(i))		   // For <=
#define rfor(i, n, front) for (int(i) = (n); (i) >= (front); (i)--)		   // Reverse For
#define forSq(i, start, n) for (int(i) = (start); (i) * (i) <= (n); ++(i)) // For Square
#define forc(ch, start, n) for (char(ch) = (start); (ch) <= (n); ++(ch))   // For Char
#define foreach(it, ds) for (auto &(it) : (ds))							   // For Each

// -------------------------------------------------------------------------------------

// *Data Structures
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef vector<vector<int>> vvi;
typedef vector<vector<ll>> vvl;

// -------------------------------------------------------------------------------------

// *Macros
// Full Vector
#define all(ds) (ds).begin(), (ds).end()
// Clear Memory
#define clr(x) memset(x, 0, sizeof(x))
// Ascending Vector
#define sort(ds) sort(all(ds))
// Descending Vector
#define rev(ds) reverse(all(ds))
// Total Sum
#define tsum(ds) (accumulate(all(ds), 0ll))
// Count frequency of x
#define ctx(ds, x) (count(all(ds), (x)))
// Size
#define sz(ds) ((ll)(ds).size())
// Min Value
#define mine(ds) (*min_element(all(ds)))
// Max Value
#define maxe(ds) (*max_element(all(ds)))
// Min Value Index
#define minei(ds) (min_element(all(ds)) - (ds).begin())
// Max Value Index
#define maxei(ds) (max_element(all(ds)) - (ds).begin())
// Binary Search
#define bs(ds, x) (binary_search(all(ds), x))
// Lower Bound Index
#define lb(ds, x) (lower_bound(all(ds), (x)) - (ds).begin())
// Upper Bound Index
#define ub(ds, x) (upper_bound(all(ds), (x)) - (ds).begin())
// Ceil Function
#define ceil(num, div) ((num % div != 0) ? ((num / div) + 1) : (num / div))
// Debug 1
#define dbg(x) cout << (#x) << " = " << x << '\n'
// Debug 2
#define dbgg(x, y) cout << (#x) << " = " << x << " : " << (#y) << " = " << y << '\n'


void solve() {
	int n; 
  cin >> n;
  
	cout << ans << "\n";
}

int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif // ONLINE_JUDGE
 
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  
  int t; cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}
