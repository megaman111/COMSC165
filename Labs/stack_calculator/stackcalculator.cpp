#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <stack>
#include <cctype>
using namespace std;

int calc(char token, int num1, int num2);

bool IsOperator(char C);

bool IsNumericDigit(char C);


int main() {
    
    string postfix;
    char token;
    while(true) {
        cout << "\nEnter a postfix expression, q to quit: ";
        getline(cin, postfix);
        if(postfix == "q") break;
        cout << "\nPostfix => " << postfix << endl;

        // calculate Postfix
        deque<char>postfixQueue;
        for(auto item:postfix)postfixQueue.push_back(item);
        stack<int> stk; // operands
        int num1, num2, result, step = 1;
        while( !postfixQueue.empty() ) {
        char head = prefixQueue.front();
        if (isNumeric(head)){
            //foo();
        } 
        else if (isOperator(head)){
          //bar();  
        } 
            
        }// while( !postfixQueue.empty() )
    }//while(true)
}//main


int calc(char token, int num1, int num2){


}


bool IsOperator(char C){
    
	if(C == '+' || C == '-' || C == '*' || C == '/' || C == '^')
		return true;

	return false; //returns false if none of the operators are found in the characters.
	
}


bool IsNumericDigit(char C) {
    
	if(C >= '0' && C <= '9') return true;
	return false; //returns false if character is not a numeric digit.
	
}

//https://gist.github.com/mycodeschool/7702441