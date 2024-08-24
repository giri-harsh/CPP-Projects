#include <iostream>
using namespace std;

double INR(char from_curr, double amount) {
    double curr;
    if (from_curr == 'D')
        curr = amount * 80;
    else if (from_curr == 'A')
        curr = amount * 23;
    else if (from_curr == 'C')
        curr = amount * 62;
    else if (from_curr == 'Y')
        curr = amount * 0.6;
    else
        curr = amount;  
    return curr;
}

int main() {
    char from_curr, to_curr;
    cout << "Currency List :" << endl;
    cout << "USD || Dollar || 'D' || 80 wrt INR" << endl;
    cout << "INR || RUPEE || 'I' || 0 wrt INR" << endl;
    cout << "AED || DIRHAM || 'A' || 23 wrt INR" << endl;
    cout << "CAD || CANADIAN Dollar || 'C' || 62 wrt INR" << endl;
    cout << "JPY || YEN || 'Y' || 0.60 wrt INR" << endl;
    cout << "Enter source currency (symbol) " << endl;
    cin >> from_curr;
    cout << "Convert to ?" << endl;
    cin >> to_curr;
    cout << "Enter amount in " << from_curr << " to convert to " << to_curr << endl;
    double amount = 0;
    cin >> amount;

    double inr_amount = INR(from_curr, amount);

    if (to_curr == 'D')
        cout << "amount : " << inr_amount / 80 << endl;
    else if (to_curr == 'A')
        cout << "amount : " << inr_amount / 23 << endl;
    else if (to_curr == 'C')
        cout << "amount : " << inr_amount / 62 << endl;
    else if (to_curr == 'Y')
        cout << "amount : " << inr_amount / 0.6 << endl;
    else if (to_curr == 'I')
        cout << "amount : " << inr_amount << endl;
    else
        cout << "Invalid target currency" << endl;

    return 0;
}
