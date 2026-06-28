#include <bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0); cin.tie(0);
int l, n;
if (cin >> l >> n) {
vector<int> c(l + 1, 0);
int mx = 0;
for(int i = 0; i < n; i++){
int a, b;
cin >> a >> b;
for(int j = a; j < b; j++){
c[j]++;
if(c[j] > mx) mx = c[j];
}
}
cout << mx;
}
return 0;
}