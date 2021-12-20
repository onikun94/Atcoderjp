#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
string A,B; cin >> A >> B;
int roop = min(A.length(),B.length());
int count = 0;
for(int i = 0; i < roop; ++i){
  if(int(A[A.length()-1-i])-int('0') + int(B[B.length()-1-i])-int('0') > 9){
    cout << "Hard" << endl;
    break;
  }
  else{
    count++;
  }
}
if(count == roop) cout << "Easy" << endl;

}