#include "SUI.h"
#include <iostream>
#include <sstream>
#include <conio.h>
#include <vector>
using namespace std;

SUI::SUI(int opts){
    options = opts;
    res_height = (options*2)-1;
}

void SUI::feed(string input){
    string bufferArr[options];
    stringstream Stream(input);
    int l = 0;
    string dum;
    while(getline(Stream, dum, ' ')){
        bufferArr[l] = dum;
        l++;
    }
    l = 0;
    int opt_points[options];
    for(int i = 0; i < options; i++){opt_points[i] = 0;}
    string largest_option;
    for(int i = 0; i < options; i++){
        for(int j = 0; j < options; j++){
            unsigned int iSize = bufferArr[i].size();
            unsigned int jSize = bufferArr[j].size();
            if(iSize > jSize){opt_points[i]++;}
            else{continue;}
        }
    }
    for(int x: opt_points){
        if(x == (options-1)){
            largest_option = bufferArr[l];
            res_width = bufferArr[l].size() + 2;
        }
        l++;
    }
    for(int i = 0; i < res_height*res_width; i++){menu.push_back(" ");}
    int addIndex = 2, counter2 = 0;
    for(int i = 0; i < options; i++){
        for(int j = 0; j < bufferArr[counter2].size(); j++){
            menu[addIndex+j] = bufferArr[counter2].at(j);
        }
        addIndex += (res_width*2);
        counter2++;
    }
}

void SUI::Render(){
    int counter = 0;
    for(auto x: menu){
        if((counter % res_width) == 0)cout << endl;
        cout << x;
        counter++;
    }
    cout << endl;
}

void SUI::CLI(){
    menu[0] = ">";
    Render();
    int point = 1;
    int varIndex = 0;
    char in = '0';
    while(in != ' '){
        in = getch();
        system("CLS");
        if(menu[0] != ">" && in == 'a'){
            menu[varIndex] = " ";
            varIndex-=(res_width*2);
            point--;
        }
        else if(menu[(menu.size()-res_width)] != ">" && in == 'd'){
            menu[varIndex] = " ";
            varIndex+=(res_width*2);
            point++;
        }
        menu[varIndex] = ">";
        Render();
    }
    output = point;
}

