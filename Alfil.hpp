#include "Pieza.hpp"
#ifndef ALFIL_H
#define ALFIL_H
class Alfil : public Pieza
{
public:
    bool validarmovimiento(string pieza, int x, int y, int x2, int y2, string **tablero)
    {
        if (pieza == "B")
        {
            if ((x != x2) && (y != y2))
            {
                //For moverse diagonal para arriba a la derecha
                int contdiagonalder = 1;
                int contdiagonaliz = 1;
                int contdiagonalderaba = 1;
                int contdiagonalizaba = 1;
                for (int i = y; i < 8; i++)
                    for (int i = y; i < 8; i++)
                    {
                        if (tablero[x - contdiagonalder][y + contdiagonalder] == "P" || tablero[x - contdiagonalder][y + contdiagonalder] == "B" || tablero[x - contdiagonalder][y + contdiagonalder] == "R" || tablero[x - contdiagonalder][y + contdiagonalder] == "Q" || tablero[x - contdiagonalder][y + contdiagonalder] == "K" || tablero[x - contdiagonalder][y + contdiagonalder] == "N")
                        {
                            if (tablero[x - contdiagonaliz][y - contdiagonaliz] == "P" || tablero[x - contdiagonaliz][y - contdiagonaliz] == "B" || tablero[x - contdiagonaliz][y - contdiagonaliz] == "R" || tablero[x - contdiagonaliz][y - contdiagonaliz] == "Q" || tablero[x - contdiagonaliz][y - contdiagonaliz] == "N" || tablero[x - contdiagonaliz][y - contdiagonaliz] == "K")
                            {
                                if (tablero[x + contdiagonalderaba][y + contdiagonalderaba] == "P" || tablero[x + contdiagonalderaba][y + contdiagonalderaba] == "R" || tablero[x + contdiagonalderaba][y + contdiagonalderaba] == "B" || tablero[x + contdiagonalderaba][y + contdiagonalderaba] == "N" || tablero[x + contdiagonalderaba][y + contdiagonalderaba] == "Q" || tablero[x + contdiagonalderaba][y + contdiagonalderaba] == "K")
                                {
                                    if (tablero[x + contdiagonalizaba][y - contdiagonalizaba] == "P" || tablero[x + contdiagonalizaba][y - contdiagonalizaba] == "R" || tablero[x + contdiagonalizaba][y - contdiagonalizaba] == "B" || tablero[x + contdiagonalizaba][y - contdiagonalizaba] == "N" || tablero[x + contdiagonalizaba][y - contdiagonalizaba] == "Q" || tablero[x + contdiagonalizaba][y - contdiagonalizaba] == "K")
                                    {
                                        return false;
                                    }
                                    else
                                    {
                                        if (tablero[x2-1][y2+1] == "p" ||tablero[x2-1][y2+1]== "r" || tablero[x2-1][y2+1] == "b" || tablero[x2-1][y2+1] == "n" || tablero[x2-1][y2+1] == "q" || tablero[x2-1][y2+1] == "k")
                                        {
                                            if (tablero[x2][y2] == " ")
                                            {
                                                return true;
                                            }
                                            else
                                            {
                                                return false;
                                            }
                                        }
                                        else if ((x + contdiagonalizaba == x2) && (y - contdiagonalizaba == y2))
                                        {
                                            return true;
                                        }
                                        return true;
                                    }
                                }
                                else
                                {
                                    if (tablero[x2-1][y2-1] == "p" || tablero[x2-1][y2-1] == "r" ||tablero[x2-1][y2-1]== "b" || tablero[x2-1][y2-1] == "n" || tablero[x2-1][y2-1] == "q" ||tablero[x2-1][y2-1] == "k")
                                    {
                                        if (tablero[x2][y2] == " ")
                                        {
                                            return true;
                                        }
                                        else
                                        {
                                            return false;
                                        }
                                    }
                                    else if ((x + contdiagonalderaba == x2) && (y + contdiagonalderaba == y2))
                                    {
                                        return true;
                                    }
                                    return true;
                                }
                            }
                            else
                            {
                                if (tablero[x2 -1][y2 +1] == "p" || tablero[x2 +1][y2 + 1] == "r" || tablero[x2 + 1][y2 + 1] == "b" || tablero[x2 + 1][y2+ 1] == "n" ||tablero[x2 + 1][y2 + 1]== "q" ||tablero[x2 + 1][y2 + 1] == "k")
                                {
                                    if (tablero[x2][y2] == " ")
                                    {
                                        return true;
                                    }
                                    else
                                    {
                                        return false;
                                    }
                                }
                                else if ((x - contdiagonaliz == x2) && (y - contdiagonaliz == y2))
                                {
                                    return true;
                                }
                                return true;
                            }
                        }
                        else
                        {
                            if (tablero[x2 + 1][y2 - 1] == "p" || tablero[x2 + 1][y2 - 1] == "r" || tablero[x2 + 1][y2 - 1] == "b" || tablero[x2 + 1][y2 - 1] == "n" || tablero[x2 + 1][y2 - 1] == "q" || tablero[x2 + 1][y2 - 1] == "k")
                            {
                                if (tablero[x2][y2] == " ")
                                {
                                    return true;
                                }
                                else
                                {
                                    return false;
                                }
                            }
                            else if ((x - contdiagonalder == x2) && (y + contdiagonalder == y2))
                            {
                                return true;
                            }
                            return true;
                        }
                        contdiagonalder++;
                        contdiagonaliz++;
                        contdiagonalderaba++;
                        contdiagonalizaba++;
                    }
                return true;
            }
            else
            {
                return false;
            }
        }
        else if (pieza == "b")
        {
            if ((x != x2) && (y != y2))
            {
                //For moverse diagonal para arriba a la derecha
                int contdiagonalder = 1;
                int contdiagonaliz = 1;
                int contdiagonalderaba = 1;
                int contdiagonalizaba = 1;
                for (int i = y; i < 8; i++)
                {
                    if (tablero[x + contdiagonalder][y + contdiagonalder] == "p" || tablero[x + contdiagonalder][y + contdiagonalder] == "b" || tablero[x + contdiagonalder][y + contdiagonalder] == "r" || tablero[x + -contdiagonalder][y + contdiagonalder] == "q" || tablero[x + contdiagonalder][y + contdiagonalder] == "k" || tablero[x + contdiagonalder][y + contdiagonalder] == "n")
                    {
                        if (tablero[x + contdiagonaliz][y - contdiagonaliz] == "p" || tablero[x + contdiagonaliz][y - contdiagonaliz] == "b" || tablero[x + contdiagonaliz][y - contdiagonaliz] == "b" || tablero[x + contdiagonaliz][y - contdiagonaliz] == "q" || tablero[x + contdiagonaliz][y - contdiagonaliz] == "n" || tablero[x + contdiagonaliz][y - contdiagonaliz] == "k")
                        {
                            if (tablero[x - contdiagonalderaba][y - contdiagonalderaba] == "p" || tablero[x - contdiagonalderaba][y + contdiagonalderaba] == "r" || tablero[x - contdiagonalderaba][y + contdiagonalderaba] == "b" || tablero[x - contdiagonalderaba][y + contdiagonalderaba] == "n" || tablero[x - contdiagonalderaba][y + contdiagonalderaba] == "q" || tablero[x - contdiagonalderaba][y + contdiagonalderaba] == "k")
                            {
                                if (tablero[x - contdiagonalizaba][y - contdiagonalizaba] == "p" || tablero[x - contdiagonalizaba][y - contdiagonalizaba] == "p" || tablero[x - contdiagonalizaba][y - contdiagonalizaba] == "b" || tablero[x - contdiagonalizaba][y - contdiagonalizaba] == "n" || tablero[x - contdiagonalizaba][y - contdiagonalizaba] == "q" || tablero[x - contdiagonalizaba][y - contdiagonalizaba] == "k")
                                {
                                    return false;
                                }
                                else
                                {
                                    if (tablero[x2 +1][y2-1] == "P" ||tablero[x2 +1][y2-1] == "R" || tablero[x2 +1][y2-1] == "B" || tablero[x2 +1][y2-1]== "N" || tablero[x2 +1][y2-1] == "Q" || tablero[x2 +1][y2-1] == "K")
                                    {
                                        if (tablero[x2][y2] == " ")
                                        {
                                            return true;
                                        }
                                        else
                                        {
                                            return false;
                                        }
                                    }
                                    else if ((x - contdiagonalizaba == x2) && (y - contdiagonalizaba == y2))
                                    {
                                        return true;
                                    }
                                    return true;
                                }
                            }
                            else
                            {
                                if (tablero[x2+1][y2+1] == "p" || tablero[x2+1][y2+1] == "R" ||tablero[x2+1][y2+1]  == "B" || tablero[x2+1][y2+1]  == "N" ||tablero[x2+1][y2+1]  == "Q" || tablero[x2+1][y2+1]  == "K")
                                {
                                    if (tablero[x2][y2] == " ")
                                    {
                                        return true;
                                    }
                                    else
                                    {
                                        return false;
                                    }
                                }
                                else if ((x - contdiagonalderaba == x2) && (y + contdiagonalderaba == y2))
                                {
                                    return true;
                                }
                                return true;
                            }
                        }
                        else
                        {
                            if (tablero[x2-1][y2-1] == "P" || tablero[x2-1][y2-1]== "R" ||tablero[x2-1][y2-1] == "B" || tablero[x2-1][y2-1]== "Q" || tablero[x2-1][y2-1] == "N" || tablero[x2-1][y2-1]== "K")
                            {
                                if (tablero[x2][y2] == " ")
                                {
                                    return true;
                                }
                                else
                                {
                                    return false;
                                }
                            }
                            else if ((x + contdiagonaliz == x2) && (y - contdiagonaliz == y2))
                            {
                                return true;
                            }
                            return true;
                        }
                    }
                    else
                    {
                        if (tablero[x2-1][y2+1] == "P" || tablero[x2-1][y2+1] == "R" || tablero[x2-1][y2+1]== "B" || tablero[x2-1][y2+1] == "N" || tablero[x2-1][y2+1] == "Q" ||tablero[x2-1][y2+1] == "K")
                        {
                            if (tablero[x2][y2] == " ")
                            {
                                return true;
                            }
                            else
                            {
                                return false;
                            }
                        }
                        else if ((x + contdiagonalder == x2) && (y + contdiagonalder == y2))
                        {
                            return true;
                        }
                        return true;
                    }
                    contdiagonalder++;
                    contdiagonaliz++;
                    contdiagonalderaba++;
                    contdiagonalizaba++;
                }
            }
            else
            {
                return false;
            }
        }
    }
};
#endif