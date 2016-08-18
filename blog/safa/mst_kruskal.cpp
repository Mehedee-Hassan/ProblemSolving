#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
#define _max 300

using namespace std;


struct edge{
  int uNode ,vNode ,weight;

  bool operator<(const edge& tempEdge) const{
      return weight < tempEdge.weight;
  }

};

int parent[_max];
std::vector<edge> edges;


int kruskalMst(int nodes);
int find(int node);



int main(){
  std::cout << "test" << std::endl;

  int m,n; // n = node ; m = edge
  int uNode ,vNode , weight;
  while(cin>>m>>n){

    for(int i = 0 ; i < m ; i ++){

      cin>>uNode>>vNode>>weight;
      edge e;
      e.uNode = uNode;
      e.vNode = vNode;
      e.weight= weight;
      edges.push_back(e);

    }
  }


  return 0;
}


int kruskalMst(int nodes){
  sort(edges.begin() ,edges.end());

  for(int i = 0 ; i <= nodes ; i ++)
    parent[i] = i ;

    int count = 0, s = 0 ;

    int length = (int)edges.size();

    for(int i = 0 ; i < length ; i++){
        int uNode = find(edges[i].uNode);
        int vNode = find(edges[i].vNode);


        if(uNode != vNode){
          parent[uNode] = vNode;
          count++;

          s += edges[i].weight;

          if(count == nodes - 1)
            break;

        }
    }
return s;
}


int find(int node){
  return (parent[node] == node) ? node : find(parent[node]);
}
