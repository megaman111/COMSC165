#include <iostream>
//#include <list>
#include <vector>
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
    void reverse();
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
    if(!head){
        cout << "\n********nothing********\n";
         return;
    }
    Node *p = head;
    while(p->next) {
        std::cout << p->value << ", ";
        p=p->next;
    }
    std::cout << p->value << std::endl;
}


void NumberList::reverse(){
    if(!head) return;
    double headValue;
    this->deHead(headValue);
    this->reverse();
    this->append(headValue);
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
  vector<double> 
        first {1.1, 2.3, 3.3, 4.5, 5.5, 6.7, 7.7, 8.9, 9.9},
        second {2.3, 4.5, 6.7, 8.9};
    NumberList list;
    double num;
    for(auto n:first) list.append(n);
    cout << "The list:\n\t";
    list.display();

    cout << "Removing the following numbers:\n\t";
    bool begin = true;
    for(auto n:second) {
        list.remove(n);
        if(begin) begin = false;
        else cout << ", ";
        cout << n;
    }
    cout << "\nThe list:\n\t";
    list.display();

    cout << "The reversed list:\n\t";
    list.reverse();
    list.display();
}
