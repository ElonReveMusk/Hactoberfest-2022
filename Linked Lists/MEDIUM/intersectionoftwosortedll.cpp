//Intersection of Two Sorted LinkedList
#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
node *takeinput_better()
{
    int data;

    cin >> data;
    node *head = NULL;
    node *tail = NULL;

    while (data != -1)
    {
        node *newnode = new node(data);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = tail->next;
        }

        cin >> data;
    }
    return head;
}
node *intersection(node *head_1, node *head_2)
{
    node *temp_1 = head_1;
    node *temp_2 = head_2;
    node *head = NULL;
    node *curr = NULL;
    while (temp_1 && temp_2)
    {
        if (temp_1->data == temp_2->data)
        {
            if (head==NULL)
            {
                node *newnode = new node(temp_2->data);
                head = newnode;
                curr = newnode;
            }
            else
            {
                node *newnode = new node(temp_2->data);
                curr->next = newnode;
                curr = curr->next;
            }
            temp_1 = temp_1->next;
            temp_2 = temp_2->next;
        }
        else
        {
            if (temp_1->data < temp_2->data)
            {
                temp_1 = temp_1->next;
            }
            else
            {
                temp_2 = temp_2->next;
            }
        }
    }

    return head;
}

void print(node *head)
{
    while (head != NULL)
    {
        cout << head->data << endl;
        head = head->next;
    }
}
int main()
{

    node *x = takeinput_better();
    print(x);
    cout << endl;
    node *y = takeinput_better();
    print(y);
    cout << endl;
    node *z = intersection(x, y);
    print(z);
}