#include <iostream>
#include <vector>
using namespace std;


vector<int> conditionalSeries(int a) {
    int terms = a / 2 + 1;  // Number of terms in the series
    vector<int> series;
    for (int i = 0; i < terms; i++) {
        series.push_back(2 * i + 1);  
    }
    return series;
}

int main() {
    int a;
    cout << "Enter value of a: ";
    cin >> a;

    // Generate the series based on input
    vector<int> result = conditionalSeries(a);

    // Output the series
    cout << "Output: ";
    for (size_t i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i != result.size() - 1) cout << ", ";
    }
    cout << endl;

    return 0;
}
