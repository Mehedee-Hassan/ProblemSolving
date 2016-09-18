#include<iostream>
#include<cstdio>
#include<vector>
#include<cstring>
#include<string>
#include<cmath>
#include<climits>
#include<cctype>
#define clear(m,data) memset(m,sizeof(m),data)
#define abs(a) (a)<(-1)?(a*(-1)):a
#define lli long long int

using namespace std;

lli calculate(lli a,lli b,lli t,lli);
lli carcoordinate[1001][2];
lli extraCalc(lli a,lli b,lli t,lli i);

int main(){
  lli m,n;


  lli i,a,b,t;
  while(cin>>m>>n){
    for(i = 0 ; i < m ; i++){
        cin>>carcoordinate[i][0]>>carcoordinate[i][1];
    }

    for(i = 0 ; i < n ; i ++){
        cin>>a>>b>>t;

        cout<<calculate( a, b,t,m)<<endl;
    }


    clear(carcoordinate,0);
  }


  return 0;
}

lli result = 0;
lli nowpos;

lli extraCalc(lli a,lli b,lli t,lli i){

  lli diff = (carcoordinate[i][1]-carcoordinate[i][0]);
  nowpos = diff<0 ? carcoordinate[i][1]:carcoordinate[i][0];//smallest position of the car
  diff = abs(diff);

  if(diff == 1){
    if(diff % 2 != 0){
      nowpos += diff;
    }
  }
  else{
    if(nowpos == 0)
    diff++;
    nowpos += (t%(diff));
  }
  if(nowpos>=a && nowpos <=b ){
    result ++;
  }

}


lli calculate(lli a,lli b,lli t,lli m){
    result = 0;

    for (lli i = 0; i < m; i++) {
      if(carcoordinate[i][1]>carcoordinate[i][0])
      {
          if(carcoordinate[i][1]<a || carcoordinate[i][0] >b)
            {
            //do nothing
            continue;
          }
          else if(carcoordinate[i][1]<=b && carcoordinate[i][0] >= a){
            //cout<<"here"<<endl;
            result ++;
          }
          else
               extraCalc(a, b, t,i);

      }
      else if(carcoordinate[i][1]<carcoordinate[i][0])
      {
        if(carcoordinate[i][1]>b || carcoordinate[i][0] <a)
              {
              //do nothing
              continue;
              }
        else if(carcoordinate[i][0]<=b && carcoordinate[i][1] >= a){
        result++;
      }
        else
            extraCalc(a, b, t,i);

      }

    }

    return result;
}
