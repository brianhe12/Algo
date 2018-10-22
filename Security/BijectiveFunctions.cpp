#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int a;
    int b;
    vector<int> c;
    
    cin >> a;
    for (int i = 0; i < 3; i++)
    {
        cin >> b;
        c.push_back(b);
    }

    int count;
    for(int i = 0; i < 3; i++)
    {
        if (a == c[i])
        {
            count++;
        }
    }
    
    if (count == 0)
    {
        cout << "NO" << endl;
        return 0;
    }
    
    cout << "YES" << endl;
    
    return 0;
}
