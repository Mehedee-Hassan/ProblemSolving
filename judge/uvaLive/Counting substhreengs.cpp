//others source by fredo

#include<bits/stdc++.h>

using namespace std;

int cnt[3];
long long ans;

int main(){
    char alphaNum;
    int sumOfReminder[3];
    int localsum = 0;
    int result = 0;

    sumOfReminder[0] = 1;
    sumOfReminder[1] = sumOfReminder[2] = 0;

    while(alphaNum = getchar()){

        if(!isdigit(alphaNum)){
            sumOfReminder[0] = 1;
            sumOfReminder[1] = sumOfReminder[2] = 0;
            localsum = 0;

            if(isalpha(alphaNum))
            continue;
            else break;
        }


        localsum = (localsum + (alphaNum - '0'))%3;
        result += sumOfReminder[localsum];

        sumOfReminder[localsum]++;



    }
    cout<<result<<endl;

    return 0;
}



// others solution

