/******************************************************************************

Finding the first repeating element from an array using an unordered_map

*******************************************************************************/
#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<int, int> umap;
    for(int i = 0; i < n; i++){
        umap[arr[i]]++;
    }
    for(int i = 0; i < n; i++){
        int key = arr[i]
    }
    
    auto temp = umap.find(key);
    int val = temp->second;
    if(val > 1){
        return i+1;
    }
    return -1;
}