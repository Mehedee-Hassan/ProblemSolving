//safaet

#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<utility>
#include<queue>
#include<cmath>
#include<climits>

using namespace std;


struct Edge{
  int uNode ,vNode ,weight;
};

int numberOfEdges = 100;

// operator overloading
bool operator < (Edge A , Edge B){return A.weight < B.weight;}

std::vector<Edge> edges;
int p[100];

int find(int x){
    if(p[x] == x) return x;
    return p[x] = find(p[x]);
}



void kuskal();


int main(){
// input
//  kuskal();
  return 0;
}


void kuskal(){

  sort(edges.begin() , edges.end());
  int sz = edges.size();

  for(int i = 1 ; i <= numberOfEdges ; i++)
      p[i] = i;

  int count = 0,s=0;
  int ans = 0;

  for(int i = 0 ; i < sz ; i ++){

    int uNode = find(edges[i].uNode);
    int vNode = find(edges[i].vNode);
    if( uNode !=  vNode){

      p[uNode] = vNode;
      count++;

      s+= edges[i].weight;

      if(count == numberOfEdges-1) break;
    }

  }
  return ;
}
