
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
#define abs(a) (a)<(-1)?(a*(-1)):a
#define lli long long int

// INT_MIN	int	-32767 (-215+1) or less*
// UINT_MAX	unsigned int	65535 (216-1) or greater*
// LONG_MAX	 long int	2147483647 (231-1) or greater*
// LLONG_MAX	long long int	9223372036854775807 (263-1) or greater*

using namespace std;


int main(){


    int startPosition,a,b,c;
    int result = 0;
    int tempRes = 0;

    while(cin>>startPosition>>a>>b>>c){
    result = 360+360+360;
        if(a==0 && b==0 && c==0 && startPosition == 0) break;

        if(startPosition < a)
            tempRes = (40 - a) + (startPosition - 0);
        else
            tempRes = (startPosition -a );

        result += tempRes*9;
        //cout<<result<<" "<<tempRes<<endl;


        if(a < b )
            tempRes = (b - a);
        else
            tempRes = (40 - a) + (b - 0);


        result += tempRes*9;
        //cout<<result<<" "<<tempRes<<endl;


        if(b < c )
            tempRes = (40 - c) + (b - 0);
        else
            tempRes = (b - c);

        result += tempRes * 9;



        cout<<result<<endl;

    }




  return 0;
}
