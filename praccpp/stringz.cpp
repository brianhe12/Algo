#include <iostream>
#include <string>
using namespace std;

void func(string a,string b)
{   //Prints respective lengths
    cout << a.length() << " " << b.length() << endl;
    
    //Concatentation
    cout << a+b << endl;

    //Switch first letters
    string temp = "";
    temp[0] = a[0];
    a[0] = b[0];
    b[0] = temp[0];
    
    cout << a << " " << b << endl;
    

    
    
}
int main() {
	string a;
    string b;
    
    cin >> a >> b;
    func(a,b);
  
    return 0;
}