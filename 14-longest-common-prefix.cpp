#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string res = "";
    vector<string> strs = {"cluster", "clue", "clutch", "club", "clumsy"};
    sort(strs.begin(), strs.end());

    string first = strs[0];
    string last = strs[strs.size() - 1];

    for (size_t i = 0; i < first.length(); i++)
    {
        if (first[i] != last[i])
        {
            break;
        }
        else
        {
            res += first[i];
        }
    };

    return 0;
}

//   cluster                club
//   clue                   clue
//   clutch   ->sort->      clumsy
//   club                   cluster
//   clumsy                 clutch

//   cluster                circle
//   clue                   club
//   clutch    ->sort->     clue         ->o sort formará 2 grupos: os com prefixos juntos ou possiveis outros seja acima/baixo alfabeticamente assim é possivel
//   circle                 clumsy         comparar o 1 e o ultimo para saber o mais longo prefixo.
//   club                   cluster
//   clumsy                 clutch