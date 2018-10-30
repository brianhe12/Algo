#include <iostream>
#include <sstream>
#include <string>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
age (int), first_name (string), last_name (string) and standard (int)

get_age, set_age
get_first_name, set_first_name
get_last_name, set_last_name
get_standard, set_standard

*/
class Student{
    private:
        int age;
        string first_name;
        string last_name;
        int standard;
    public:
        void set_age(int newage)
        {
            age = newage;
        }
        int get_age()
        {
            return age;
        }
        void set_first_name(string newfirstname)
        {
            first_name = newfirstname;
        }
        string get_first_name()
        {
            return first_name;
        }
        void set_last_name(string newlastname)
        {
            last_name = newlastname;
        }
        string get_last_name()
        {
            return last_name;
        }
        void set_standard(int newstandard)
        {
            standard = newstandard;
        }
        int get_standard()
        {
            return standard;
        }
        string to_string()
        {
            stringstream ss;
            char c = ',';
            ss << age << c << first_name << c << last_name << c << standard;
            return ss.str();
        }
        
};



int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
     
    
    return 0;
}