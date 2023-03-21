/*
 * The first line of the input gives the number of test cases, T.
 * T test cases follow.

    The first line of each test case contains four integers N, D, C, and M:
    The next line contains a string S of length N representing the arrangement of animals.
 *
 *
 *
 * */


// scanf  will treat the string as (white space and new line seprated) words
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int t = 1; t <= T; t++) {
        int N, D, C, M;
        cin >> N >> D >> C >> M;
        string S;
        cin >> S;
        bool all_dogs_fed = true;
        int remaining_dog_food = D;
        int remaining_cat_food = C;
        for (int i = 0; i < N; i++) {
            if (S[i] == 'C') {
                if (remaining_cat_food > 0) {
                    remaining_cat_food--;
                } else {
                    all_dogs_fed = false;
                    break;
                }
            } else { // S[i] == 'D'
                if (remaining_dog_food > 0) {
                    remaining_dog_food--;
                    remaining_cat_food += M;
                } else {
                    all_dogs_fed = false;
                    break;
                }
            }
        }
        cout << "Case #" << t << ": ";
        if (all_dogs_fed) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
