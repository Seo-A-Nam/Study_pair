#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();
        int max_pro = 0, min_price = 10000;
    
        for (int i = 0; i < size; i++)
        {
            min_price = min(min_price, prices[i]);
            max_pro = max(max_pro, prices[i] - min_price);
        }
        return (max_pro);
    }
};