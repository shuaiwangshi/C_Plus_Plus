#include <iostream>
#include <string>

using namespace std;

class Memory
{
public:
    Memory() {
        cout << "Memory()" << endl;
    }
    ~Memory() {
        cout << "~Memory()" << endl;
    }
};

class Disk
{
public:
    Disk() {
        cout << "Disk()" << endl;
    }
    ~Disk() {
        cout << "~Disk()" << endl;
    }   
};

class CPU
{
public:
    CPU() {
        cout << "CPU()" << endl;
    }
    ~CPU() {
        cout << "~CPU()" << endl;
    }    
};

class MainBoard
{
public:
    MainBoard() {
        cout << "MainBoard()" << endl;
    }
    ~MainBoard() {
        cout << "~MainBoard()" << endl;
    }    
};

class Computer
{
    Memory mMem;
    Disk mDisk;
    CPU mCPU;
    MainBoard mMainBoard;
public:
    Computer() {
        cout << "Computer()" << endl;
    }
    void power() {
        cout << "power()" << endl;
    }
    void reset() {
        cout << "reset()" << endl;
    }
    ~Computer() {
        cout << "~Computer()" << endl;
    }
};

int main()
{   
    Computer c;
    
    return 0;
}
