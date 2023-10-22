#include<iostream>
#include<map>
using namespace std;

int main() {

    int n;
    cout << "Enter n: ";
    cin >> n;

    int* a = new int[n];

    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    int profit = 0, mini = a[0];

    for(int i=1; i<n; i++) {
        int curr_prof = a[i] - mini;
        profit = max(profit, curr_prof);
        mini = min(a[i], mini);
    }

    cout << "Maximum profit: " << profit << endl;
    delete [] a;
    return 0;
}
