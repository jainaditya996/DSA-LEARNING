
class Solution {
public:
    int calPoints(vector<string>& opr) {
        vector<int> record;

        for (int i = 0; i < opr.size(); i++) {
            if (opr[i] == "+") {
                int n = record.size();
                record.push_back(record[n - 1] + record[n - 2]);
            }
            else if (opr[i] == "C") {
                record.pop_back();
            }
            else if (opr[i] == "D") {
                record.push_back(2 * record.back());
            }
            else {
                record.push_back(stoi(opr[i]));
            }
        }

        int sum = 0;
        for (int i = 0; i < record.size(); i++) {
            sum += record[i];
        }

        return sum;
    }
};

