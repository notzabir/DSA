/******************************************************************************

Finding the first non-repeating element from an array using an unordered_map

*******************************************************************************/
#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<int, int> umap;
    
    for(int i = 0; i < n; i++){
        umap[arr[i]]++
    }
    
    // int key = arr[i];
    // umap[key]++;
    
    for(int i = 0;i < n; i++){
        int key = arr[i];
        auto temp = umap.find(key);
        if(temp->second == 1){
            return key;
        }
    }
    
    return 0;
}