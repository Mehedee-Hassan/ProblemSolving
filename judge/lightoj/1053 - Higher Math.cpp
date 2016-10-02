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


    lli t,tc=1,a,b,c;

    cin>>t;

    while(t--){


        cin>>a>>b>>c;
        if((a*a == (b*b + c*c)) || (b*b == (a*a+c*c)) || (c*c == (a*a+b*b)))
            cout<<"Case "<<tc++<<": yes"<<endl;

        else
        cout<<"Case "<<tc++<<": no"<<endl;

    }

  return 0;
}
