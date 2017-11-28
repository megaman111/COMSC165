#ifndef NUMBERLIST_H
#define NUMBERLIST_h
#include <iostream>
using namespace std;

#include <string>
struct Node {
    double value; // The value in this node
    struct Node *next; // To point to the next node
};

class NumberList {
    Node *head; // List head pointer
public:
    // Constructor
    NumberList() { head = nullptr; }

    // Destructor
    // ~NumberList();
    
    // Linked list operations
    void append(double);
    void insert(double);
    void remove(double);
    bool deHead(double &);
    bool deTail(double &);
    void display() const;
    std::string toString() const;
};


bool NumberList::deHead(double &num) {
    if(!head) return false; // empty list
    num = head->value; delete head;
    if(head->next) head = head->next;
    else head=nullptr;
    return true;
}

bool NumberList::deTail(double &num) {
    if(!head) return false; // empty list
    Node *p=head, *prev=nullptr;
    while( p->next != nullptr ) {
        prev = p; p = p->next; }
    num = p->value; delete p;
    if(!prev) head = nullptr; // list of one node
    else prev->next = nullptr;
}


void NumberList::insert(double num) {
    Node *newNode, *p, *prev=nullptr;
    newNode = new Node;
    newNode->value = num;
    newNode->next = nullptr;

    // if(head == nullptr)
    if(!head) // empty list
        head = newNode;
    else {
        p = head;
        while( p != nullptr  && p->value < num) {
            prev = p; p = p->next; }
        // p must be pointing to the first bigger, or end
        if(prev==nullptr) { // the first one is the last one.
            head = newNode;
            newNode->next = p; } 
        else {
            prev->next = newNode;
            newNode->next = p; } } }


void NumberList::remove(double num) {
    Node *p, *prev=nullptr;
    if(!head) return;
    if(head->value == num) {
        p = head->next;
        delete head;
        head = p; }
    else {
        p = head;
        // skip all NOTs
        while( p != nullptr  && p->value != num) {
            prev = p; p = p->next; }
        if(p) {
            prev->next = p->next;
            delete p; } } }


void NumberList::append(double num) {
    Node *newNode, *p;
    newNode = new Node;
    newNode->value = num;
    newNode->next = nullptr;
    
    if( !head ) head = newNode;
    else {
        p = head;
        while(p->next) p=p->next;
        p->next = newNode;
    }
}

void NumberList::display() const {
    if(!head) return;
    Node *p = head;
    while(p->next) {
        std::cout << p->value << ", ";
        p=p->next;
    }
    std::cout << p->value << std::endl;
}

std::string NumberList::toString() const {
    std::string output;
    Node *p = head;

    while(p->next) {
        output += std::to_string(p->value);
        output += ", ";
        p=p->next;
    }
    output += std::to_string(p->value);
    return output;
}


int main() {
    NumberList list;
    double num;
    list.append(2.5);
    list.append(7.9);
    list.append(12.6);
    list.display();
    list.insert(4.3);
    list.insert(11.11);
    list.insert(13.13);
    list.display();
    list.remove(7.9);
    list.remove(2.5);
    list.remove(13.13);
    list.display();

    while(list.deHead(num)) {
        cout << " X " << num << "\n";
        list.display();
    }
    list.display();
    
    list.append(32.5);
    list.append(37.9);
    list.append(112.6);
    // list.display(); // nothing happened
    
    while(list.deTail(num)) {
        cout << " X " << num << endl;
        list.display();
    }
    // list.display(); // nothing happened

}
#endif