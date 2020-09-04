#ifndef PIEZA_H
#define PIEZA_H
class Pieza{
    public:
    virtual bool validarmovimiento(int x,int y,int x2,int y2,char[][] tablero)=0;
};
#endif