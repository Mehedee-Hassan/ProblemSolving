#include<cstdio>
#include<iostream>
#include<vector>
#include<queue>

using namespace std;


void bfs(int startNode ,int numberOfNode);


std::vector<int> adjacentList[100];
int visited[100];


int main(){


  bfs(0,1);

  adjacentList[0][1] = 1;


  return 0;
}


void bfs(int startNode ,int numberOfNode){

  for (int i = 0 ; i < numberOfNode ; i ++){
      visited[i] = 0;// not visited
  }

  queue<int> Q;


  Q.push(startNode);
  visited[startNode] = 1;


  while(!Q.empty()){
    int uNode = Q.front();
    Q.pop();


    int sizeOfuNodeAdjList = adjacentList[uNode].size();

    for(int i = 0 ; i <  sizeOfuNodeAdjList; i ++){
        if(visited[adjacentList[uNode][i]] == 0){

          int vNode = adjacentList[uNode][i];
          visited[vNode] = 1;


          Q.push(adjacentList[startNode][i]);

        }
    }



  }


}
