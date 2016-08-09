#include<iostream>
#include<cmath>
#include<vector>
using namespace std;



vector<int> divisors[1000002];

void genDevisor(int n){
    int i ,j;
    for(i = 1; i <=n ; i ++){
        for(j = i; j <= n ; j += i){
//            cout<<"d="<<i<<" "<<j<<" ";
            divisors[j].push_back(i);
        }
    }

}



int main(){

    genDevisor(200);

return 0;

}
