/******************************************************************************

Basic unordered_set syntax and operations

*******************************************************************************/
#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    unordered_set<int>s;
    s.insert(5);
    s.insert(10);
    s.insert(15);
    s.insert(20);
    
    // accessing the elements/items in an unordered)set
    for(auto it = s.begin();it != s.end(); it++)
    {
        cout << (*it) << endl;
    }
    cout << "number of element : " << s.size() << endl;
    
    //s.clear();
    cout << "number of element : " << s.size() << endl;
    
    int key = 20;
    
    if(s.find(key) == s.end()){
        cout<<"key not found"<< endl;
    }
    else
    {
        cout<<"key found"<< endl;
    }
    
    int deleted_key = 15;
    s.erase(deleted_key);
    
    for(auto it = s.begin(); it!=s.end();it++)
    {
        cout<<(*it)<< endl;
    }
    cout << "number of element : " << s.size() << endl;
    
    if(s.count(5))
    cout << "key found" << endl;
    else
    cout << "key not found" << endl;
    

    return 0;
}