#include <bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0); cin.tie(0);
char p;
int a;
long long s;
cin >> p >> a >> s;
long long b = 0;
if (p == 'M') {
b += 1500;
if (a < 5) b += s * 6 / 100;
else if (a < 10) b += s * 8 / 100;
else b += s * 10 / 100;
} else if (p == 'B') {
b += 1000;
if (a < 5) b += s * 5 / 100;
else if (a < 10) b += s * 6 / 100;
else b += s * 7 / 100;
} else if (p == 'G') {
b += 500;
if (a < 5) b += s * 4 / 100;
else if (a < 10) b += s * 5 / 100;
else b += s * 6 / 100;
}
cout << b;
return 0;
}