#include <iostream>
using namespace std;

int main(){
  int n;  
  cin >> n ;
  int bit[100][100];
  int shift = (1 << n);
  for (int i = 0; i < shift; i++){
    for(int j = 0; j < n; j++){
      int div = (1 << j);
      bit[i][j] = (i /div) % 2;
    }
  }

  
 cout << "n= " << n << endl;
 cout << "shift= " << shift << endl; 
  for(int i = 0; i < shift;i++){
    for(int j = 0; j < n; j++){
      cout << "     " << i << "-" << j << ": "<< bit[i][j];
    }
    cout << "" <<endl;
  } 
}