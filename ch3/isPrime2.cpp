#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int primes[300000];
short flag[1000000];
int primeCount;

bool isPrime(int );
bool isPrimeBit(int n);
int check(int,int);
int setBit(int ,int);

int main(){

    primeCount = 0;


    isPrimeBit(200);

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
cout<<j<<" ";

        primes[primeCount++] = j;

          if(j <= limit){


            for( i = j*j ; i <= n ; i += j * 2){



                flag[i] = 1;

            }


          }

        }


    }  cout<<"\n";

}


//bitwise

bool isPrimeBit(int n){



    int limit = sqrt( n * 1.0)+2;

    int i = 1;

    for(i = 4 ; i < n ; i+=2 )  flag[i] = 1;

    flag[2/32] =  setBit(flag[2/32] , 2%32);



    primes[primeCount++] = 2;

    for(int j = 3 ; j <= n ; j +=2){


        if(check(flag[j/32],j%32) == 0){
        cout<<j<<" ";

        primes[primeCount++] = j;

          if(j <= limit){


            for( i = j*j ; i <= n ; i += j * 2){
                //cout<<" i="<<i<<" ";
                 flag[i/32] = setBit(flag[i/32] , i%32);

            }


          }

        }


    }  cout<<"\n";

}



int setBit(int flagValue, int shift){

    return (flagValue | (1<<shift));

}

int check(int flagValue, int shift){

    if(flagValue & (1<<shift)){
        return 1;
    }
    else
        return 0;

}


