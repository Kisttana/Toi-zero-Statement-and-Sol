#include <bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0); cin.tie(0);
int n;
if (cin >> n) {
vector<int> p1(n + 1), p2(n + 1);
p1[0] = 1; p2[0] = 1;
for(int i = 1; i <= n; i++) cin >> p1[i];
for(int i = 1; i <= n; i++) cin >> p2[i];
int ans = 0;
for(int i = 1; i <= n; i++){
int u1 = p1[i-1], v1 = p1[i];
int u2 = p2[i-1], v2 = p2[i];
if ((u1 == u2 && v1 == v2) || (u1 == v2 && v1 == u2)) {
ans++;
} else if (u1 != u2 && u1 != v2 && v1 != u2 && v1 != v2) {
int a = min(u1, v1), b = max(u1, v1);
bool c1 = (u2 > a && u2 < b);
bool c2 = (v2 > a && v2 < b);
if (c1 != c2) ans++;
}
}
cout << ans << "\n";
}
return 0;
}