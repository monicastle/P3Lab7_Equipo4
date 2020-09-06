#include "Pieza.hpp"
#ifndef CABALLO_H
#define CABALLO_H
class Caballo : public Pieza
{
public:
    bool validarmovimiento(string pieza, int x, int y, int x2, int y2, string **tablero)
    {
        if (pieza == "N")
        {
            if (x != x2 && y != y2)
            {
                /* int contdiagonalder = 1;
                for (int i = y; i < 8; i++)
                {
                    if ((x - contdiagonalder == x2) && (y + contdiagonalder == y2))
                    {
                        return false;
                    }else{
                        return true;
                    }
                    contdiagonalder++;
                }
                int contdiagonaliz = 1;
                for (int i = y; i < 8; i++)
                {
                    if ((x - contdiagonaliz == x2) && (y - contdiagonaliz == y2))
                    {
                        return false;
                    }
                    contdiagonaliz++;
                }
                int contdiagonalderaba = 1;
                for (int i = y; i < 8; i++)
                {
                    if ((x + contdiagonalderaba == x2) && (y + contdiagonalderaba == y2))
                    {
                        return false;
                    }
                    contdiagonalderaba++;
                }
                int contdiagonalizaba = 1;
                for (int i = y; i < 8; i++)
                {
                    if ((x + contdiagonalizaba == x2) && (y - contdiagonalizaba == y2))
                    {
                        return false;
                    }
                    contdiagonalizaba++;
                }*/
                if (tablero[x - 2][y + 1] == "P" || tablero[x - 2][y + 1] == "R" || tablero[x - 2][y + 1] == "B" || tablero[x - 2][y + 1] == "N" || tablero[x - 2][y + 1] == "Q" || tablero[x - 2][y + 1] == "K")
                {
                    if (tablero[x - 1][y + 2] == "P" || tablero[x - 1][y + 2] == "R" || tablero[x - 1][y + 2] == "B" || tablero[x - 1][y + 2] == "N" || tablero[x - 1][y + 2] == "Q" || tablero[x - 1][y + 2] == "K")
                    {
                        if (tablero[x + 1][y + 2] == "P" || tablero[x + 1][y + 2] == "R" || tablero[x + 1][y + 2] == "B" || tablero[x + 1][y + 2] == "N" || tablero[x + 1][y + 2] == "Q" || tablero[x + 1][y + 2] == "K")
                        {
                            if (tablero[x + 2][y + 1] == "P" || tablero[x + 2][y + 1] == "R" || tablero[x + 2][y + 1] == "B" || tablero[x + 2][y + 1] == "N" || tablero[x + 2][y + 1] == "Q" || tablero[x + 2][y + 1] == "K")
                            {
                                if (tablero[x + 2][y - 1] == "P" || tablero[x + 2][y - 1] == "R" || tablero[x + 2][y - 1] == "B" || tablero[x + 2][y - 1] == "N" || tablero[x + 2][y - 1] == "Q" || tablero[x + 2][y - 1] == "K")
                                {
                                    if (tablero[x + 1][y - 2] == "P" || tablero[x + 1][y - 2] == "R" || tablero[x + 1][y - 2] == "B" || tablero[x + 1][y - 2] == "N" || tablero[x + 1][y - 2] == "Q" || tablero[x + 1][y - 2] == "K")
                                    {
                                        if (tablero[x - 1][y - 2] == "P" || tablero[x - 1][y - 2] == "R" || tablero[x - 1][y - 2] == "B" || tablero[x - 1][y - 2] == "N" || tablero[x - 1][y - 2] == "Q" || tablero[x - 1][y - 2] == "K")
                                        {
                                            if (tablero[x - 2][y - 1] == "P" || tablero[x - 2][y - 1] == "R" || tablero[x - 2][y - 1] == "B" || tablero[x - 2][y - 1] == "N" || tablero[x - 2][y - 1] == "Q" || tablero[x - 2][y + 1] == "K")
                                            {
                                                return false;
                                            }
                                            else
                                            {

                                                return true;
                                            }
                                        }
                                        else
                                        {

                                            return true;
                                        }
                                    }
                                    else
                                    {

                                        return true;
                                    }
                                }
                                else
                                {

                                    return true;
                                }
                            }
                            else
                            {

                                return true;
                            }
                        }
                        else
                        {
                            return true;
                        }
                    }
                    else
                    {
                       return true;
                    }
                   
                }
                else
                {
                    return true;
                }
                return false;
            }
        }
        else if (pieza == "n")
        {
            if (tablero[x + 2][y - 1] == "p" || tablero[x + 2][y - 1] == "r" || tablero[x + 2][y - 1] == "b" || tablero[x + 2][y - 1] == "n" || tablero[x + 2][y - 1] == "q" || tablero[x + 2][y - 1] == "k")
            {
                if (tablero[x + 1][y - 2] == "p" || tablero[x + 1][y - 2] == "r" || tablero[x + 1][y - 2] == "b" || tablero[x + 1][y - 2] == "n" || tablero[x + 1][y - 2] == "q" || tablero[x + 1][y - 2] == "k")
                {
                    if (tablero[x - 1][y - 2] == "p" || tablero[x - 1][y - 2] == "r" || tablero[x - 1][y - 2] == "b" || tablero[x - 1][y - 2] == "n" || tablero[x - 1][y - 2] == "q" || tablero[x - 1][y - 2] == "k")
                    {
                        if (tablero[x - 2][y - 1] == "p" || tablero[x - 2][y - 1] == "r" || tablero[x - 2][y - 1] == "b" || tablero[x - 2][y - 1] == "n" || tablero[x - 2][y - 1] == "q" || tablero[x - 2][y - 1] == "k")
                        {
                            if (tablero[x - 2][y + 1] == "p" || tablero[x - 2][y + 1] == "r" || tablero[x - 2][y + 1] == "b" || tablero[x - 2][y + 1] == "n" || tablero[x - 2][y + 1] == "q" || tablero[x - 2][y + 1] == "k")
                            {
                                if (tablero[x - 1][y + 2] == "p" || tablero[x - 1][y + 2] == "r" || tablero[x - 1][y + 2] == "b" || tablero[x - 1][y + 2] == "n" || tablero[x - 1][y + 2] == "q" || tablero[x - 1][y + 2] == "k")
                                {
                                    if (tablero[x + 1][y + 2] == "p" || tablero[x + 1][y + 2] == "r" || tablero[x + 1][y + 2] == "b" || tablero[x + 1][y + 2] == "n" || tablero[x + 1][y + 2] == "q" || tablero[x + 1][y + 2] == "k")
                                    {
                                        if (tablero[x + 2][y + 1] == "p" || tablero[x + 2][y + 1] == "r" || tablero[x + 2][y + 1] == "b" || tablero[x + 2][y + 1] == "n" || tablero[x + 2][y + 1] == "q" || tablero[x + 2][y + 1] == "k")
                                        {
                                            return false;
                                        }
                                        else
                                        {
                                           return true;
                                        }
                                    }
                                    else
                                    {
                                      return true;
                                       
                                    }
                                }
                                else
                                {
                                   return true;
                                }
                            }
                            else
                            {
                               return true;
                            }
                        }
                        else
                        {
                           return true;
                        }
                    }
                    else
                    {
                        return true;
                    }
                }
                else
                {
                   return true;
                }
            }
            else
            {
                return true;
            }
            return false;
        }
    }
};
#endif