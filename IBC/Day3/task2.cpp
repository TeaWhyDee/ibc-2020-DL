#include <iostream>

using namespace std;

int main()
{
    cout << "Enter your values: " << endl;
    int N, K, li, ri;
    cin >> N >> K;

    string out = "";
    out.resize(N, 'I'); // set the size of string and fill with I

    for (int i = 0; i < K; i++){
        cin >> li >> ri;

        out.replace(li-1, ri-li+1, ri-li+1, '.'); // from li-1, replace ri-li characters with ri-li '.' 
    }

    cout << out << endl;
    return 0;
}
