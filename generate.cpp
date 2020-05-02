#include <bits/stdc++.h>

using namespace std;

int main () {
    auto seed = chrono::high_resolution_clock::now().time_since_epoch().count();
    mt19937 gen(seed);

    cerr << "Enter params (n colorCount): ";
    int n, colorCount;
    cin >> n >> colorCount;

    cerr << "Enter name: ";
    string name;
    cin >> name;
    cerr << "Enter number of tests: ";
    int tc;
    cin >> tc;

    uniform_int_distribution<> dis(1, colorCount);
    
    for (int p = 1; p <= tc; p++) {
        ofstream cout("test/" + name + to_string(p));
        cout << n << endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << dis(gen) << " ";
            }
            cout << endl;
        }
    }
    return 0;
}