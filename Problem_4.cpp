#include <iostream>
#include <map>
#include <vector>
using namespace std;

// Function to count how many numbers in the vector are divisible by 1 to 9
map<int, int> count_numbers_listed_dictionary(vector<int> nums) {
    map<int, int> count;

    // Checking for each divisor from 1 to 9
    for (int i = 1; i <= 9; i++) {
        int multiples = 0;

        // Counting how many numbers in the array are divisible by i
        for (int num : nums) {
            if (num % i == 0) {
                multiples++;
            }
        }

        count[i] = multiples;
    }

    return count;
}

int main() {
    // Input vector
    vector<int> input = {1, 2, 8, 9, 12, 46, 76, 82, 15, 20, 30};

    // Get the map of counts
    map<int, int> result =  count_numbers_listed_dictionary(input);

    // Output result in the format: 1:11 2:8 3:4 ...
    
    for (auto pair : result) {
        cout << pair.first << ":" << pair.second << " ";
    }

    cout << endl;
    return 0;
}
