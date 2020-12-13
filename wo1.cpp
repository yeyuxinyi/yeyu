#include<iostream>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        long temp = 0, sum = 0;
        while (x != 0) {
            temp = x % 10;
            sum = sum * 10 + temp;
            x = x / 10;
        }
        if (sum >= INT_MAX || sum <= INT_MIN)
            sum = 0;
        return sum;
    }
};
int main() {
    int x;
    cin >> x;
    Solution a;
    cout << a.reverse(x);
    return 0;
}