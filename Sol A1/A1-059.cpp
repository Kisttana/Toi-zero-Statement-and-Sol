#include <bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0); cin.tie(0);
string src, dst;
if(cin >> src >> dst){
double w;
cin >> w;
int b = -1, r = -1;
if(src=="BKK"&&dst=="CNX"){b=10; r=30;}
else if(src=="CNX"&&dst=="UBP"){b=15; r=40;}
else if(src=="UBP"&&dst=="BKK"){b=20; r=40;}
else if(src=="BKK"&&dst=="PKT"){b=25; r=50;}
else if(src=="PKT"&&dst=="CNX"){b=30; r=60;}
else if(src=="UBP"&&dst=="PKT"){b=40; r=70;}
if(b==-1){cout << "Error\n";}
else{cout << fixed << setprecision(2) << b + w * r << "\n";}
}
return 0;
}
