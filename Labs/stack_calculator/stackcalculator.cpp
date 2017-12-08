#include <iostream>

#include <math.h>

#include <string.h>

#include <ctype.h>

#include <queue>

#include <stack>
#include <map>

using namespace std;
int step = 0;
class postfix{
    
private :
queue<char> postfixQ;
stack <char> opStack;
stack <int> numberStack;
public :

//placing expression into Queue

postfix(char postfixExp[] ){

for(int i=0;i<strlen(postfixExp);i++){

cout<<postfixExp[i];
postfixQ.push(postfixExp[i]);

}

parser();

    }

//parser to split the expression char by char

void parser();

//perform mathmatical operations

void CALCULATION(char Operator) ;

void showResult( ) ;

} ;

//parser to split the expression char by char

void postfix::parser()

{

char c;
map <char, int> opMap;
opMap['-'] = 1;
opMap['+'] = 1;
opMap['*'] = 2;
opMap['/'] = 2;
opMap['^'] = 3;
while(!postfixQ.empty())

{

c=postfixQ.front();

postfixQ.pop();

//if digit push to number stack

if(isdigit(c))

{

numberStack.push(c-'0');

}

else //operator

{

if(opStack.empty())

{

opStack.push(c);

}

else

{//pop the operator and call CALCULATION to evaluate

char Operator=opStack.top();
//if(Operator >
//cout<<endl<<Operator;

opStack.pop();

CALCULATION(Operator);

opStack.push(c);

}

}

}

if(postfixQ.empty())

{

char Operator=opStack.top();

opStack.pop();

do{

CALCULATION(Operator);

}while(!opStack.empty());

showResult();

}

}

void postfix :: CALCULATION(char Operator )

{

int n1, n2, n3 ;

//pop top 2 elements from number stack

n2 = numberStack.top() ;

numberStack.pop();

n1 = numberStack.top() ;

numberStack.pop();

cout<<endl<<"Step "<< step++ << " : " << n2 <<" "<<Operator<<" "<< n1;

//perform calculation , based on the operator

switch ( Operator )

{

case '+' :

n3 = n2 + n1 ;

break ;

case '-' :

n3 = n2 - n1 ;

break ;

case '/' :

n3 = n2 / n1 ;

break ;

case '*' :

n3 = n2 * n1 ;

break ;

case '%' :

n3 = n2 % n1 ;

break ;

case '^' :

n3 = pow ( n2 , n1 ) ;

break ;

default :

cout << "Unknown operator" ;

exit ( 1 ) ;

}

//push the result in numberStack

numberStack.push ( n3 ) ;

}

void postfix :: showResult( )

{

cout <<endl<< "Result of : " << numberStack.top() ;

}

int main( )

{

while(true){

char postfixExp[50] ;

cout << "\nEnter postfix expression : " ;

cin.getline ( postfixExp, 50 ) ;

postfix p(postfixExp);

}

return 0;

}