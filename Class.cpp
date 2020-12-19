#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student
{
    private:
    int val,standard;
    string first_name, last_name;

    public:
        void set_age(int a) {
            val = a;
        }
        void set_standard(int x) {
            standard = x;
        }
        void set_first_name(string fn) {
            first_name = fn;
        }
        void set_last_name(string ln) {
            last_name = ln;
        }


        int get_standard() {
            return standard;
        }

        string get_last_name() {
            return last_name;
        }

        string get_first_name() {
            return first_name;
        }

        int get_age() {
            return val;
        }

        string to_string()
        {
            string g;
            stringstream ss;
            ss << val << ","<< first_name << ","<< last_name << ","<< standard;
             g=ss.str();
            return g;

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

