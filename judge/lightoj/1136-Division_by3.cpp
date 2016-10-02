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



int countDiv(int a ,int b);


int main(){

    int a,b,t;
    cin>>t;

    while(t--){

        cin>>a>>b;
        int counter = countDiv(a,b);


        cout<<"Case "<<__tc++<<": "<<counter<<endl;
    }


  return 0;
}





int countDiv(int a ,int b){

    if(b %  3 == 0 ){
        b -= b/3;
    }else
    b -= (b/3) + 1;

a--;

    if(a % 3 == 0 ){
        a -= a / 3;

    }else
    a -= (a / 3) + 1;

int    counter = __abs(b - a) ;

return counter;
}
