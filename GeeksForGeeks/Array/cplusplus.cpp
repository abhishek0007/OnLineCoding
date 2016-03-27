#include<bits/stdc++.h>

using namespace std;

class add {
public:
    virtual void add() = 0;

    virtual void getdata(int, int) = 0;

    virtual void showdata() = 0;
};

class Addition : public add {
    int add();


};

int main() {


    return 0;
}
