package Java;

class LinkedLIst {
    public static void main(String[] args) {
        Linked l1= new Linked();
        l1.insert(1);
        l1.insert(2);
        l1.insert(3);
        l1.insert(4);
        l1.insert(5);
        l1.insert(6);
        l1.display();
    }
}

//Nosde class
class Node{
    int data;
    Node next=null;
    Node(int data){
        this.data=data;
    }
    Node(){};
}
class Linked{
    private Node head=null;
    Linked(){
    }
    public void insert(int data){
        Node node= new Node(data);
        node.next=head;
        head=node;
    }

    public void display(){
        Node t= new Node();
        t=head;
        while(t!=null){
            System.out.println(t.data);
            t=t.next;
        }
        

    }
}
