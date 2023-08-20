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
    
    void insertBeforeGivenValue(int value, int targetValue)
    {
        Node* newnode = new Node(); // Create a new Node object
        
        newnode->info = value; // Set the value of the new node
        
        if(head->info==targetValue) //If the targetValue is found at the beginning (head) of the linked list
        {
            newnode->next = head;
            head = newnode;
            return;
        }
        
        Node* ptr = head;
        Node* prev = NULL;
        
        while(ptr!=NULL) 
        {
            if(ptr->info == targetValue) 
            break;
            
            prev = ptr //prev points to the node right before it.
            ptr = ptr->next;
        }
        
        if(ptr==NULL) //If the targetValue is not found, it displays a message indicating that the target value doesn't exist.
        {
            cout<<"No target value exists"<<endl;
        }
        else
        {
            newnode->next = ptr;
            prev->next = newnode;
        }
        
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
    
    int value, target;
    cout<<"Enter value to insert and Enter value before which to insert=";
    cin>>value>>target;
    
    obj.insertBeforeGivenValue(value, target);
    
    obj.showList();
}
