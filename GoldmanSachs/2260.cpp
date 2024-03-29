class Solution
{
public:
    int minimumCardPickup(vector<int> &cards)
    {
        // size = 10 pow 6 + 1
        int last[1000001] = {};
        int res = INT_MAX;
        for (int i = 0; i < cards.size(); ++i)
        {
            if (last[cards[i]])
                res = min(res, i - last[cards[i]] + 2);
            last[cards[i]] = i + 1;
        }
        return res == INT_MAX ? -1 : res;
    }
};