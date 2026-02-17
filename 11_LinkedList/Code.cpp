// To implement the CPP program for insertion, deletion in one way LINK LIST.

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

class LinkedList
{
private:
    Node *head;

public:
    LinkedList()
    {
        head = NULL;
    }

    // Insert at beginning
    void insertAtBeginning(int value)
    {
        Node *newNode = new Node(value);
        newNode->next = head;
        head = newNode;
        cout << "Inserted at beginning.\n";
    }

    // Insert at end
    void insertAtEnd(int value)
    {
        Node *newNode = new Node(value);

        if (head == NULL)
        {
            head = newNode;
            return;
        }

        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newNode;
        cout << "Inserted at end.\n";
    }

    // Delete by value
    void deleteValue(int value)
    {
        if (head == NULL)
        {
            cout << "List is empty.\n";
            return;
        }

        // If head node needs to be deleted
        if (head->data == value)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
            cout << "Deleted successfully.\n";
            return;
        }

        Node *temp = head;
        while (temp->next != NULL && temp->next->data != value)
        {
            temp = temp->next;
        }

        if (temp->next == NULL)
        {
            cout << "Value not found.\n";
            return;
        }

        Node *nodeToDelete = temp->next;
        temp->next = temp->next->next;
        delete nodeToDelete;

        cout << "Deleted successfully.\n";
    }

    // Display list
    void display()
    {
        Node *temp = head;

        if (temp == NULL)
        {
            cout << "List is empty.\n";
            return;
        }

        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main()
{
    LinkedList list;
    int choice, value;

    do
    {
        cout << "\n1. Insert at Beginning\n";
        cout << "2. Insert at End\n";
        cout << "3. Delete by Value\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            list.insertAtBeginning(value);
            break;

        case 2:
            cout << "Enter value: ";
            cin >> value;
            list.insertAtEnd(value);
            break;

        case 3:
            cout << "Enter value to delete: ";
            cin >> value;
            list.deleteValue(value);
            break;

        case 4:
            list.display();
            break;

        case 5:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 5);

    return 0;
}