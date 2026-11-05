#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> scores;
        int total = 0;

        for (const string& op : operations) {
            if (op == "C") {
                total -= scores.back();
                scores.pop_back();
            }
            else if (op == "D") {
                int value = 2 * scores.back();
                scores.push_back(value);
                total += value;
            }
            else if (op == "+") {
                int n = scores.size();
                int value = scores[n - 1] + scores[n - 2];
                scores.push_back(value);
                total += value;
            }
            else {
                int value = stoi(op);
                scores.push_back(value);
                total += value;
            }
        }

        return total;
    }
};