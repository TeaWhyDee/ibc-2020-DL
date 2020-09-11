#include <iostream>
#include <chrono>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
    int N = 1000;
    int dist[N][N];

    fstream file("input");

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            file >> dist[i][j];
        }
    }
    
    auto t1 = chrono::high_resolution_clock::now();

    for (int k = 0; k < N; k++){
        for (int i = 0; i < N; i++){
            for (int j = 0; j < N; j++){
                if (dist[i][j] > dist[i][k] + dist[k][j])
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }      
    }
    
    auto t2 = chrono::high_resolution_clock::now();

    auto duration = chrono::duration_cast<std::chrono::nanoseconds>( t2 - t1 ).count();
    cout << "Time taken to print the message: " << duration/1000000 << " milliseconds\n";

    return 0;
}