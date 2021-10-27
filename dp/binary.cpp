#include <iostream>
using namespace std;

int main(){
  int a;
  cin >> a;
  int bit[30];
  for(int i = 0; i < 30; i++){
    int Div = (1 << i);
    cout << "DIV is" << Div << endl;
    bit[i] = (a/Div) % 2;
  }

  for(int i = 0; i < 30; i++){
    cout << bit[i];
  }


  return 0;
}