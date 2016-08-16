#include<iostream>
#include<vector>
#include<queue>
#include<cstring>
#define maxSize 31

using namespace std;

int bfs(int a,int b);
void clearVector();

std::vector<int> nodes[maxSize];
int mapArray[maxSize];
int distence[maxSize];
int visitedFlag[maxSize];

int getMappedNodeNumber(int nodeNumber);
int setMapTo(int nodeNumber);
void multipleTimeClear();

int nodeCounter;
int totalNumberOfNodes;


int main(){

  int testCase = 1;
  int nc;
  int testNode,ttl;
  int nodeA,nodeB;
  int tempA,tempB;
  int answer;

  while(cin>>nc){

    clearVector();

    if( nc == 0 ){ break;}



    while(nc -- ){
        cin>>nodeA>>nodeB;

        tempA = setMapTo(nodeA);
        tempB = setMapTo(nodeB);

        nodes[tempA].push_back(tempB);
        nodes[tempB].push_back(tempA);
    }



    while(true){
        cin>>testNode>>ttl;
        multipleTimeClear();


        if(testNode == 0 && ttl == 0)
          break;

        answer = totalNumberOfNodes - bfs(testNode,ttl) -1;
        cout<<"Case "<<(testCase++)<<": "<< answer <<" nodes not reachable from node "<<testNode<<" with TTL = "<<ttl<<"."<<endl;


    }
  }

}







int bfs(int source ,int ttl){

  queue<int> nodeQueue;
  int uNode,vNode;
  int length,i;
  int tempSource =setMapTo(source);
  visitedFlag[tempSource]  = 1;
  nodeQueue.push(tempSource);
  distence[tempSource] = 0;

  while(!nodeQueue.empty())
  {
      uNode = nodeQueue.front();
      nodeQueue.pop();

      length = nodes[uNode].size();
      for(i = 0 ; i < length ; i++){
        vNode = nodes[uNode][i];

        if(visitedFlag[vNode] != 1){
            nodeQueue.push(vNode);

            distence[vNode] = distence[uNode] + 1;
          //  cout<<" unode = "<<uNode << " vNode = "<<vNode<<" distence = "<<distence[vNode]<<endl;

            if(distence[vNode] <= ttl)
              nodeCounter++;

            visitedFlag[vNode] = 1;
        }
      }
  }



return nodeCounter;

}





void clearVector(){
  memset(nodes , 0 ,sizeof nodes);
  memset(mapArray ,-1 , sizeof mapArray);
  totalNumberOfNodes = 0;


  multipleTimeClear();
}

  void multipleTimeClear(){
    memset(visitedFlag , 0 ,sizeof visitedFlag);
    memset(distence , 0 ,sizeof distence);
    nodeCounter = 0;
  }


int setMapTo(int nodeNumber){

  for(int i = 0 ; i < maxSize ; i++){

    if(mapArray[i] == nodeNumber){

      return i;
    }
    else if(mapArray[i] == -1){
      mapArray[i] = nodeNumber;
      totalNumberOfNodes ++;
      return i;
    }
  }
}
