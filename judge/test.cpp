#include<iostream>
#include<cstdio>
#include<vector>
#include<cstring>
#include<string>    // std::string
#include<cmath>
#include<climits>
#include<cctype>
#include<algorithm>
#include <utility>  // std::pair, std::make_pair

#define clear(m,data) memset(m,sizeof(m),data)
#define __abs(a) (a)<(0)?((a)*(-1)):a
#define lli long long int

#define _PII pair<int ,int>

// INT_MIN	int	-32767 (-215+1) or less*
// UINT_MAX	unsigned int	65535 (216-1) or greater*
// LONG_MAX	 long int	2147483647 (231-1) or greater*
// LLONG_MAX	long long int	9223372036854775807 (263-1) or greater*

using namespace std;
int _tc = 1;


string decToBin(int n);
void test1();
void test2();
void test3();
void test4();
void test5();
int main(){


test3();
  return 0;
}


void test3(){

    vector<_PII> test;


    test.push_back(pair<int ,int>(3,4));
}


void test2(){
    int n ;
    while(cin >>n){
        int x = n & -n;
        cout<<x<<endl;
        int y = n+x;
        cout<<y <<endl;
        cout<<(n&~y)<<endl;
        cout<<(x>>1)<<endl;
        n =( (n&~y)/(x>>1))|y
;

        cout<<n<<endl;
    }

}


string decToBin(int n){

    string num = "";
    int temp = 0;
    while(n != 0){

        temp = (n&1);

        num += (temp+'0');
        n = n>>1;
    }

return num;
}


void test1(){

  string test = "11110";

  //  while(!next_permutation(test.begin() ,test.end()))
  //  {
  //    cout<<test<<endl;
  //  }

  if(!next_permutation(test.begin() ,test.end())){
        cout<<"=====  "<<test<<endl;
  }
cout<<"=====  "<<test<<endl;
}
