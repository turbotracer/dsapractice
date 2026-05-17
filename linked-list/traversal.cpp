#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = nullptr;
    }
};

int main(){

    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);


    Node currentNode = *head;
    do{
        cout <<currentNode.data << endl;
        currentNode = *currentNode.next;
    }while(currentNode.next != nullptr);

    return 0;
}
