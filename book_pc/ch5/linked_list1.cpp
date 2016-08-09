#include<cstdio>
#include<iostream>
#include<cmath>
#include<vector>


using namespace std;

struct node{
    int roll;
    node *next;
};

node *root = NULL;


void append(int roll){

    if(root == NULL){
        root=new node();
        root->roll = roll;
        root->next = NULL;

    }else{

        node *current_node = root;
        while(current_node->next != NULL){
            current_node = current_node->next;
        }
        node *newnode = new node();
        newnode->roll = roll;
        newnode->next = NULL;


    current_node->next = newnode;
    }

}




void print(){

    node *currentNode = root;


    while(currentNode != NULL){

        cout<<currentNode->roll<<endl;

        if(currentNode->next == NULL)
            break;

        currentNode = currentNode->next;
    }

}

int main(){

    append(2);
    append(3);
    append(4);
    print ();
return 0;
}
