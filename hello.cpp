#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

double calculateMean(const vector<int>& nums) {
    double sum = 0;
    for (int n : nums) sum += n;
    return sum / nums.size();
}

double calculateMedian(vector<int> nums) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    if (n % 2 == 0)
        return (nums[n/2 - 1] + nums[n/2]) / 2.0;
    else
        return nums[n/2];
}

int calculateMode(const vector<int>& nums) {
    unordered_map<int, int> freq;
    int maxFreq = 0, mode = nums[0];
    for (int n : nums) {
        freq[n]++;
        if (freq[n] > maxFreq) {
            maxFreq = freq[n];
            mode = n;
        }
    }
    return mode;
}

int main() {
    vector<int> numbers;
    int num, n;

    cout << "How many numbers? ";
    cin >> n;

    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; ++i) {
        cin >> num;
        numbers.push_back(num);
    }

    cout << "Mean: " << calculateMean(numbers) << endl;
    cout << "Median: " << calculateMedian(numbers) << endl;
    cout << "Mode: " << calculateMode(numbers) << endl;

    return 0;
}
