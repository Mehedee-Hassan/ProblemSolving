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
#define _size 1000001
using namespace std;

double factorials[_size];

int main(){


  int t,n,b,tc = 1;
  cin>>t;

    factorials[0] = 0;

    for(int i = 1 ; i < _size ; i ++) {
        factorials[i] = factorials[i - 1] + log10(i);
    }



    while(t--){
        cin>>n>>b;

        cout<<"Case "<<tc++<<": "<<(long)(factorials[n] / (factorials[b] - factorials[b - 1]))+1<<endl;

    }




  return 0;
}
