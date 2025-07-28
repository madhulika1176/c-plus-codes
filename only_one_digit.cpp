#include <iostream>
#include <set>
#include <string>
using namespace std;

// Function to get digits of a number as a set
set<char> getDigits(int num) {
    set<char> digits;
    string numStr = to_string(num);
    for (char c : numStr) {
        digits.insert(c);
    }
    return digits;
}

int main() {
    int t;
    cin >> t;  // Read number of test cases
    while (t--) {
        int x;
        cin >> x;  // Read the number x
        
        set<char> xDigits = getDigits(x);  // Get digits of x
        int y = 0;
        
        // Try numbers starting from y = 0
        while (true) {
            set<char> yDigits = getDigits(y);  // Get digits of y
            for (char digit : yDigits) {
                if (xDigits.count(digit)) {
                    cout << y << endl;  // Found the smallest y
                    break;
                }
            }
            if (xDigits.count(*yDigits.begin())) {  // Check if any common digit
                break;
            }
            y++;  // Increment y and check again
        }
    }
    return 0;
}
