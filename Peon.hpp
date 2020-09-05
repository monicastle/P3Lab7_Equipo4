#include "Pieza.hpp"
#ifndef PEON_H
#define PEON_H
class Peon : public Pieza
{
public:
    bool validarmovimiento(string pieza, int x, int y, int x2, int y2, string **tablero) const
    {
        bool valido = true;
        if (pieza == "P")
        {
            if (tablero[x - 1][y] == "P" || tablero[x - 1][y] == "R" || tablero[x - 1][y] == "B" || tablero[x - 1][y] == "N" || tablero[x - 1][y] == "Q" || tablero[x - 1][y] == "K" || tablero[x - 1][y] == "p" || tablero[x - 1][y] == "r" || tablero[x - 1][y] == "b" || tablero[x - 1][y] == "n" || tablero[x - 1][y] == "q" || tablero[x - 1][y] == "k")
            {
                return false;
            }

            else if (tablero[x - 2][y] == "P" || tablero[x - 2][y] == "R" || tablero[x - 2][y] == "B" || tablero[x - 2][y] == "N" || tablero[x - 2][y] == "Q" || tablero[x - 2][y] == "K" || tablero[x - 2][y] == "p" || tablero[x - 2][y] == "r" || tablero[x - 2][y] == "b" || tablero[x - 2][y] == "n" || tablero[x - 2][y] == "q" || tablero[x - 2][y] == "k")
            {
                if (y != y2)
                {
                    return false;
                }
                else
                {
                    return true;
                }
            }
            else if (tablero[x - 2][y] == " " || tablero[x - 2][y] == " " || tablero[x - 2][y] == " " || tablero[x - 2][y] == " " || tablero[x - 2][y] == " " || tablero[x - 2][y] == " " || tablero[x - 2][y] == " " || tablero[x - 2][y] == " " || tablero[x - 2][y] == " " || tablero[x - 2][y] == " " || tablero[x - 2][y] == " " || tablero[x - 2][y] == " ")
            {
                if (y != y2)
                {
                    if (tablero[x - 1][y + 1] == "p" || tablero[x - 1][y + 1] == "r" || tablero[x - 1][y + 1] == "b" || tablero[x - 1][y + 1] == "n" || tablero[x - 1][y + 1] == "q" || tablero[x - 1][y + 1] == "k")
                    {
                        if (tablero[x - 2][y + 2] == " " || tablero[x - 2][y + 2] == " " || tablero[x - 2][y + 2] == " " || tablero[x - 2][y + 2] == " " || tablero[x - 2][y + 2] == " " || tablero[x - 2][y + 2] == " ")
                        {
                            if ((y2 == (y + 2)) && (x2 == (x - 2)))
                            {
                                return true;
                            }
                        }
                    }
                    else if (tablero[x + 1][y - 1] == "p" || tablero[x + 1][y - 1] == "r" || tablero[x + 1][y - 1] == "b" || tablero[x + 1][y - 1] == "n" || tablero[x + 1][y - 1] == "q" || tablero[x + 1][y - 1] == "k")
                    {
                        if (tablero[x + 2][y - 2] == " " || tablero[x + 2][y - 2] == " " || tablero[x + 2][y - 2] == " " || tablero[x + 2][y - 2] == " " || tablero[x + 2][y - 2] == " " || tablero[x + 2][y - 2] == " ")
                        {
                            if (((y2 == (y - 2)) && (x2 == (x + 2))))
                            {
                                return true;
                            }
                        }
                    }
                    else if (((y2 == y - 2) && (x2 == x + 2)) && ((y2 == y + 2) && (x2 == x - 2)))
                    {
                        return false;
                    }
                }
                else
                {
                    return true;
                }
                return valido;
            }
            else if (tablero[x - 1][y] == " " || tablero[x - 1][y] == " " || tablero[x - 1][y] == " " || tablero[x - 1][y] == " " || tablero[x - 1][y] == " " || tablero[x - 1][y] == " " || tablero[x - 1][y] == " " || tablero[x - 1][y] == " " || tablero[x - 1][y] == " " || tablero[x - 1][y] == " " || tablero[x - 1][y] == " " || tablero[x - 1][y] == " ")
            {
                return valido;
            }
            return valido;
        }
        else if (pieza == "p")
        {
            if (tablero[x + 1][y] == "P" || tablero[x + 1][y] == "R" || tablero[x + 1][y] == "B" || tablero[x + 1][y] == "N" || tablero[x + 1][y] == "Q" || tablero[x + 1][y] == "K" || tablero[x + 1][y] == "p" || tablero[x + 1][y] == "r" || tablero[x + 1][y] == "b" || tablero[x + 1][y] == "n" || tablero[x + 1][y] == "q" || tablero[x + 1][y] == "k")
            {
                return false;
            }

            else if (tablero[x + 2][y] == "P" || tablero[x + 2][y] == "R" || tablero[x + 2][y] == "B" || tablero[x + 2][y] == "N" || tablero[x + 2][y] == "Q" || tablero[x + 2][y] == "K" || tablero[x + 2][y] == "p" || tablero[x + 2][y] == "r" || tablero[x + 2][y] == "b" || tablero[x + 2][y] == "n" || tablero[x + 2][y] == "q" || tablero[x + 2][y] == "k")
            {
                if (y != y2)
                {
                    return false;
                }
                else
                {
                    return true;
                }
            }
            else if (tablero[x + 2][y] == " " || tablero[x + 2][y] == " " || tablero[x + 2][y] == " " || tablero[x + 2][y] == " " || tablero[x + 2][y] == " " || tablero[x + 2][y] == " " || tablero[x + 2][y] == " " || tablero[x + 2][y] == " " || tablero[x + 2][y] == " " || tablero[x + 2][y] == " " || tablero[x + 2][y] == " " || tablero[x + 2][y] == " ")
            {
                if (y != y2)
                {
                    if (tablero[x + 1][y - 1] == "p" || tablero[x + 1][y - 1] == "r" || tablero[x + 1][y - 1] == "b" || tablero[x + 1][y - 1] == "n" || tablero[x + 1][y - 1] == "q" || tablero[x + 1][y - 1] == "k")
                    {
                        if (tablero[x + 2][y - 2] == " " || tablero[x + 2][y - 2] == " " || tablero[x + 2][y - 2] == " " || tablero[x + 2][y - 2] == " " || tablero[x + 2][y - 2] == " " || tablero[x + 2][y - 2] == " ")
                        {
                            if ((y2 == (y - 2)) && (x2 == (x + 2)))
                            {
                                return true;
                            }
                        }
                    }
                    else if (tablero[x - 1][y + 1] == "p" || tablero[x - 1][y + 1] == "r" || tablero[x - 1][y + 1] == "b" || tablero[x - 1][y + 1] == "n" || tablero[x - 1][y + 1] == "q" || tablero[x - 1][y + 1] == "k")
                    {
                        if (tablero[x - 2][y + 2] == " " || tablero[x - 2][y + 2] == " " || tablero[x - 2][y + 2] == " " || tablero[x - 2][y + 2] == " " || tablero[x - 2][y + 2] == " " || tablero[x - 2][y + 2] == " ")
                        {
                            if (((y2 == (y + 2)) && (x2 == (x - 2))))
                            {
                                return true;
                            }
                        }
                    }
                    else if (((y2 == y + 2) && (x2 == x - 2)) && ((y2 == y - 2) && (x2 == x + 2)))
                    {
                        return false;
                    }
                }
                else
                {
                    return true;
                }
                return valido;
            }
            return valido;
        }
    }
};
#endif