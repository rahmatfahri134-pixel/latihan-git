#include <iostream>
using namespace std;

int main(){
    string username, pass;

    cout << "===== HALAMAN LOGIN =====\n";
    cout << "Masukan Username : ";
    getline(cin, username);

    cout << "Masukan Password : ";
    getline(cin, pass);

    cout << endl;

    cout << "==== DATA LOGIN ====\n";
    cout << "Username : " << username << endl;
    cout << "Password : " << pass << endl;
}