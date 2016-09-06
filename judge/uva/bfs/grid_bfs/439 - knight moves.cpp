#include<iostream>
#include<vector>
#include<queue>
#include<cstring>
#define PII pair<int ,int>


using namespace std;



PII node;

int delX[] = {2, 2,-1, 1, -2, -2, -1,1};
int delY[] = {1,-1, 2, 2,  1, -1, -2,-2};
int visitedFlag[9][9];
int distanceArray[9][9];


std::vector<int> chessBoard[9];
void setUpChessBoard();
bool checkIfSamePlace(int ax,int ay ,int bx,int by);


int* convertToSquare(string a,string b);
int gridBfs(int startX ,int startY ,int endX,int endY);
void clearVector();

int main() {



  string a,b;
  while(  cin>>a>>b)
  {


      clearVector();

      int *data = convertToSquare(a ,b);

      cout<<"To get from "<<a<<" to "<<b<<" takes "<<gridBfs(data[0] ,data[1] ,data[2],data[3])<<" knight moves."<<endl;

      a = b = "";
  }

  return 0;
}



int gridBfs(int startX ,int startY ,int endX,int endY){

 if( checkIfSamePlace( startX , startY , endX, endY))
  {
    //same place
    return 0;
  }

   queue<PII> q;
   q.push(PII(startX,startY));
   visitedFlag[startX][startY] = 1;
   distanceArray[startX][startY] = 0;
   int maximumDistance = 0;




 while (!q.empty()) {
   PII top =q.front();q.pop();

   for(int k = 0 ; k < 8 ; k++){
     int tx = top.first + delX[k];
     int ty = top.second + delY[k];

     if(tx > 0 && ty > 0 && tx <= 8 && ty <= 8 && visitedFlag[tx][ty] ==0){

       visitedFlag[tx][ty] = 1;
       distanceArray[tx][ty] = distanceArray[top.first][top.second] + 1;

       q.push(PII(tx,ty));

       if(tx == endX && ty == endY){
            maximumDistance = distanceArray[tx][ty];
       }
      }

   }
 }


return maximumDistance;

}




int* convertToSquare(string a,string b){
  int *data = new int[4];

  data[0] = ((int)a[0]) - 96;
  data[1] = ((int)a[1]) - 48;
  data[2] = ((int)b[0]) - 96;
  data[3] = ((int)b[1]) - 48;
  return data;
}


void setUpChessBoard(){
  memset(chessBoard , 1 ,sizeof chessBoard);
}


void clearVector(){
  memset(visitedFlag,0,sizeof visitedFlag);
  memset(distanceArray,0,sizeof distanceArray);

}




  bool checkIfSamePlace(int ax,int ay ,int bx,int by){

    if(ax == bx && ay ==by)
      return true;

    return false;
  }


/*
e2 e4
a1 b2
b2 c3
a1 h8
a1 h7
h8 a1
b1 c3
f6 f6

*/
