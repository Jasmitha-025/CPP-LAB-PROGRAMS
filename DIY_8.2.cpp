
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Logger {
public:
    virtual void write(string msg) = 0;
    virtual ~Logger() {}
};

class ConsoleLogger : public Logger {
public:
    void write(string msg) override {
        cout << "Console: " << msg << endl;
    }
};

class FileLogger : public Logger {
public:
    void write(string msg) override {
        ofstream file("log.txt", ios::app);

        if (file.is_open()) {
            file << msg << endl;
            file.close();
        }
    }
};

int main() {
    Logger *logger;

    int choice;

    cout << "1. Console Logger" << endl;
    cout << "2. File Logger" << endl;
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        logger = new ConsoleLogger();
    }
    else if (choice == 2) {
        logger = new FileLogger();
    }
    else {
        cout << "Invalid choice" << endl;
        return 0;
    }
    logger->write("Program executed successfully");
    delete logger;
    return 0;
}
