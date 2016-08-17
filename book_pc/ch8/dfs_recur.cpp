#include<cstdio>
#include<iostream>
#include<vector>
using namespace std;


std::vector<int>  adjacentList[100];
int visited[100];

void dfs(int startNode);


 int main(int argc, char const *argv[]) {

  return 0;
}


void dfs(int startNode){
  if(visited[startNode])
  return;
  visited[startNode] = 1;


  for(int i = 0 ; i < adjacentList[startNode].size() ; i++){
    dfs(adjacentList[startNode][i]);
  }
}
