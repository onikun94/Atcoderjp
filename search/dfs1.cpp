#include <iostream>
#include <vector>
using namespace std;

struct Edge {
  int to;
  int weight;
  Edge(int t, int w): to(t), weight(w){}
};

struct Edge1 {
  int to;
  int weight;
  Edge1(): to(1), weight(2){}
};
 
int main(){
  Edge test(4,5);
  Edge1 test1;
  cout << test.to << "," << test.weight << endl;
  cout << test1.to << ","<< test1.weight << endl;
}