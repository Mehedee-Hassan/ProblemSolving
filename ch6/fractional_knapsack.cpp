#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>


using namespace std;

typedef pair<int ,int> PII;

vector<PII> vectorKnap;


bool compare(PII A, PII B);


int main(){

    int n ,W;
    int weight, price;

    scanf("%d",&n);

    for(int i = 0 ; i < n ; i ++){
        weight = price = 0;


        scanf("%d %d",&weight ,&price);
        vectorKnap.push_back(PII(weight ,price));

    }


    sort(vectorKnap.begin() ,vectorKnap.end() ,compare);


    cin>>W;

    double ans = 0.00 ;
    for(int i = 0 ; i < n ; i ++){

        int z = min(W , vectorKnap[i].first);

        cout<<"w,z = "<<W<< " "<<vectorKnap[i].first<<" "<<vectorKnap[i].second<<endl;

        W -= z;
        ans += (z*((vectorKnap[i].second*1.00)/(vectorKnap[i].first*1.00)));
            //multiplide by each unit value


        cout<<ans<<endl;
    }


    cout<<"ans = "<<ans<<endl;

return 0;
}



bool compare(PII A, PII B){
    return (A.second* B.first > A.first * B.second);
}





// test case

/*

4
5 10
3 9
4 11
5 4
5
*/
