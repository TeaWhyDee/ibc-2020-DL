#include <iostream>
#include <string>

using namespace std;


string username = "admin";
string password = "admin";

bool checkCredentials(string usr, string pwd){
    if (usr == username && pwd == password){
        return true;
    } else{
        return false;
    }
}


int main()
{
    string inputUsr;
    string inputPwd;

    for (int i = 0; i < 3; i++){
        cout << "Enter your username: ";
        cin >> inputUsr;

        cout << "Enter your password: ";
        cin >> inputPwd;

        if (checkCredentials(inputUsr, inputPwd)){
            cout << "Access has been granted" << endl;
            return 1;
        }
        
        cout << "Access denied, you have " << 2-i << " attempt(s) left." << endl << endl;
    }

    cout << "Amount of maximum tries exceeded, your account has been blocked. Contact system administrator to get access to your account." << endl;

    return 0;
}
