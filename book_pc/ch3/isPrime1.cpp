#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;


bool isPrime (int n){

 if(n <=1) return 0;
 if(n%2 == 0) return false;


 int limit = sqrt(n+1);
 for( int i = 2 ; i <= limit  ; i++){
    if(n % i)
        return false;
 }


 return true;
}



int main(){



    if(isPrime(10)){
        printf("prime");
    }else{
        cout<<"not prime";
    }

    return 0;


}
