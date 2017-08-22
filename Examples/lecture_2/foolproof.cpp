#include <iostream>
using namespace std;
 
void menu();
 
int main() {
    menu();
    bool stay = true;
    while(stay) {
        string choice;
        string user_input;
        cout << "\n\t  Enter your choice: ";
        cin >> choice;
        cin.ignore();
        switch(choice[0]) {
            case '1':
                // option 1 use getline()
                cout << "\n\tEnter a line of text string: ";
                getline(cin, user_input);
                cout << "You have entered a line of text: \n\t" << user_input << endl;
                break;
            case 'm': case 'h':
                menu();
                break;
            case 'q': case 'Q':
                stay = false;
                break;
            default:
                cout << "\nCommands not supported.\n";
        } // end of switch
    }// end of while
}
 
void menu() {
    cout << "\n\t----- Fool Proof Menu -------------"
     << "\n\t  1 - Enter a line of text"
     << "\n\t  2 - Enter a text phrase"
     << "\n\t  3 - Enter an integer number"
     << "\n\t  4 - Enter a flaoat number"
     << "\n\t  q - quit";
}