#include<cstdio>
#include<iostream>
#include<cctype>

using namespace std;


int main(){

    string alphaNum;
    int i,j;

    int tc,length;
    int solution = 0;

    cin>>tc;

    while(tc--){


        cin>>alphaNum;
        solution = 0;

        length = alphaNum.length();
        string newNumber = "";

        for(i = 0 ; i < length ; i ++){

            if(isdigit(alphaNum[i])){
                if((alphaNum[i] - '0')%3 == 0 ){
                    solution ++;
                }
            }
        }

        int j;
        for(i = 0 ; i < length ; i++){

            //if((alphaNum[i] - '0') == 0) solution ++;

            for(j = i + 1 ; j < length ; j++)
            {
                if((alphaNum[j] - '0') == 0) solution++;
            }
        }

cout<<solution<<endl;
        int zero = -1;

        for(i = 0 ; i < length ; i ++){
            newNumber = "";

            for(j = i ; j < length ; j ++,i++)
                if(isdigit(alphaNum[j])){


                 newNumber += alphaNum[j];

                }else break;

            for(int k = 0 ; k< newNumber.length() ; k++){
                int tt = 0;
                for(int l = k ; l< newNumber.length() ; l++){

                    if(tt == 0 && (alphaNum[l] - '0') == 0 )continue;

                    tt *= 10;
                    tt += (alphaNum[l] - '0');
                    tt = tt%3;
                    if(tt == 0 && (alphaNum[l] - '0')!=0)
                        solution ++;

                }

            }

        }




        alphaNum = "";

        cout<<solution<<endl;
        }

return 0;
}





























