#include <iostream>
using namespace std;


int main() {
    int N, M;
    int total;
    int max_num = 0;

    cin >> N >> M;

    int cards[100];

    for (int i = 0; i < N; i++) {
        cin >> cards[i];
    }

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            for (int k = j + 1; k < N; k++) {
                total = cards[i] + cards[j] + cards[k];

                if (total > M) 
                    continue;
                if (max_num < total)
                    max_num = total;
            }
        }
    }

    cout << max_num;
    return 0;
}