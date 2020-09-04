#include "Pieza.hpp"
#ifndef PEON_H
#define PEON_H
class Peon : public Pieza
{
    public:
    virtual bool validarmovimiento(string pieza, int x, int y, int x2, int y2, string **tablero)
    {
        if (tablero[x][y] == pieza)
        {
            if (tablero[x][y - 1] == "P" || tablero[x][y - 1] == "R" || tablero[x][y - 1] == "B" || tablero[x][y - 1] == "N" || tablero[x][y - 1] == "Q" || tablero[x][y - 1] == "K" || tablero[x][y - 1] == "p" || tablero[x][y - 1] == "r" || tablero[x][y - 1] == "b" || tablero[x][y - 1] == "n" || tablero[x][y - 1] == "q" || tablero[x][y - 1] == "k")
            {
                return false;
            }
            else if (tablero[x][y - 2] == "P" || tablero[x][y - 2] == "R" || tablero[x][y - 2] == "B" || tablero[x][y - 2] == "N" || tablero[x][y - 2] == "Q" || tablero[x][y - 2] == "K" || tablero[x][y - 2] == "p" || tablero[x][y - 2] == "r" || tablero[x][y - 2] == "b" || tablero[x][y - 2] == "n" || tablero[x][y - 2] == "q" || tablero[x][y - 2] == "k")
            {
                if (x != x2)
                {
                    return false;
                }
                else
                {
                    return true;
                }
            }
            else if (tablero[x][y - 2] == " " || tablero[x][y - 2] == " " || tablero[x][y - 2] == " " || tablero[x][y - 2] == " " || tablero[x][y - 2] == " " || tablero[x][y - 2] == " " || tablero[x][y - 2] == " " || tablero[x][y - 2] == " " || tablero[x][y - 2] == " " || tablero[x][y - 2] == " " || tablero[x][y - 2] == " " || tablero[x][y - 2] == " ")
            {
                if (x != x2)
                {
                    return false;
                }
                else
                {
                    return true;
                }
            }
            else if (x != x2)
            {
                if (tablero[x + 1][y - 1] == "p" || tablero[x + 1][y - 1] == "r" || tablero[x + 1][y - 1] == "b" || tablero[x + 1][y - 1] == "n" || tablero[x + 1][y - 1] == "q" || tablero[x + 1][y - 1] == "k")
                {
                    if (tablero[x + 2][y - 2] == " " || tablero[x + 2][y - 2] == " " || tablero[x + 2][y - 2] == " " || tablero[x + 2][y - 2] == " " || tablero[x + 2][y - 2] == " " || tablero[x + 2][y - 2] == " ")
                    {
                        if ((x2 == x + 2) && (y2 == y - 2))
                        {
                            return true;
                        }
                    }
                }
                else if (tablero[x -1][y + 1] == "p" || tablero[x - 1][y + 1] == "r" || tablero[x - 1][y + 1] == "b" || tablero[x - 1][y +1] == "n" || tablero[x - 1][y + 1] == "q" || tablero[x - 1][y + 1] == "k")
                {
                    if (tablero[x - 2][y + 2] == " " || tablero[x - 2][y + 2] == " " || tablero[x - 2][y + 2] == " " || tablero[x - 2][y + 2] == " " || tablero[x - 2][y + 2] == " " || tablero[x - 2][y + 2] == " ")
                    {
                        if ((x2 == x - 2) && (y2 == y + 2))
                        {
                            return true;
                        }
                    }
                }
                else if (((x2 == x - 2) && (y2 == y + 2)) && ((x2 == x + 2) && (y2 == y - 2)))
                {
                    return false;
                }
            }
        }
        else
        {
            return false;
        }
    }
};
#endif