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


  nowpos = (t%(diff));
  int timesOfVisit = t / diff;


  if(timesOfVisit % 2 == 0){
    nowpos = carcoordinate[i][0] + nowpos;

  }
  else {

    nowpos = carcoordinate[i][1] - nowpos;


  }


  if(nowpos>=a && nowpos <=b ){
    result ++;
  }

}


lli calculate(lli a,lli b,lli t,lli m){
    result = 0;

    for (lli i = 0; i < m; i++) {


          if(carcoordinate[i][1]<a || carcoordinate[i][0] >b)
          {

            continue;
          }
          else if(carcoordinate[i][1]<=b && carcoordinate[i][0] >= a){
            result ++;
          }
          else
               extraCalc(a, b, t,i);




    }

    return result;
}
