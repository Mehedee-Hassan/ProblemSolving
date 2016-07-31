#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int primes[300000];
short flag[1000000];
int primeCount;

bool isPrime(int );


int main(){

    primeCount = 0;


    isPrime(200);

    return 0;


}





bool isPrime(int n){
    flag[0] = 1;
    flag[1] = 1;


    int limit = sqrt( n * 1.0)+2;

    int i = 1;

    for(i = 4 ; i < n ; i+=2 )  flag[i] = 1;

    flag[2] = 0;
    primes[primeCount++] = 2;

    for(int j = 3 ; j <= n ; j +=2){


        if(flag[j] == 0){


        primes[primeCount++] = j;

          if(j <= limit){


            for( i = j*j ; i <= n ; i += j * 2){

                cout<<i<<" ";

                flag[i] = 1;

            }


          }

        }


    }  cout<<"\n";

}
