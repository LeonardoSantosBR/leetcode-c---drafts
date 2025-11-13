#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    vector<int> original;
    vector<int> :: iterator it;

    for(it= nums.begin(); it != nums.end() ; it++){
        int el= *it;
        if(find(original.begin(), original.end(), el) != original.end()){
            nums.erase(it);
            it--;
        }else{
            original.push_back(*it);
        }
    }

    return nums.size();
}
//* TWO-POINTER para filtrar array
//* Problemas envolvendo arrays ordenados ou que podem ser ordenados.
//* Buscar pares ou subarrays que satisfaçam uma condição (ex: soma, diferença).
//* Resolver problemas de janelas deslizantes.