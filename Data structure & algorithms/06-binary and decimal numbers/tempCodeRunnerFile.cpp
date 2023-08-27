#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int ans = 0, i = 0;
    while (n != 0) {
        int bit = n & 1;
        ans = (bit << i) | ans; // Shifting the bit to the correct position and using bitwise OR
        n = n >> 1;
        i++;
    }

    cout << "Binary form is: " << ans << endl;
    return 0;
}