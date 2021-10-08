#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    Node(int data){
        this ->data = data;
        next = NULL;
    }
};

Node* takeInput(){
    int data;
    cin>>data;
    Node* head = NULL;
    Node *tail =    NULL;
    while(data != -1){
        Node *newNode = new Node(data);

        if(head == NULL){
            head = newNode;
            tail = newNode;
        }
        else{
           tail -> next = newNode;
           tail = tail -> next;
           //OR
           // tail = newNode;
        }
        cin>>data;
    }
    return head;
}

int mid(Node* head){
    Node* temp = head;
    int count = 0,m;
    while(temp != NULL)
    {
        count++;
        temp = temp -> next;

    }
    Node* temp1 = head;
    int k=0;
    while(k<count/2)
    {
        temp1 = temp1->next;
        k++;  
    }
    m= temp1->data;
    return m;
}

int main()
{
    cout<<"Enter elements: "<<endl;
    Node* head = takeInput();
    int t = mid(head);
    cout<<t;

}