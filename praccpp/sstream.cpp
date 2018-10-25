#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    vector<int> result;
    

    //Reads a stream of csv, stores values into 'result' and skips commas ex: 23,14,23
	stringstream ss(str);
    int a;
    char comma;

    while(ss >> a)
    {
          result.push_back(a);
          ss >> comma;
    }
  
    

    
    return result;
    
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}