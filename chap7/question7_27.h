//
// Created by Yuchen on 2016-09-29.
//

#ifndef SCREEN_SCREEN_H
#define SCREEN_SCREEN_H

#include <string>
#include <iostream>

class Screen{
public:
    using pos = std::string::size_type;

    Screen() = default;
    Screen(pos ht, pos wd):height(ht),width(wd),contents(){}
    Screen(pos ht, pos wd, char c): height(ht),width(wd),contents(ht*wd,c){}

    char get() const { return contents[cursor];}
    char get(pos r, pos c) const{ return  contents[cursor];}

    inline Screen &move(pos r, pos c);
    inline Screen &set(char c);
    inline Screen &set(pos r, pos c, char ch);


    const Screen &display (std::ostream &os) const {do_display(os); return *this;}
    Screen& display(std::ostream &os) { do_display(os); return *this; }
private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;


    void do_display(std::ostream &os) const { os << contents; }
};

inline Screen &Screen::set(char c){
    contents[cursor] = c;
    return *this;
}

inline Screen &Screen::set(pos r, pos col, char ch) {
    contents[r*width+col] =ch;
    return *this;
}


inline Screen &Screen::move(pos r, pos c) {
    pos row = r*width;
    cursor = row +c;
    return *this;
}

#endif //SCREEN_SCREEN_H
