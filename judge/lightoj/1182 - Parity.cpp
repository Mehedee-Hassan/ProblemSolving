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



int main(){


    int T,n,counter;

    cin>>T;


    while(T--){
    cin>>n;

    counter = 0;
    while(n){

        if(n>>1&1)
            counter++;
    }

        cout<<"Case "<<__tc++<<": ";

        if(counter % 2 == 0)
            cout<<"even";
        else
            cout<<"odd";

    }

  return 0;
}

