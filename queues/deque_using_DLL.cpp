#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
class Deque
{
public:
    Node *head;
    Node *tail;
    int size;
    Deque()
    {
        head = tail = NULL;
        size = 0;
    }
    void pushBack(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
        {
            head = tail = temp;
        }
        else
        {
            tail->next = temp;
            temp->prev = tail; // extra
            tail = temp;
        }
        size++;
    }
    void pushFront(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            temp->next = head;
            head->prev = temp; // extra
            head = temp;
        }
        size++;
    }
    void popFront()
    {
        if (size == 0)
        {
            cout << "Empty List";
            return;
        }
        head = head->next;
        if (head != NULL)
            head->prev = NULL; // extra
        else
            tail = NULL; // extra
        size--;
    }
    void popBack()
    {
        if (size == 0)
        {
            cout << "Empty List";
            return;
        }
        else if (size == 1)
        { // extra
            popFront();
            return;
        }
        else
        {
            Node *temp = tail->prev;
            temp->next = NULL; // extra
            tail = temp;
            size--;
        }
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    int front()
    {
        return head->val;
    }
    int back()
    {
        return tail->val;
    }
    int length()
    {
        return size;
    }
    bool empty()
    {
        if (size == 0)
            return true;
        else
            false;
    }
};
int main()
{
    Deque dq;
    dq.pushBack(10);
    dq.pushBack(20);
    dq.pushBack(30);
    dq.pushBack(40);
    dq.pushBack(50);
    dq.pushFront(0);
    dq.display();
    dq.popFront();
    dq.popBack();
    dq.display();
    cout << dq.front() << endl;
    cout << dq.back() << endl;
}