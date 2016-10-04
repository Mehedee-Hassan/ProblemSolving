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
#define __lli long long int
#define __pii pair<int ,int>


// INT_MIN	int	-32767 (-215+1) or less*
// UINT_MAX	unsigned int	65535 (216-1) or greater*
// LONG_MAX	 long int	2147483647 (231-1) or greater*
// LLONG_MAX	long long int	9223372036854775807 (263-1) or greater*

using namespace std;
int __tc = 1;

__lli factorialUpTo15[16];
int tempArray[16];


int findLimit(int n){
   for(int i = 2 ; i <= 15 ; i ++){
        if(factorialUpTo15[i] > n){
            return i-1;
        }

    }

}

void preCalcution(){
    factorialUpTo15[0] =1;
    factorialUpTo15[1] =1;

    for(int i = 2 ; i <= 15 ; i ++){
        factorialUpTo15[i] = i * factorialUpTo15[i - 1];

    }
}



int main(){

    preCalcution();

    int T,n,counter;

    cin>>T;


    while(T--){
    cin>>n;


int j ,i;
bool possible = false,equalFlag = false;

    int limit = findLimit(n);

    for(i = 1 ; i <=limit ; i ++)
    {
        for(j = i+1 ; j <=limit ; j ++){


        }
    }


    cout<<"Case "<<__tc++<<": ";

    if(possible){
        cout<<"impossible";
    }else {
        cout<<i<<"! +"<<j<<" "<<"!";
    }

    cout<<endl;
    }

  return 0;
}

