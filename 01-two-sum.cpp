#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    int tg = 9;
    vector<int> n = {2, 9, 11, 7};
    unordered_map<int, int> seen;

    for (size_t i = 0; i < n.size(); i++)
    {
        int complement = tg - n[i];
        if (seen.count(complement))
        {
            return {seen[complement, i]};
        };
        seen[n[i]] = i;
    };
    return {};
}
// x+y = tg
// y = tg - x

// 2+y = 9          x+7 = 9
// y = 9 - 2        x= 9 - 7
// y=7;             x=2;