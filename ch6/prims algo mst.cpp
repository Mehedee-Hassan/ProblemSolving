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

int INF = INT_MAX;
typedef pair<int ,int> PII;
std::vector<PII> vectorPair[100];

struct Node{
  int u ,cost;
  Node (){}
  Node (int _u ,int _cost){
    u = _u;
    cost = _cost;

  }
};

void mst(int, int );
bool operator<(Node A ,Node B){
    return A.cost > B.cost;
}


priority_queue<Node>pq;

int cost[100];
int taken[100];


int main() {

  int n;
  int s;


  cout << "this is mst" << endl;
  cin>>n;
  std::cout << "start :" << std::endl;
  std::cin >> s;
  mst(n,s);

  return 0;
}


void mst(int n,int s ) {
  int i;

  for(i = 0 ; i < n ; i++){
    cost[i] = INF,taken[i] = 0;
  }

  cost[s] = 0;

  pq.push(Node(s,0));

  int ans = 0;


  while (!pq.empty()) {

      Node x = pq.top();
      pq.pop();


      if(taken[x.u]){
        continue;
      }
      taken[x.u] = 1;


      ans += x.cost;
      for (PII v : vectorPair[x.u]){
        if(taken[v.first]) continue;

        if(v.second < cost[v.first]){
          pq.push(Node(v.first,v.second));
          cost[v.first]= v.second;
        }
      }

  }


return ;
}
