#include<iostream>
#include<vector>
#include<queue>
#include<cstring>
using namespace std;

bool bfs(int);
void clearVector();

std::vector<int> nodes[201];
int visitedFlag[201]; // 0 = no color ,1 = black , 2 =  white;

int main(){
  int n;
  int l;
  int uNode,vNode;

  while (cin>>n) {

    if(n == 0) break;
    cin>>l;

    clearVector();

    while (l--) {
      cin>>uNode>>vNode;
      nodes[uNode].push_back(vNode);
      nodes[vNode].push_back(uNode);
    }

    bool bicolorable = bfs(uNode);


    if(bicolorable == true){
      cout<<"BICOLORABLE."<<endl;
    }else{
      cout<<"NOT BICOLORABLE."<<endl;

    }
  }
}

bool bfs(int source){

    int uNode,vNode;
    int length;
    int i;
    queue<int> nodeQueue;
    memset(visitedFlag ,0 , sizeof visitedFlag);


    nodeQueue.push(source);
    visitedFlag[source] = 1;

    while (!nodeQueue.empty()) {
      uNode = nodeQueue.front();
      nodeQueue.pop();

        length = nodes[uNode].size();
        for( i = 0 ; i < length ; i++){

            vNode = nodes[uNode][i];
            if(visitedFlag[vNode] == 0)
            {

                  if(visitedFlag[uNode] == 1)
                    visitedFlag[vNode] = 2;
                  else
                    visitedFlag[vNode] = 1;

              nodeQueue.push(vNode);

            }else if(visitedFlag[vNode] == 1){
              if(visitedFlag[uNode] == 1){

                return false;
              }
            }else if(visitedFlag[vNode] == 2){
              if(visitedFlag[uNode] == 2)
                {

                  return false;
                }


            }
        }
    }

    return true;

}



void clearVector(){
  memset(nodes , 0 ,sizeof nodes);
}
