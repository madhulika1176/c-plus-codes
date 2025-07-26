#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    while (testCases--) {
        string s, t;
        cin >> s >> t;

        int freqS[26] = {0};
        int freqT[26] = {0};

        // Count frequency of each character in S and T
        for (char ch : s)
            freqS[ch - 'a']++;
        for (char ch : t)
            freqT[ch - 'a']++;

        int operations = 0;

        // Calculate total difference
        for (int i = 0; i < 26; i++) {
            operations += abs(freqS[i] - freqT[i]);
        }

        cout << operations << endl;
    }

    return 0;
}
