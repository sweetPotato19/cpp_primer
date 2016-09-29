//
// Created by Yuchen on 2016-09-29.
//

#ifndef SCREEN_SCREEN_H
#define SCREEN_SCREEN_H

#include <string>

class Screen{
public:
    void some_member() const;
    typedef std::string::size_type pos;
    Screen() = default;
    Screen(pos ht, pos wd):height(ht),width(wd),contents(){}
    Screen(pos ht, pos wd, char c): height(ht),width(wd),contents(ht*wd,c){}
    char get() const { return contents[cursor];}
    inline char get(pos r, pos c) const;
    Screen &move(pos r, pos c);
private:
    mutable size_t access_ctr;
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
};

void Screen::some_member() const {
    ++access_ctr;
}

inline Screen &Screen::move(pos r, pos c) {
    pos row = r*width;
    cursor = row +c;
    return *this;
}
char Screen::get(pos r, pos c) const {
    pos row = r*width;
    return contents[row+c];
}

#endif //SCREEN_SCREEN_H
