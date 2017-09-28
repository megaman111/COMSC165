#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

struct Customer {
    string name;
    string address;
    string city;
    string state;
    string zip;
    string phone;
    double balance;
    string last_pay;
};

string search(string name);
void format();

int main( ) {
    int choice;
    int account;
    int customer;
    char aspect;
    Customer c; // you have to modify this variable to an arry
    Customer c2;
    Customer c3;
    do {
        cout << "1. Enter new account information for Customer 1\n"
         << "2. Enter account new information for Customer 2\n"
         << "3. Enter account new information for Customer 3\n"
         << "4. Change account information\n"
         << "5. Display all account information\n"
         << "6. Search for a customer\n"
         << "7. Exit the program\n"
         << "Enter your choice: ";
        cin >> choice; cin.ignore(1000,10);

        switch(choice) {
            case 1: //Enter new account information
                cout << "Customer Name: ";
                getline(cin, c.name); 
                while(c.name.empty()) {
                    cout << "Name is required!\n";
                    getline(cin, c.name); 
                }
                cout << "Customer Address: ";
                getline(cin, c.address); 
                while(c.address.empty()) {
                    cout << "Address is required!\n";
                    getline(cin, c.address);
                }   
                cout << "Customer City: ";
                getline(cin, c.city); 
                while(c.city.empty()) {
                    cout << "City is required!\n";
                    getline(cin, c.city); 
                }    
                cout << "Customer State: ";
                getline(cin, c.state); 
                while(c.state.empty()) {
                    cout << "State is required!\n";
                    getline(cin, c.state);
                }                    
                cout << "Customer Zip Code: ";
                getline(cin, c.zip); 
                while(c.zip.empty()) {
                    cout << "Zip Code is required!\n";
                    getline(cin, c.state);
                }
                                    
                cout << "Customer Phone: ";
                getline(cin, c.phone); 
                while(c.phone.empty()) {
                    cout << "Phone is required!\n";
                    getline(cin, c.state);
                }                        
                cout << "Customer Balance: ";
                cin >> c.balance;
                while(c.balance <= 0) {
                    cout << "Balance is empty or negative!\n";
                    cin >> c.balance;
                }    
                cout << "Last Payment date: ";
                cin >> c.last_pay;
                while(c.balance <= 0) {
                    cout << "Last payment date is empty!\n";
                    getline(cin, c.last_pay);
                // ....
                break;
            case 2: //Enter new account information
                cout << "Customer Name: ";
                getline(cin, c2.name); 
                while(c2.name.empty()) {
                    cout << "Name is required!\n";
                    getline(cin, c2.name); 
                }
                cout << "Customer Address: ";
                getline(cin, c2.address); 
                while(c2.address.empty()) {
                    cout << "Address is required!\n";
                    getline(cin, c2.address);
                }   
                cout << "Customer City: ";
                getline(cin, c2.city); 
                while(c2.city.empty()) {
                    cout << "City is required!\n";
                    getline(cin, c2.city); 
                }    
                cout << "Customer State: ";
                getline(cin, c2.state); 
                while(c2.state.empty()) {
                    cout << "State is required!\n";
                    getline(cin, c2.state);
                }                    
                cout << "Customer Zip Code: ";
                getline(cin, c2.zip); 
                while(c2.zip.empty()) {
                    cout << "Zip Code is required!\n";
                    getline(cin, c2.state);
                }
                                    
                cout << "Customer Phone: ";
                getline(cin, c2.phone); 
                while(c2.phone.empty()) {
                    cout << "Phone is required!\n";
                    getline(cin, c2.state);
                }                        
                cout << "Customer Balance: ";
                cin >> c2.balance;
                while(c2.balance <= 0) {
                    cout << "Balance is empty or negative!\n";
                    cin >> c2.balance;
                }    
                cout << "Last Payment date: ";
                cin >> c2.last_pay;
                while(c.balance <= 0) {
                    cout << "Last payment date is empty!\n";
                    getline(cin, c2.last_pay);
                // ....
                break;
            case 3:
               cout << "Customer Name: ";
                getline(cin, c3.name); 
                while(c3.name.empty()) {
                    cout << "Name is required!\n";
                    getline(cin, c3.name); 
                }
                cout << "Customer Address: ";
                getline(cin, c3.address); 
                while(c3.address.empty()) {
                    cout << "Address is required!\n";
                    getline(cin, c3.address);
                }   
                cout << "Customer City: ";
                getline(cin, c3.city); 
                while(c3.city.empty()) {
                    cout << "City is required!\n";
                    getline(cin, c3.city); 
                }    
                cout << "Customer State: ";
                getline(cin, c3.state); 
                while(c3.state.empty()) {
                    cout << "State is required!\n";
                    getline(cin, c3.state);
                }                    
                cout << "Customer Zip Code: ";
                getline(cin, c3.zip); 
                while(c3.zip.empty()) {
                    cout << "Zip Code is required!\n";
                    getline(cin, c3.state);
                }
                                    
                cout << "Customer Phone: ";
                getline(cin, c3.phone); 
                while(c3.phone.empty()) {
                    cout << "Phone is required!\n";
                    getline(cin, c3.state);
                }                        
                cout << "Customer Balance: ";
                cin >> c3.balance;
                while(c3.balance <= 0) {
                    cout << "Balance is empty or negative!\n";
                    cin >> c3.balance;
                }    
                cout << "Last Payment date: ";
                cin >> c3.last_pay;
                while(c3.balance <= 0) {
                    cout << "Last payment date is empty!\n";
                     getline(cin, c3.last_pay);
                // ....
                break;
            case 4:
            cout << "Which account would you like to change?: ";
            cin >> account;
            cin.ignore(1000,10);
            if(account == 1){
                cout << "What would you like to change about Account 1? [n for Name, a for Address, c for City, s for State, z for Zip Code, p for Phone, b for Balance, l for Last payment date]: ";
                cin >> aspect;
                cin.ignore(1000,10);
                if(aspect == 'n'){
                    cout << "Enter new name here: ";
                    getline(cin, c.name);
                    cout << "Please select another option from the menu: ";
                }
                if(aspect == 'a'){
                    cout << "Enter new address here: ";
                    getline(cin, c.address); 
                    cout << "Please select another option from the menu: ";
                }
                if(aspect == 'c'){
                    cout << "Enter new city here: ";
                    getline(cin, c.name);
                    cout << "Please select another option from the menu: ";                   
                }
                if(aspect == 's'){
                    cout << "Enter new state here: ";
                    getline(cin, c.state);
                    cout << "Please select another option from the menu: ";                   
                }
                if(aspect == 'z'){
                    cout << "Enter new zip here: ";
                    getline(cin, c.zip);
                    cout << "Please select another option from the menu: ";                   
                }
                if(aspect == 'p'){
                    cout << "Enter new phone here: ";
                    getline(cin, c.phone);
                    cout << "Please select another option from the menu: ";                   
                }
                if(aspect == 'b'){
                    cout << "Enter new balance here: ";
                    cin >> c.balance;
                    cin.ignore(1000,10);
                    cout << "Please select another option from the menu: "; 
                 }
                 if(aspect == 'l'){
                     cout << "Enter new Last Payment date here: ";
                    getline(cin, c.last_pay);
                    cout << "Please select another option from the menu: ";                     
                 }
            }
            if(account == 2){
                cout << "What would you like to change about Account 2? [n for Name, a for Address, c for City, s for State, z for Zip Code, p for Phone, b for Balance]: ";
                cin >> aspect;
                cin.ignore(1000,10);
                if(aspect == 'n'){
                    cout << "Enter new name here: ";
                    getline(cin, c2.name);
                    cout << "Please select another option from the menu: ";                   
                }
                if(aspect == 'a'){
                    cout << "Enter new address here: ";
                    getline(cin, c2.address); 
                    cout << "Please select another option from the menu: ";                   
                }
                if(aspect == 'c'){
                    cout << "Enter new city here: ";
                    getline(cin, c2.name);
                    cout << "Please select another option from the menu: ";                   
                }
                if(aspect == 's'){
                    cout << "Enter new state here: ";
                    getline(cin, c2.state);
                    cout << "Please select another option from the menu: ";                   
                }
                if(aspect == 'z'){
                    cout << "Enter new zip here: ";
                    getline(cin, c2.zip);
                    cout << "Please select another option from the menu: ";                   
                }
                if(aspect == 'p'){
                    cout << "Enter new phone here: ";
                    getline(cin, c2.phone);
                    cout << "Please select another option from the menu: ";                   
                }
                if(aspect == 'b'){
                    cout << "Enter new balance here: ";
                    cin >> c2.balance;
                    cin.ignore(1000,10);
                    cout << "Please select another option from the menu: "; 
                }
                if(aspect == 'l'){
                    cout << "Enter new Last Payment date here: ";
                    getline(cin, c2.last_pay);
                    cout << "Please select another option from the menu: ";                     
                 }
            
            }
            if(account == 3){
                cout << "What would you like to change about Account 3? [n for Name, a for Address, c for City, s for State, z for Zip Code, p for Phone, b for Balance]: ";
                cin >> aspect;
                cin.ignore(1000,10);
                if(aspect == 'n'){
                    cout << "Enter new name here: ";
                    getline(cin, c3.name);
                    cout << "Please select another option from the menu: ";                    
                }
                if(aspect == 'a'){
                    cout << "Enter new address here: ";
                    getline(cin, c3.address); 
                    cout << "Please select another option from the menu: ";                    
                }
                if(aspect == 'c'){
                    cout << "Enter new city here: ";
                    getline(cin, c3.name);
                    cout << "Please select another option from the menu: ";                    
                }
                if(aspect == 's'){
                    cout << "Enter new state here: ";
                    getline(cin, c3.state);
                    cout << "Please select another option from the menu: ";                    
                }
                if(aspect == 'z'){
                    cout << "Enter new zip here: ";
                    getline(cin, c3.zip);
                    cout << "Please select another option from the menu: ";                    
                }
                if(aspect == 'p'){
                    cout << "Enter new phone here: ";
                    getline(cin, c3.phone);
                    cout << "Please select another option from the menu: ";                   
                }
                if(aspect == 'b'){
                    cout << "Enter new balance here: ";
                    cin >> c3.balance;
                    cin.ignore(1000,10);
                    cout << "Please select another option from the menu: ";                  
                }
                if(aspect == 'l'){
                    cout << "Enter new Last Payment date here: ";
                    getline(cin, c3.last_pay);
                    cout << "Please select another option from the menu: ";                     
                 }
            }
            
            case 5:
                cout << fixed << showpoint << setprecision(2)
                     << "Customer #1 Name: " << c.name << endl;
                    cout << "Customer Address: " << c.address << endl;
                    cout << "Customer City: " << c.city << endl;
                    cout << "Customer State: " << c.state << endl;
                    cout << "Customer Zip Code: " << c.zip << endl;
                    cout << "Customer Phone: " << c.phone << endl;
                    cout << "Customer Balance: " << c.balance << endl;
                    cout << "Last Payment Date" << c.last_pay << endl;
                    format();
                cout << fixed << showpoint << setprecision(2)
                     << "Customer #2 Name: " << c2.name << endl;
                    cout << "Customer Address: " << c2.address << endl;
                    cout << "Customer City: " << c2.city << endl;
                    cout << "Customer State: " << c2.state << endl;
                    cout << "Customer Zip Code: " << c2.zip << endl;
                    cout << "Customer Phone: " << c2.phone << endl;
                    cout << "Customer Balance: " << c2.balance << endl;
                    cout << "Last Payment Date" << c2.last_pay << endl;
                    format();
                cout << fixed << showpoint << setprecision(2)
                     << "Customer #3 Name: " << c3.name << endl;
                    cout << "Customer Address: " << c3.address << endl;
                    cout << "Customer City: " << c3.city << endl;
                    cout << "Customer State: " << c3.state << endl;
                    cout << "Customer Zip Code: " << c3.zip << endl;
                    cout << "Customer Phone: " << c3.phone << endl;
                    cout << "Customer Balance: " << c3.balance << endl;
                    cout << "Last Payment Date" << c3.last_pay << endl;                    
                    format();
                    cout << "Please select another option from the menu: ";
            case 6:
                cout << "Which Customer Would you like to search for? [1,2,3]:";
                cin >> customer;
                cin.ignore(1000,10);
                if (customer == 1){
                    cout << fixed << showpoint << setprecision(2)
                     << "Customer #1 Name: " << c.name << endl;
                    cout << "Customer Address: " << c.address << endl;
                    cout << "Customer City: " << c.city << endl;
                    cout << "Customer State: " << c.state << endl;
                    cout << "Customer Zip Code: " << c.zip << endl;
                    cout << "Customer Phone: " << c.phone << endl;
                    cout << "Customer Balance: " << c.balance << endl;
                    cout << "Last Payment Date" << c.last_pay << endl;
                    cout << "Please select another option from the menu: ";
                    format();
                }
              if(customer == 2){
                     cout << fixed << showpoint << setprecision(2)
                    << "Customer #2 Name: " << c2.name << endl;
                    cout << "Customer Address: " << c2.address << endl;
                    cout << "Customer City: " << c2.city << endl;
                    cout << "Customer State: " << c2.state << endl;
                    cout << "Customer Zip Code: " << c2.zip << endl;
                    cout << "Customer Phone: " << c2.phone << endl;
                    cout << "Customer Balance: " << c2.balance << endl;
                    cout << "Last Payment Date" << c2.last_pay << endl;
                    cout << "Please select another option from the menu: ";
                    format();   
              }
             if(customer == 3){
                     cout << fixed << showpoint << setprecision(2)
                     << "Customer #3 Name: " << c3.name << endl;
                    cout << "Customer Address: " << c3.address << endl;
                    cout << "Customer City: " << c3.city << endl;
                    cout << "Customer State: " << c3.state << endl;
                    cout << "Customer Zip Code: " << c3.zip << endl;
                    cout << "Customer Phone: " << c3.phone << endl;
                    cout << "Customer Balance: " << c3.balance << endl;
                    cout << "Last Payment Date" << c3.last_pay << endl;
                    format();
                    cout << "Please select another option from the menu: ";
             }
        }
    } while(choice !=7);
    cout << "Bye :)";
}
}
}
}
void format(){
cout << setfill('_') << setw(80) << endl;
cout << " " << endl;
}
