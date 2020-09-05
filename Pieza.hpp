#ifndef PIEZA_H
#define PIEZA_H
#include <string>
using namespace std;
class Pieza{
    public:
    virtual bool validarmovimiento(string pieza,int x,int y,int x2,int y2,string** tablero)const {return true;};
};
#endif