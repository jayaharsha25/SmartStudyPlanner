#include <iostream>
#include <vector>
using namespace std;

int maxMarks(int n, int totalTime, vector<int>& time, vector<int>& marks) {
    vector<vector<int>> dp(n + 1, vector<int>(totalTime + 1, 0));

    for (int i = 1; i <= n; i++) {
        for (int t = 0; t <= totalTime; t++) {
            if (time[i - 1] <= t) {
                dp[i][t] = max(dp[i - 1][t],
                               marks[i - 1] + dp[i - 1][t - time[i - 1]]);
            } else {
                dp[i][t] = dp[i - 1][t];
            }
        }
    }

    return dp[n][totalTime];
}

int main() {
    int n, totalTime;
    cout << "Enter number of topics: ";
    cin >> n;

    vector<int> time(n), marks(n);

    cout << "Enter time required for each topic:\n";
    for (int i = 0; i < n; i++) cin >> time[i];

    cout << "Enter marks for each topic:\n";
    for (int i = 0; i < n; i++) cin >> marks[i];

    cout << "Enter total available study time: ";
    cin >> totalTime;

    int result = maxMarks(n, totalTime, time, marks);

    cout << "Maximum marks you can achieve: " << result << endl;

    return 0;
}