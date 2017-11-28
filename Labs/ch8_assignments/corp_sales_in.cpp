#include<iostream>
#include<string>
using namespace std;
struct CorpData{
    string DivisionName;
    double FirstQSales;
    double SecondQSales;
    double ThirdQSales;
    double FourthQSales;
    double TotalQSales;
    double AverageQSales;
    CorpData();
    CorpData(string, double, double, double, double);
};
CorpData::CorpData(){
}
CorpData::CorpData(string s, double q1, double q2, double q3, double q4){
    DivisionName = s;
    FirstQSales = q1;
    SecondQSales = q2;
    ThirdQSales = q3;
    FourthQSales =q4;
    TotalQSales;
    AverageQSales;
    
}
void getData(CorpData &);
void calSale(CorpData &);
void Display(CorpData);
int main(){
    CorpData con("Constructor", 123, 345, 567, 789);
    calSale(con);
    Display(con);
    CorpData east, west, north, south;
    cout << "Enter the name of each division..." << endl << endl;
    east.DivisionName = "East";
    getData(east);
    calSale(east);
    cout << endl;
    west.DivisionName = "West";
    getData(west);
    calSale(west);
    cout << endl;
    east.DivisionName = "North";
    getData(north);
    calSale(north);
    cout << endl;
    east.DivisionName = "South";
    getData(south);
    calSale(south);
    cout << endl;
    Display(east);
    Display(west);
    Display(north);
    Display(south);
    system("pause");
    
}
void getData(CorpData &g){
    do{
        cout << "Enter the first quarter sale of " << g.DivisionName << " : ";
        cin >> g.FirstQSales;
    }while(g.FirstQSales < 0);
    
    do{
        cout << "Enter the second quarter sale of " << g.DivisionName << " : ";
        cin >> g.SecondQSales;
    }while(g.SecondQSales < 0);
    
    do{
        cout << "Enter the third quarter sale of " << g.DivisionName << " : ";
        cin >> g.ThirdQSales;
    }while(g.ThirdQSales < 0);
    
    do{
        cout << "Enter the fourth quarter sale of " << g.DivisionName << " : ";
        cin >> g.FourthQSales;
    }while(g.FourthQSales < 0);    
    
    

}

void calSale(CorpData &c){
    c.TotalQSales = c.FirstQSales + c.SecondQSales + c.ThirdQSales + c.FourthQSales;
    c.AverageQSales = c.TotalQSales / 4;
}

void Display(CorpData d){
    cout << endl << "Divison Name :" << d.DivisionName << endl;
    cout << "First Quarter Sales: " << d.FirstQSales << endl;
    cout << "Second Quarter Sales: " << d.SecondQSales << endl;
    cout << "Third Quarter Sales: " << d.ThirdQSales << endl;
    cout << "Annual Sales: " << d.TotalQSales << endl;
    cout << "AverageQSales: " << d.AverageQSales << endl;
}