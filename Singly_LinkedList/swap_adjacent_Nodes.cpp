#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        next = NULL;
    }
};

int length(Node *head)
{
    int n = 0;
    while (head)
    {
        head = head->next;
        n++;
    }
    return n;
}

Node *Adjacent_Swap(Node *head)
{
    int len = length(head);
    if (len < 2)
        return head;

    Node *dummy = new Node(0);
    dummy->next = head;

    Node *prev = dummy;
    Node *curr = dummy;
    Node *Next = dummy;

    while (len >= 2)
    {
        curr = prev->next;
        Next = curr->next;

        curr->next = Next->next;
        Next->next = prev->next;
        prev->next = Next;
        Next = curr->next;

        len -= 2;
        prev = curr;
    }
    return dummy->next;
}
void display(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
}
int main()
{
    Node *a = new Node(1);
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(5);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    Adjacent_Swap(a);
    display(a);
}