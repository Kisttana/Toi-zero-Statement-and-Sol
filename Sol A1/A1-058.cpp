#include <bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0); cin.tie(0);
int n;
if(cin >> n){
long long sum=0;
long long mn=2e9, mx=-2e9;
for(int i=0;i<n;i++){
long long v; cin >> v;
sum+=v;
mn=min(mn,v);
mx=max(mx,v);
}
cout << sum << "\n" << mx << "\n" << mn << "\n";
cout << fixed << setprecision(1) << (double)sum/n << "\n";
}
return 0;
}
