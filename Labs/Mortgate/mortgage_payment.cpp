#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
class Mortgage{
    public:
    int loan;
    double rate;
    double years;
    double term;
    double payment;
    double insertMortgage(void){
        Mortgage newMortgage;
        do {
        cout << "Enter the amount of the loan: ";
        cin >> newMortgage.loan;
        cout << "Enter the annual interest rate in decimal form (Ex .075): ";
        cin >> newMortgage.rate;
        cout << "Enter the length of the loan in years: ";
        cin >> newMortgage.years;
        newMortgage.term = pow(1+newMortgage.rate/12, 12*newMortgage.years);
        newMortgage.payment = newMortgage.loan * (newMortgage.rate / 12) * newMortgage.term / (newMortgage.term - 1);
        cout << "Monthly Payment: " << "$" << newMortgage.payment    << endl;
        cout << "Total Payment: " << "$" << newMortgage.payment * newMortgage.years * 12 << endl;
    }
        while (newMortgage.loan || newMortgage.rate || newMortgage.years < 0);
}
};
int main(){
    Mortgage finalMortgage;
    finalMortgage.insertMortgage();
}

