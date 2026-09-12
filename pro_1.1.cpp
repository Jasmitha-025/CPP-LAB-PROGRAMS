#include <iostream>
using namespace std; // std:: now optional for cout, cin, endl

// Swap using References (clean, no & at call site)
void swapRef(int &a, int &b) {
    int t = a; 
    a = b; 
    b = t;
}

// Swap using Pointers (the C-way), shown for contrast
void swapPtr(int *a, int *b) {
    int t = *a; 
    *a = *b; 
    *b = t;
}

int main() {
    int x = 10, y = 20;
    
    swapRef(x, y); // no & needed
    cout << "After swapRef = x=" << x << "y=" << y << endl;
    
    swapPtr(&x, &y);
    cout << "After swapptr = x=" << x << "y=" << y << endl;
    
    int &alias = x; // alias is another name for x
    alias = 99;     // change x too
    cout<<"X via alias = "<<x<<endl;
    
    return 0;
}