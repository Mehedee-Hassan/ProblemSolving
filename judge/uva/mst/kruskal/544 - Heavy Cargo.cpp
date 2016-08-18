#include<iostream>
#include<cstring>
#include<vector>

using namespace std;


struct edge{
  int uNode ,vNode ,weight;

  bool operator<(const edge& tempEdge) const{
      return weight < tempEdge.weight;
  }

}


int main(){
  std::cout << "test" << std::endl;
  return 0;
}


void kruskalMst(int source){


}
