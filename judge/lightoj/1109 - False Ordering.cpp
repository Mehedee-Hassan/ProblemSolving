#include<iostream>      //
#include<cstdio>        //
#include<vector>        //
#include<cstring>       //
#include<string>        // std::string
#include<cmath>         // pow,sqrt
#include<climits>       //
#include<cctype>        // type
#include<algorithm>     // sort ,permutation
#include <utility>      // std::pair, std::make_pair

#define clear(m,data) memset(m,sizeof(m),data)
#define __abs(a) (a)<(0)?((a)*(-1)):a
#define lli long long int
#define __pii pair<int ,int>
#define __mx 1000

// INT_MIN	int	-32767 (-215+1) or less*
// UINT_MAX	unsigned int	65535 (216-1) or greater*
// LONG_MAX	 long int	2147483647 (231-1) or greater*
// LLONG_MAX	long long int	9223372036854775807 (263-1) or greater*

using namespace std;
int _tc = 1;


vector<__pii> numOfDivisor;

bool com (__pii a ,__pii b){

        if(a.first < b.first)
            return true;

        else if(a.first == b.first){

            if(a.second > b.second)
                return true;


        }

return false;

}



void save(){

    numOfDivisor.push_back(__pii(1,1));
    numOfDivisor.push_back(__pii(2,2));
    numOfDivisor.push_back(__pii(2,3));
    int sum = 0,tempSquareRoot,j;


    for(int i = 4 ; i <= __mx ; i ++){
        sum = 0;
        tempSquareRoot = (i/2)+1;
        for(j = 2 ; j <=tempSquareRoot ; j ++){
            if( i % j == 0)
                sum++;
        }
        numOfDivisor.push_back(__pii(sum+2,i));
    }
//    for(int i = 4 ; i < numOfDivisor.size() ; i ++){
//
//        cout<<numOfDivisor.at(i).first<<" "<<numOfDivisor.at(i).second<<endl;
//    }

}



int main(){

  save();
  sort(numOfDivisor.begin() , numOfDivisor.end() ,com);




    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<"Case "<<_tc++<<": "<<numOfDivisor.at(n-1).second<<endl;
    }


  return 0;
}

