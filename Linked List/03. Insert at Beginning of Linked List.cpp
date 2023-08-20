#include<iostream>
using namespace std;

class Node //The NODE class represents the individual nodes in the linked list.
{
    public:
    
    //It contains two members: info (to store the value of the node) and next (to store the pointer/reference to the next node).
    int info;
    Node* next;
};
class LinkedList //The LinkedList class manages the linked list operations.
{
    Node* head; //It has a private member head that points to the first node in the linked list.
    
    public:
    
    LinkedList() //The constructor of the LinkedList class initializes the head pointer to NULL to indicate an empty list.
    {
        head=NULL;
    }
    
    void addNode(int value)
    {
        Node* newnode = new Node(); //It creates a new node, sets its info to the provided value, and its next to NULL.
        
        newnode->info = value;
        newnode->next = NULL;
        
        if(head==NULL) //If the list is empty (head is NULL), the new node becomes the head.
        {
            head = newnode;
        }
        else //Otherwise, it traverses to the end of the list and appends the new node there.
        {
            Node* ptr = head;
            
            while(ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = newnode;
        }
    }
    
    void insertAtStart(int value)
    {
        Node* newnode = new Node(); // Create a new Node object
        
        newnode->info = value; // Set the value of the new node
        newnode->next = head;  // Set the next pointer of the new node to the current head
        
        head = newnode; // Update the head pointer to the new node
    }

    void showList()
    {
        Node* ptr = head;
        
        while(ptr!=NULL)
        {
            cout<<ptr->info<<"->";
            ptr=ptr->next;
        }
        cout<<"NULL"<<endl;
        
    }
};
int main()
{
    LinkedList obj;
    
    obj.addNode(10);
    obj.addNode(20);
    obj.addNode(30);
    obj.addNode(40);
    
    int value;
    cout<<"Enter value to insert at start=";
    cin>>value;
    
    obj.insertAtStart(value);
    
    obj.showList();
}
