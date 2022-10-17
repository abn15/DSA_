/*1. Develop a menu driven program for the following operations of on a Singly Linked 
List.
(a) Insertion at the beginning.
(b) Insertion at the end.
(c) Insertion in between (before or after a node having a specific value, say 'Insert a 
new Node 35 before/after the Node 30').
(d) Deletion from the beginning.
(e) Deletion from the end.
(f) Deletion of a specific node, say 'Delete Node 60').
(g) Search for a node and display its position from head.
(h) Display all the node values.*/
#include<iostream>
using namespace std;
class Node{
	public:
int data;
Node* next;
};

int main()
{   cout<<"1 Insertion at the beginning 2 Insertion at the end 3 Insertion in between 4 Deletion from the beginning 5 Deletion from the end 6 Deletion of a specific node, say Delete Node 60  7 Search for a node and display its position from head 8 Display all the node values";
    int choice;
    cin>>choice;
    //declaring a nodes to make a linklist
    
    int A[] = {3, 5, 7, 10, 15};
 
    Node* head = new Node;
 
    Node* temp;
    Node* last;
 
    head->data = A[0];
    head->next = NULL;
    last = head;
 
    // Create a Linked List
    for (int i=1; i<sizeof(A)/sizeof(A[0]); i++){
 
        // Create a temporary Node
        temp = new Node;
 
        // Populate temporary Node
        temp->data = A[i];
        temp->next = NULL;
 
        // last's next is pointing to temp
        last->next = temp;
        last = temp;
    }
//making the menu choice work xD
if(choice==1){
    //insertion in the beginning
    Node* temp = new Node;
    int p;
    cout<<"Enter the value to be inserted";
    cin>>p;
    temp->data = p; 
    temp->next = head;
    head = temp;

}
else if(choice==2){
//insertion in the end
    Node* temp = new Node;
    int p;
    cout<<"Enter the value to be inserted";
    cin>>p;
    temp->data = p; 
    temp->next = NULL;
    last->next = temp;
    last = temp;
}
else if(choice==3){
    //insertion in between
    Node* temp = new Node;
    int p;
    cout<<"Enter the value to be inserted";
    cin>>p;
    temp->data = p; 
    temp->next = NULL;
    last->next = temp;
    last = temp;
}
else if(choice==4){
    //deletion from the beginning
    Node* temp = new Node;
    temp = head;
    head = head->next;
    delete temp;
}
else if(choice==5){
    //deletion from the end
    Node* temp = new Node;
    temp = head;
    while(temp->next!=last){
        temp = temp->next;
    }
    delete last;
    last = temp;
    last->next = NULL;
}
else if(choice==6){
    //deletion of a specific node
    Node* temp = new Node;
    temp = head;
    int p;
    cout<<"Enter the value to be deleted";
    cin>>p;
    while(temp->next->data!=p){
        temp = temp->next;
    }
    Node* temp2 = new Node;
    temp2 = temp->next;
    temp->next = temp->next->next;
    delete temp2;
}
else if(choice==7){
    //search for a node and display its position from head
    Node* temp = new Node;
    temp = head;
    int p;
    cout<<"Enter the value to be searched";
    cin>>p;
    int count = 0;
    while(temp->data!=p){
        temp = temp->next;
        count++;
    }
    cout<<"The value is at position "<<count;
}
else if(choice==8){
    //display all the node values
    Node* temp = new Node;
    temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
else{
    cout<<"Invalid choice";
}




    
    return 0;
}








