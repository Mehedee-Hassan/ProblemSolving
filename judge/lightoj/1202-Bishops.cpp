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



bool inTheSameColor(int c1, int r1, int  c2, int r2);

int main(){

    int t;
    int ans;
    int c1,r1,c2,r2;
    int rowDif,colDiff;


    cin>>t;

    while(t--){


        rowDif = 0;
        colDiff = 0;

        cin>>c1>>r1>>c2>>r2;
        ans = -1;

        rowDif = __abs(r1-r2);
        colDiff = __abs(c1-c2);


        if(rowDif == colDiff){
            ans = 1;
        }
        else {
            if(inTheSameColor(c1,r1,c2,r2))
                    ans = 2;
            else
                ans -1;

        }

        cout<<"Case "<<__tc++<<": ";
        if(ans == -1)
            cout<<"impossible"<<endl;
        else
        cout<<ans<<endl;
    }


  return 0;
}




bool inTheSameColor(int c1, int r1, int  c2, int r2){
    int rdiff,cdiff;

    rdiff = __abs(r1-r2);
    cdiff = __abs(c1-c2);

    rdiff %= 2;
    cdiff %= 2;


    if(cdiff  == rdiff)
        return true;

return false;
}
