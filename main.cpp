#include <iostream>
using namespace std;

int main() {
    int hostUserNum, guestUserNum;
    cout << " Guessing Game " << endl;
    cout << "Host: " << endl;
    cin >> hostUserNum;
    system("cls");

    cout << "Guest: " << endl;
    cin >> guestUserNum;
    if (hostUserNum == guestUserNum)
    cout << "Correct!" << endl;
    else
    cout << "Wrong!" << endl;

    system("pause");
}