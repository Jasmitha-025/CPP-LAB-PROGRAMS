#include <iostream>
using namespace std;

class widget {
    int id;
    static int count; 
public:
    widget() { 
        id = ++count; 
        cout << "Created w" << id << endl; 
    }
    ~widget() { 
        --count; 
        cout << "Destroyed w" << id << endl; 
    }
    static int alive() { 
        return count; 
    }
};
int widget::count = 0;
int main() {
    widget a, b; 
    cout << "Alive = " << widget::alive() << endl;
    { 
        widget c;
        cout << "Alive = " << widget::alive() << endl; 
    } 
    cout << "Alive = " << widget::alive() << endl; 
    return 0;
}