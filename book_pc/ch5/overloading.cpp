#include<iostream>
#include<cstdio>

#include<queue>

using namespace std;

//function declaration
void normal();
void advanced();

struct point{
    int x,y;
};


int main(){

    //normal();
    advanced();

return 0;

}

bool operator<(point a ,point b){
    if(a.x != b.x)
        return (a.x > b.x);

    return (a.y>b.y);
}

void advanced(){

    priority_queue<point> p ;

    point p1 ;
    p1.x = 2;
    p1.y = 3;

    p.push(p1);


    p1.x = 20;
    p1.y = 30;

    p.push(p1);


    point test = p.top();
    cout<<test.x<<endl;
}


void normal(){
priority_queue<int> pq;


    pq.push(10);
    pq.push(3);

    pq.push(10);
    pq.push(30);
    pq.push(10);
    pq.push(3);
    pq.pop();

    cout<<pq.top()<<endl;




}


