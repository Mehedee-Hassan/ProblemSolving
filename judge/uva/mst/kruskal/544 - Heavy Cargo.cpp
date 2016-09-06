#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
#define _max 300

using namespace std;


struct Edge{
  int uNode ,vNode ,weight;

  bool operator<(const &Edge tempEdge) const{
    return weight < tempEdge.weight;
  }

}

int parent[_max];
std::vector<Edge> vectorOfEdges;

int kruskalMst(int numberOfNodes);
int find(int parentOfNode);


int main(){
  return 0;
}



int kruskalMst(int numberOfNodes) {

    sort(vectorOfEdges.start() , vectorOfEdges.end());

    for (int i = 0; i <= numberOfNodes; i++) {
        parent[i] = i;
        //make parent 
    }

    int sum = 0 ;
    int countOfEdges  = 0 ;

    int length = vectorOfEdges.size();


    for(int i = 0 ; i < length ; i ++){

        Edge edge = vectorOfEdges[i];

        int uNode = find(edge.uNode);
        int vNode = find(edge.vNode);

        if(uNode != vNode){
              parent[uNode] = vNode;
              sum+= edge.weight;
              countOfEdges ++;


              if(countOfEdges == numberOfNodes - 1){
                // all nodes has been taken ;
                break;
              }
        }
    }
return sum;
}


int find(int parentOfNode){

  return (parent[parentOfNode] == parentOfNode) ?
    parentOfNode : find(parent[parentOfNode]);

}
