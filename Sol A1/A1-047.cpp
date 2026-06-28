#include <bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0); cin.tie(0);
int n, a;
cin >> n >> a;
int t = n * a;
if (t == 0) {
cout << "No teaching";
} else {
int h = t / 60;
int m = t % 60;
if (h > 0 && m > 0) {
cout << h << " hours " << m << " minutes";
} else if (h > 0) {
cout << h << " hours";
} else {
cout << m << " minutes";
}
}
return 0;
}