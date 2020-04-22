#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

class LinkedList{
    Node* head;
    
    public:
    LinkedList(){
        head=NULL;
    }
    ~LinkedList(){};

    void insertNode(int data);

    void display(){
        Node *temp=head;
        while(temp->next!=NULL){
            cout<<temp->data<<"\t";
            temp=temp->next;
        }
         cout<<temp->data;
    }
};
void LinkedList ::insertNode(int data){
       Node* node=new Node();
        node->data =data;
        node->next=NULL;
        if(head==NULL){
            head=node;
        }else{
            Node* temp =head;
            while (temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=node;
        }
    }

    //Main funcations start here s
int main(){
    LinkedList l1;
    l1.insertNode(1);
    l1.insertNode(2);
    l1.display();
    return 0;
}