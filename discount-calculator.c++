#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>

using namespace std;

void price_calculating();
char answer = 'Y';

int main()
{
    cout << "\t\t **************************" << endl;
    cout << "\t\t WELCOME TO MY DADDY COFFEE" << endl;
    cout << "\t\t **************************" << endl;

    do
    {
        price_calculating();
    } while (toupper(answer) == 'Y');

    cout << '\n'
         << '\n'
         << '\n';
    cout << setw(55) << " THANK YOU!" << endl;

    return 0;
}

void price_calculating()
{
    double total_price, discount, after_discount;

    cout << setw(51) << "TOTAL PURCHASE PRICE OF MY DADDY COFFEE: RM ";
    cin >> total_price;
    cout << endl;

    if (total_price < 30)
    {
        cout << setw(44) << "A 5% Discount Will Be Offered!" << endl
             << endl;
        discount = total_price * 0.05;
    }
    else if (total_price >= 30 && total_price < 60)
    {
        cout << setw(44) << "A 10% Discount Will Be Offered!" << endl
             << endl;
        discount = total_price * 0.10;
    }
    else if (total_price >= 60 && total_price < 100)
    {
        cout << setw(44) << "A 15% Discount Will Be Offered!" << endl
             << endl;
        discount = total_price * 0.15;
    }
    else if (total_price >= 100)
    {
        cout << setw(45) << "A 20% Discount Will Be Offered!" << endl
             << endl;
        discount = total_price * 0.20;
    }

    after_discount = total_price - discount;

    cout << fixed << showpoint << setprecision(2);
    cout << setw(50) << " -----------------------------------------------" << endl;
    cout << setw(48) << "TOTAL PURCHASE PRICE AFTER DISCOUNT: RM " << after_discount << endl;
    cout << setw(50) << " -----------------------------------------------" << endl;

    cout << '\n';
    cout << setw(40) << "TO CONTINUE, PRESS 'Y': ";
    cin >> answer;
}
