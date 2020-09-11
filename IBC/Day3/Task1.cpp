#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    int queens[8][2]; // [index of a queen][x,y coordinates]

    cout << "Enter your numbers: " << endl;
    for (int i = 0; i < 8; i++)
        cin >> queens[i][0] >> queens[i][1];

    for (int i = 0; i < 8; i ++)
        for (int j = i+1; j < 9; j++){
            if(queens[i][0] == queens[j][0] || queens[i][1] == queens[j][1] || (abs(queens[j][0] - queens[i][0]) == abs(queens[j][1] - queens[i][1]))){
                cout << "YES" << endl;
                return 0;
            }
        }
    
    cout << "NO" << endl;
    return 0;
}
