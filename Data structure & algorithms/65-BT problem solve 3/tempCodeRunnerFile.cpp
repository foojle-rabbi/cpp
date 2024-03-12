#include <iostream>

void printSubsets(int set[], int n) {
    for (int i = 0; i < (1 << n); ++i) {
        std::cout << "{ ";
        for (int j = 0; j < n; ++j) {
            if (i & (1 << j)) {
                std::cout << set[j] << " ";
            }
        }
        std::cout << "}\n";
    }
}

int main() {
    int set[] = {1, 2, 3};
    int n = sizeof(set) / sizeof(set[0]);

    printSubsets(set, n);

    return 0;
}