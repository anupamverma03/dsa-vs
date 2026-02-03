#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next; //pointer to store address of Node

    Node(int val){ //constructor to initialize a node
        data = val;
        next = NULL;
    }
};
class List{ //list class only stores head and tail pointers not nodes themselves
    Node* head;
    Node* tail;

public:
    List(){
        head = tail = NULL; //creates an empty list with no nodes
    }

    void push_front(int val){
        Node* newNode = new Node(val); //uses dynamic allocation to store data in memory after function ends
        //Node newNode(val); //static, not suitable, deletes after fucntion ends
        if(head == NULL){ // if list is empty
            head = tail = newNode;
            return;
        } else{ // not empty
            newNode->next = head; //store head pointer val in next ptr of new node
            head = newNode; // update head pointer to newNode value
        }
    }

    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        } else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop_front(){
        if(head == NULL){
            cout << "List is empty\n";
            return;
        }
        if(head == tail){
            delete head;
            head = tail = NULL;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    void pop_back(){
        if(head == NULL){
            cout << "List is empty\n";
            return;
        }
        if(head == tail){
            delete tail;
            head = tail = NULL;
            return;
        }
        Node* temp = head;

        //traverse to second last node

        while(temp->next != tail){
            temp = temp->next;
        }
        delete tail;
        tail = temp;
        tail->next = NULL;
    }

    void insert(int val, int pos){
        if(pos<0){
            cout << "Invalid pos\n";
            return;
        }
        if(pos == 0){
            push_front(val);
            return;
        }

        Node* newNode = new Node(val);
        Node* temp = head;
        for(int i = 0; i < pos -1; i++){
            if(temp == NULL){
                cout << "Invalid pos\n";
                return;
            }
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

    int search(int key){
        Node* temp = head;
        int idx = 0;
        while(temp != NULL){
            if(temp->data == key){
                return idx;
            }
            temp = temp->next;
            idx++;
        }
        return -1;
    }
    void print(){ // print the linked list
        Node* temp = head; // create a temp pointer to store head pointer, prevents updating head pointer
        while(temp != NULL){
            cout << temp->data << "->";
            temp = temp->next; // update temp to next pointer
        }
        cout << "NULL" << endl;
    }
};
int main(){
    List ll; //initialize an empty LL with name ll
    ll.push_front(1); // add data fron front of list
    ll.push_front(2);
    ll.push_front(3);
    ll.print(); //printing of ll list.
    ll.push_back(0);
    ll.print();
    ll.pop_front();
    ll.print();
    ll.pop_back();
    ll.print();
    ll.insert(4,1);
    ll.print();
    cout << ll.search(4) << endl;
}