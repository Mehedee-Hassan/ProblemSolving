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
#define li long int



using namespace std;



li findOnoroyValue(li n, li tobe);
bool ifPoweMinusOne(li n);
li countOne(li n);
li findNextOne(li n);
li fasterSolution(int);
li toDecimal(string);
string decToBin(int );

int main(){


  li t;
  li tc = 1;
  li ans;

  li n,N;

  cin>>t;
  while(t--){
    ans = 0;
    cin>>n;
    N = n;


    ans = fasterSolution(n);



    cout<<"Case "<<tc++<<": "<<ans<<  endl;

  }


  return 0;
}

li fasterSolution(int n){



    string binaryOfn = decToBin(n);

    //cout<<"= "<<binaryOfn<<endl;

    if(!next_permutation(binaryOfn.begin() ,binaryOfn.end())){

        binaryOfn.insert(0,"10");
        binaryOfn.erase( (binaryOfn.length() - 1) ,1);
    }

    //cout<<binaryOfn<<endl;

    int ans = toDecimal(binaryOfn);



    return ans;
}


string decToBin(int n){

    string num = "";
    int temp = 0;
    while(n != 0){

        temp = (n&1);

        num += ((temp+'0'));
        n = n>>1;
    }

    //cout<<num<<endl;
    reverse(num.begin() ,num.end());
return num;
}


li toDecimal(string num){

    int decimal  = 0;
    int len = num.length();


   // cout<<"toDecimal = "<<num<<endl;
    for(int j = 0,i = len-1 ; i >=0 ; i --,j++){

        decimal += (num[i] - '0')* pow(2,j);
    }

    return decimal;

}




//tle solution
void tleSolution(){
  li t;
  li tc = 1;
  li ans;

  li n,N;

  cin>>t;
  while(t--){
    ans = 0;
    cin>>n;
    N = n;


    ans = countOne(n);
    if(ans == 1){
      ans = findNextOne(n);
    }
    else
    ans = findOnoroyValue(n,ans);

    cout<<"Case "<<tc<<": "<<ans<<  endl;

  }


}

li findOnoroyValue(li n, li tobe){


  for(li i = n+1 ; i < LONG_MAX ; i ++){

    if(countOne(i) == tobe)
      return i;

  }
return 0;
}


li countOne(li n){
  li ans = 0;


  while(n > 0){

    if(n&1 == 1){

      ans ++ ;

    }
    n = n>>1;

  }


return ans;
}



bool ifPoweMinusOne(li n){

  lli temp;

  for(int i =1 ; i< LONG_MAX;){

    temp =(pow(i,2)-1);
    if(n < temp) return false;

    if(n == temp)
      return true;

  }

}



li findNextOne(li n){
  return (n*2);

}





/*

101
110
11110


*/
