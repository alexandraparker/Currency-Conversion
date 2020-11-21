#include <iostream>
#include <iomanip>
#include <climits>
using namespace std;
//declaring procedures
void menu();
void USD();
void EUR();
void BRL();
void JPY();
void TRY();
void exit();
//declaring functions
double validateGBP(double);
double convertCurrency(double, char);
double calculateFee(double);
double validateStaff(char);

int main()
{
    menu();
}

void menu()
{
    int choice;

    //print menu
    do
    {
        for (int i = 0; i < 42; i++)
        {
            cout << "*";
        }

        cout << "\n" << "|            Conversion Menu             |";
        cout << "\n" << "|                                        |";
        cout << "\n" << "|  1      American Dollars (USD)         |";
        cout << "\n" << "|  2          Euros (EUR)                |";
        cout << "\n" << "|  3       Brazilian Real (BRL)          |";
        cout << "\n" << "|  4        Japanese Yen (JPY)           |";
        cout << "\n" << "|  5        Turkish Lira (TRY)           |";
        cout << "\n" << "|                                        |";
        cout << "\n" << "|  0              Exit                   |" << endl;

        for (int i = 0; i < 42; i++)
        {
            cout << "*";
        }

        cout << "\n"<<"Please Select An Option: ";
        cin >> choice;

        //validating choice input
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cout << "Error, integers only";
            system("pause");
            system("cls");
            menu();
        }
        else if(choice < 0 || choice > 5)
        {
            cin.clear();
            cout << "Error, please select an option between 0 and 5";
            system("pause");
            system("cls");
            menu();
        }
        else
        {
            //go to correct procedure
            switch (choice)
            {
            case 1:
                USD();
                break;
            case 2:
                EUR();
                break;
            case 3:
                BRL();
                break;
            case 4:
                JPY();
                break;
            case 5:
                TRY();
                break;
            case 0:
                exit();
                break;
            }
        }
    } while (choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5 && choice != 0);
}
void USD() 
{
    char currencyType = 'U';
    double fee = 0;
    double GBP = 0;
    double total = 0;
    char selection;

    cout << "\n"<<"The American Dollars exchange rate is 1 GBP = 1.40 USD";
    cout << "\n" << "Please Enter the amount in GBP you wish to convert: " << endl;
    cin >> GBP;
    validateGBP(GBP);
    convertCurrency(GBP, currencyType);
    calculateFee(GBP);

    cout << "\n" << "GBP " << GBP << " converts into USD " << convertCurrency(GBP, currencyType) << endl;
    cout << "\n" << "The total for this transaction plus fees is " << setprecision(4) << calculateFee(GBP) << endl;

    cout << "Are you a staff member? Y or N";
    cin >> selection;

    if (validateStaff(selection))
    {
        total = calculateFee(GBP) - (calculateFee(GBP) * 0.95/100);
        cout << "\n" << "5% discount applied. Your new total is GBP " << setprecision(4) << total << endl;
        system("pause");
        system("cls");
        menu();
    }
    else
    {
        cout << "Final total is GBP " << setprecision(4) << calculateFee(GBP) << endl;
        system("pause");
        system("cls");
        menu();
    }
    
}
void EUR()
{
    char currencyType = 'E';
    double fee = 0;
    double GBP = 0;
    double total = 0;
    char selection;

    cout << "\n" << "The Euro exchange rate is 1 GBP = 1.14 EUR";
    cout << "\n" << "Please Enter the amount in GBP you wish to convert: " << endl;
    cin >> GBP;
    validateGBP(GBP);
    convertCurrency(GBP, currencyType);
    calculateFee(GBP);

    cout << "\n" << "GBP " << GBP << " converts into EUR " << convertCurrency(GBP, currencyType) << endl;
    cout << "\n" << "The total for this transaction plus fees is " << setprecision(4) << calculateFee(GBP) << endl;

    cout << "Are you a staff member? Y or N " << endl;
    cin >> selection;

    if (validateStaff(selection))
    {
        total = calculateFee(GBP) - (calculateFee(GBP) * 0.95 / 100);
        cout << "\n" << "5% discount applied. Your new total is GBP " << setprecision(4) << total << endl;
        system("pause");
        system("cls");
        menu();
    }
    else
    {
        cout << "Final total is GBP " << setprecision(4) << calculateFee(GBP) << endl;
        system("pause");
        system("cls");
        menu();
    }

}
void BRL()
{
    char currencyType = 'B';
    double fee = 0;
    double GBP = 0;
    double total = 0;
    char selection;

    cout << "\n" << "The Brazilian Real exchange rate is 1 GBP = 4.77 BRL";
    cout << "\n" << "Please Enter the amount in GBP you wish to convert: " << endl;
    cin >> GBP;
    validateGBP(GBP);
    convertCurrency(GBP, currencyType);
    calculateFee(GBP);

    cout << "\n" << "GBP " << GBP << " converts into BRL " << convertCurrency(GBP, currencyType) << endl;
    cout << "\n" << "The total for this transaction plus fees is " << setprecision(4) << calculateFee(GBP) << endl;

    cout << "Are you a staff member? Y or N " << endl;
    cin >> selection;

    if (validateStaff(selection))
    {
        total = calculateFee(GBP) - (calculateFee(GBP) * 0.95 / 100);
        cout << "\n" << "5% discount applied. Your new total is GBP " << setprecision(4) << total << endl;
        system("pause");
        system("cls");
        menu();
    }
    else
    {
        cout << "Final total is GBP " << setprecision(4) << calculateFee(GBP) << endl;
        system("pause");
        system("cls");
        menu();
    }
}
void JPY()
{
    char currencyType = 'J';
    double fee = 0;
    double GBP = 0;
    double total = 0;
    char selection;

    cout << "\n" << "The Euro exchange rate is 1 GBP = 151.05 JPY";
    cout << "\n" << "Please Enter the amount in GBP you wish to convert: " << endl;
    cin >> GBP;
    validateGBP(GBP);
    convertCurrency(GBP, currencyType);
    calculateFee(GBP);

    cout << "\n" << "GBP " << GBP << " converts into JPY " << convertCurrency(GBP, currencyType) << endl;
    cout << "\n" << "The total for this transaction plus fees is " << setprecision(4) << calculateFee(GBP) << endl;

    cout << "Are you a staff member? Y or N " << endl;
    cin >> selection;

    if (validateStaff(selection))
    {
        total = calculateFee(GBP) - (calculateFee(GBP) * 0.95 / 100);
        cout << "\n" << "5% discount applied. Your new total is GBP " << setprecision(4) << total << endl;
        system("pause");
        system("cls");
        menu();
    }
    else
    {
        cout << "Final total is GBP " << setprecision(4) << calculateFee(GBP) << endl;
        system("pause");
        system("cls");
        menu();
    }
}
void TRY()
{
    char currencyType = 'T';
    double fee = 0;
    double GBP = 0;
    double total = 0;
    char selection;

    cout << "\n" << "The Euro exchange rate is 1 GBP = 5.68 TRY";
    cout << "\n" << "Please Enter the amount in GBP you wish to convert: " << endl;
    cin >> GBP;
    validateGBP(GBP);
    convertCurrency(GBP, currencyType);
    calculateFee(GBP);

    cout << "\n" << "GBP " << GBP << " converts into TRY " << convertCurrency(GBP, currencyType) << endl;
    cout << "\n" << "The total for this transaction plus fees is " << setprecision(4) << calculateFee(GBP) << endl;

    cout << "Are you a staff member? Y or N " << endl;
    cin >> selection;

    if (validateStaff(selection))
    {
        total = calculateFee(GBP) - (calculateFee(GBP) * 0.95 / 100);
        cout << "\n" << "5% discount applied. Your new total is GBP " << setprecision(4) << total << endl;
        system("pause");
        system("cls");
        menu();
    }
    else
    {
        cout << "Final total is GBP " << setprecision(4) << calculateFee(GBP) << endl;
        system("pause");
        system("cls");
        menu();
    }
}
void exit()
{
    char selection;

    cout << "Are you sure you want to exit? Y or N?" << endl;
    cin >> selection;

    if (selection == 'Y' || selection == 'y')
    {
        exit(0);
    }
    else if (selection == 'N' || selection == 'n')
    {
        menu();
    }
    else
    {
        cout << "\n" << "Error, please enter either Y or N" << endl;
        system("pause");
        system("cls");
        menu();
    }

}
double convertCurrency(double GBP, char currencyType)
{
    double USDrate = 1.40, EURrate = 1.14, BRLrate = 4.77, JPYrate = 151.05, TRYrate = 5.68;
    double convertedCurrency = 0;

    //determine which currency type to convert into and then convert
    if (currencyType == 'U')
    {
        convertedCurrency = GBP * USDrate;
    }
    else if (currencyType == 'E')
    {
        convertedCurrency = GBP * EURrate;
    }
    else if (currencyType == 'B')
    {
        convertedCurrency = GBP * BRLrate;
    }
    else if (currencyType == 'J')
    {
        convertedCurrency = GBP * JPYrate;
    }
    else if (currencyType == 'T')
    {
        convertedCurrency = GBP * TRYrate;
    }

    return convertedCurrency;
}
double calculateFee(double GBP)
{
    double fee = 0;
    double total;
    double feeTotal;

    //calculate fee for transaction
    if (GBP > 0 && GBP < 300)
    {
        fee = 3.5;
    }
    else if (GBP >= 300 && GBP < 750)
    {
        fee = 3;
    }
    else if (GBP >= 750 && GBP < 1000)
    {
        fee = 2.5;
    }
    else if (GBP >= 1000 && GBP < 2000)
    {
        fee = 2;
    }
    else if (GBP >= 2000)
    {
        fee = 1.5;
    }

    feeTotal = GBP * fee / 100;
    total = GBP + feeTotal;

    return total;
}
double validateGBP(double GBP)
{
    //validating entered amount - must be decimal and between 0 and 2500
    if (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "Error, decimals only";
        system("pause");
        system("cls");
        menu();
    }
    else if (GBP < 0 || GBP > 2500)
    {
        cin.clear();
        cout << "Error, cannot exchange over £2500 or negatives";
        system("pause");
        system("cls");
        menu();
    }
    
    return(GBP);
}
double validateStaff(char selection)
{
    bool staffBool = false;

    //validating selection
    if (selection == 'Y' || selection == 'y')
    {
        staffBool = true;
    }
    else if (selection == 'N' || selection == 'n')
    {
        staffBool = false;
    }
    else
    {
        cout << "\n" << "Error, please enter either Y or N" << endl;
        system("pause");
        system("cls");
        menu();
    }
    return staffBool;
}