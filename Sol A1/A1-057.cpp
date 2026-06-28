#include <bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0); cin.tie(0);
long long g,r;
cin >> g >> r;
if(g<1||g>6||r<1||r>6){cout << "Invalid\n";}else if(g==r){cout << "Correct!\n";}else{cout << "Wrong!\n";}
return 0;
}