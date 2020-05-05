#include<iostream>
using namespace std;
//Node linked List
class Node{
    public:
    int data;
    Node* next;
};
//Queue class
class Queue{
    Node* front;
    Node* rear;
    public:
    Queue(){
        front=NULL;
        rear=NULL;
    } //  //Insert Queue element
   
    void insert_queue(int data){
        Node* temp=new Node();
        temp->data=data;
        temp->next=NULL;
        if(front==NULL){
            front=rear=temp;
        }else
        {
            rear->next=temp;
            rear=temp;
        }
        
    }

//Display Queue element
void display(){
    if(front==NULL){
        cout<<"EMPTY"<<endl;
    }else{
        Node* temp=new Node();
        temp=front;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp =temp->next;
        }
    }
}

//Peek Element 
int peek(){
    if(front==NULL){
         cout<<"EMPTY"<<endl;
         return -1;
    }else{
         Node* temp=new Node();
        temp=rear;
       return temp->data;
    }
}

//delete Queue
void delete_Queue(){
     if(front==NULL){
         cout<<"EMPTY"<<endl;
    }else if(front==rear){
        front=rear=NULL;
    }else{
        front=front->next;
    }
}
};
int main(){
    Queue q1;
    q1.insert_queue(10);
    q1.insert_queue(11);
    q1.insert_queue(12);
    q1.insert_queue(13);
    q1.display();           //10 11 12 13 
    cout<<"\n"<<q1.peek()<<endl;  // 13
    q1.delete_Queue();
    q1.display();//11 12 13 

    return 0;
}
