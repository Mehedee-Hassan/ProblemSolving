
#include<iostream>
#include<cstdio>
#include<vector>
#include<cstring>
#include<string>
#include<cmath>
#include<climits>
#include<cctype>
#include<algorithm>
#define clear(m,data) memset(m,sizeof(m),data)
#define __abs(a) (a)<(0)?((a)*(-1)):a
#define lli long long int

// INT_MIN	int	-32767 (-215+1) or less*
// UINT_MAX	unsigned int	65535 (216-1) or greater*
// LONG_MAX	 long int	2147483647 (231-1) or greater*
// LLONG_MAX	long long int	9223372036854775807 (263-1) or greater*

using namespace std;
int _tc = 1;

int main(){


    int T , mypos ,liftpos;
    int result;

    cin>>T;

    while(T--){

        cin>>mypos>>liftpos;
        result = __abs(mypos - liftpos);

        result *= 4;
        result += mypos*4;

        result += 19;


        cout<<"Case "<<(_tc++)<<": "<<result<<endl;
    }

  return 0;
}
