#include "iostream"
using namespace std;
 
int main()
{

float sumDeposit = 0;
int amountMonth = 0;
float profit = 0;
float annualRate = 5;
int daysInYear = 365;
int daysInMonth = 30;
 
cout << "Enter the deposite amount (U.S. dollar): ";
 cin >> sumDeposit;
cout << "Enter the number of months: ";
 cin >> amountMonth;
 
cout << "\nCalculation\n";
cout << "=======================================\n";
cout << "Interest per month: ";
// розраховуЇмо за формулою ≥ записуЇмо в зм≥нну profit
profit = sumDeposit * (annualRate / 100) / daysInYear * daysInMonth;
 
cout << sumDeposit << " * " << annualRate << "% / " << daysInYear
 << " * " << daysInMonth << " = " << profit << " $" << endl;
 
cout << "Inerest for all time: ";
// множимо к-сть % за один м≥с€ць на увесь терм≥н депозиту ≥ записуЇмо в profit
profit *= amountMonth;
cout << profit << " $" << endl;
 
cout << "The total amount of money at the end: "
 << sumDeposit + profit << " $";
cout << endl << endl;
 
return 0;
}

