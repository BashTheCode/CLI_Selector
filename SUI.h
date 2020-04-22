#ifndef SUI_H
#define SUI_H
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

class SUI{
    public:
        SUI(int opts);
        void feed(string input);
        void Render();
        void CLI();
        int output;
    private:
        int options;
        int res_width;
        int res_height;
        vector<string> menu;
};

#endif
