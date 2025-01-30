#include <iostream>

using namespace std;

struct Node 
{
    int data;
    Node* next;
};

class LinkedList 
{
    Node* head;

public: 
    LinkedList() : head(NULL) {}

    void insertAtBeginning(int value) 
    {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }

    void insertAtEnd(int value) 
    {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;

        if (!head) 
        {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    void display()
    {
        if (!head) {
            cout << "List is empty!" << endl;
            return;
        }

        Node* temp = head;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    int main()
    {
        LinkedList list;
        list.insertAtBeginning(1);
        list.insertAtBeginning(2);
        list.insertAtEnd(3);
        list.display();
        return 1;
    }
};