#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

void perm4(int d[4][4]){
    int minLength = pow(2, 16);
    int length = 0;
    int perm[] = {0, 1, 2, 3};
    do{
        length += d[0][perm[0]];
        for (int i = 0; i < 3; i++){
            length += d[perm[i]][perm[i+1]];
            cout << "cities: " << perm[0] << perm[1] << perm[2] << perm[3] << " length " << i << " = " << length << endl;
        }
        cout << "final length: " << length << endl;
        if (length < minLength){
            minLength = length;
            cout << "----------new min length"  << endl  << endl;
        }
        else
             cout << endl;
        
        
        length = 0;
    }
    while (next_permutation(perm, perm+4));
    cout << "min length: " << minLength << endl;
}


int main()
{
    int distances4[4][4] = {
        {0, 10, 8, 6},
        {10, 0, 3, 7},
        {8,  3, 0, 1},
        {6,  7, 1, 0}
    };

    int n;
    cin >> n;
    int minLength = pow(2, 16) - 1;

    if (n == 4){
        perm4(distances4);
    }



    return 0;
}
