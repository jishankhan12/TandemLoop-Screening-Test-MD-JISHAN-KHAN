#include <iostream>
#include <vector>
using namespace std;

// Function to generate a series of first 'a' odd numbers
vector<int> generateSeries(int a) {
    vector<int> series;
    for (int i = 0; i < a; i++) {
        series.push_back(2 * i + 1); 
    }
    return series;
}

int main() {
    int n; // Variable to store user input
    cout << "Enter how many odd numbers you want to generate: ";
    cin >> n;

    // Generate the series using the user's input
    vector<int> result = generateSeries(n);

    // Display the generated series
    cout << "Generated series: ";
    for (int num : result) {
        cout << num << " ";
    }

    cout << endl;
    return 0;
}
