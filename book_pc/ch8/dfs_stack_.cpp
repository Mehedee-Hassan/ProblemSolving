
#include<iostream>
#include<cstdio>
#include<vector>
#include<stack>


using namespace std;

void dfs(int start ,int numberOfNode);

int main(int argc, char const *argv[]) {

  return 0;
}

std::vector<int> adjacentList[100];
int edgeId[100];
int visited[100];

void dfs(int startNode ,int numberOfNode){

  for(int i = 0 ; i < numberOfNode ; i ++)  edgeId[i] = visited[i] = 0;

  stack<int> nodeStack;

  nodeStack.push(startNode);


  while(! nodeStack.empty()){

      int uNode = nodeStack.top();
      nodeStack.pop();


      while (edgeId[uNode] < adjacentList[uNode].size()) {
        int vNode = adjacentList[uNode][edgeId[uNode]];



        edgeId[uNode]++;

        if(visited[vNode] == 0){
          visited[vNode] = 1;
          nodeStack.push(uNode);
          nodeStack.push(vNode);

            break;
      }
    }
  }
}
