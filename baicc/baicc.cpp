
#include <iostream>
using namespace std;

double tinhtong(double a, double b); // nguyen mau ham

int main() {
    cout << "CHUONG TRINH TINHS CAC PHEP TINH CO BAN\n";
    double so1, so2, tong, hieu, tich, thuong;

    cout << "nhap so 1:"; cin >> so1;
    cout << "nhap so 2"; cin >> so2;

    tong = so1 + so2;
    hieu = so1 - so2;
    tich = so1 * so2;
    thuong = so1 / so2;
    cout << "tong hai so thong thuong:" << "+" << so2 << "=" << tong << endl;
    cout << "tong hai so su dung ham:" << so1 << "+" << so2 << "=" << tinhtong(so1, so2) << endl;
    cout << "hieu hai so:" << so1 << "-" << so2 << "=" << hieu << endl;
    cout << "tich hai so:" << so1 << "*" << so2 << "=" << tich << endl;
    cout << "thuong hai so:" << so1 << "/" << so2 << "=" << thuong << endl;
    system("pause");
    return 0;
}
double tinhtong(double a, double b) {
    // double giatritrave = a+b;
    // return giatritrave;
    return a + b;
}