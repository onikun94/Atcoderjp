#include <iostream>
#include <bitset>
using namespace std;

int main(){
  int n; cin >> n;

  bitset<100> is_prime(0);
  for(int i = 2; i <= n; ++i) is_prime.set(i);
  for(int i = 2; i <= n; ++i){
    if(is_prime[i]){
      for(int j = i * 2; j <= n; j+= i){
        is_prime.reset(j);
      }
    }
  }

  for(int i = 2; i<=n; ++i){
    if(is_prime[i]) cout << i << endl;
  }
  // cout << is_prime[4] << endl;
}