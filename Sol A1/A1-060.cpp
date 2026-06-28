#include <bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0); cin.tie(0);
double r, h, g;
if(cin >> r >> h >> g){
double width = h + 2 * r;
double length = 2 * 3.14 * r + g;
cout << fixed << setprecision(2) << width << " " << length << "\n";
}
return 0;
}
