#include <bits/stdc++.h>
#define sc scanf
#define t1(t) scanf("%d", &t)
#define FOR(x) for(int i = 0; i < x; i++)
#define pf printf
#define wh(n) while(n--)
#define ll long long
using namespace std;

int freq(string coins){
  char coinExists[100] = {};
  int total = 0;
  for(int i = 0; i <= 9; i++){
    if(!coinExists[coins[i]]){
      coinExists[coins[i]] = 1;
      total++;
    }
  }

  return total;
}

int main(){
  int t;
  t1(t);

  wh(t){
    string coins; cin >> coins;

    cout << freq(coins) << endl;
  } 
}
