#include "Pieza.hpp"
#ifndef REY_H
#define REY_H
class Rey : public Pieza
{
public:
    bool validarmovimiento(string pieza, int x, int y, int x2, int y2, string **tablero)
    {
        if (pieza == "K")
        {
            if (tablero[x - 1][y] == "P" || tablero[x - 1][y] == "R" || tablero[x - 1][y] == "B" || tablero[x - 1][y] == "N" || tablero[x - 1][y] == "Q" || tablero[x - 1][y] == "K")
            {
                if (tablero[x + 1][y] == "P" || tablero[x + 1][y] == "R" || tablero[x + 1][y] == "B" || tablero[x + 1][y] == "N" || tablero[x + 1][y] == "Q" || tablero[x + 1][y] == "K")
                {
                    if (tablero[x][y - 1] == "P" || tablero[x][y - 1] == "R" || tablero[x][y - 1] == "B" || tablero[x][y - 1] == "N" || tablero[x][y - 1] == "Q" || tablero[x][y - 1] == "K")
                    {
                        if (tablero[x][y + 1] == "P" || tablero[x][y + 1] == "R" || tablero[x][y + 1] == "B" || tablero[x][y + 1] == "N" || tablero[x][y + 1] == "Q" || tablero[x][y + 1] == "K")
                        {
                            if (tablero[x - 1][y + 1] == "P" || tablero[x - 1][y + 1] == "R" || tablero[x - 1][y + 1] == "B" || tablero[x - 1][y + 1] == "N" || tablero[x - 1][y + 1] == "Q" || tablero[x - 1][y + 1] == "K")
                            {
                                if (tablero[x + 1][y + 1] == "P" || tablero[x + 1][y + 1] == "R" || tablero[x + 1][y + 1] == "B" || tablero[x + 1][y + 1] == "N" || tablero[x + 1][y + 1] == "Q" || tablero[x + 1][y + 1] == "K")
                                {
                                    if (tablero[x - 1][y - 1] == "P" || tablero[x - 1][y - 1] == "R" || tablero[x - 1][y - 1] == "B" || tablero[x - 1][y - 1] == "N" || tablero[x - 1][y - 1] == "Q" || tablero[x - 1][y - 1] == "K")
                                    {
                                        if (tablero[x + 1][y - 1] == "P" || tablero[x + 1][y - 1] == "R" || tablero[x + 1][y - 1] == "B" || tablero[x - 1][y - 1] == "N" || tablero[x + 1][y - 1] == "Q" || tablero[x + 1][y + 1] == "K")
                                        {
                                            return false;
                                        }
                                        else
                                        {
                                            if ((x2 == x + 1) && (y - 1 == y2))
                                            {
                                                return true;
                                            }
                                            else
                                            {
                                                return false;
                                            }
                                        }
                                    }
                                    else
                                    {
                                        if ((x2 == x - 1) && (y - 1 == y2))
                                        {
                                            return true;
                                        }
                                        else
                                        {
                                            return false;
                                        }
                                    }
                                }
                                else
                                {
                                    if ((x2 == x + 1) && (y + 1 == y2))
                                    {
                                        return true;
                                    }
                                    else
                                    {
                                        return false;
                                    }
                                }
                            }
                            else
                            {
                                if ((x2 == x - 1) && (y + 1 == y2))
                                {
                                    return true;
                                }
                                else
                                {
                                    return false;
                                }
                            }
                        }
                        else
                        {
                            if ((x2 == x) && (y + 1 == y2))
                            {
                                return true;
                            }
                            else
                            {
                                return false;
                            }
                        }
                    }
                    else
                    {
                        if ((x2 == x) && (y - 1 == y2))
                        {
                            return true;
                        }
                        else
                        {
                            return false;
                        }
                    }
                }
                else
                {
                    if ((x2 == x + 1) && (y == y2))
                    {
                        return true;
                    }
                    else
                    {
                        return false;
                    }
                }
            }
            else
            {
                if ((x2 == x - 1) && (y == y2))
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }

            return true;
        }
        else if (pieza == "k")
        {
            if (tablero[x - 1][y] == "p" || tablero[x - 1][y] == "r" || tablero[x - 1][y] == "b" || tablero[x - 1][y] == "n" || tablero[x - 1][y] == "q" || tablero[x - 1][y] == "k")
            {
                if (tablero[x + 1][y] == "p" || tablero[x + 1][y] == "r" || tablero[x + 1][y] == "b" || tablero[x + 1][y] == "n" || tablero[x + 1][y] == "q" || tablero[x + 1][y] == "k")
                {
                    if (tablero[x][y - 1] == "p" || tablero[x][y - 1] == "r" || tablero[x][y - 1] == "b" || tablero[x][y - 1] == "n" || tablero[x][y - 1] == "q" || tablero[x][y - 1] == "k")
                    {
                        if (tablero[x][y + 1] == "p" || tablero[x][y + 1] == "r" || tablero[x][y + 1] == "b" || tablero[x][y + 1] == "n" || tablero[x][y + 1] == "q" || tablero[x][y + 1] == "k")
                        {
                            if (tablero[x - 1][y + 1] == "p" || tablero[x - 1][y + 1] == "r" || tablero[x - 1][y + 1] == "b" || tablero[x - 1][y + 1] == "n" || tablero[x - 1][y + 1] == "q" || tablero[x - 1][y + 1] == "k")
                            {
                                if (tablero[x + 1][y + 1] == "p" || tablero[x + 1][y + 1] == "r" || tablero[x + 1][y + 1] == "b" || tablero[x + 1][y + 1] == "n" || tablero[x + 1][y + 1] == "q" || tablero[x + 1][y + 1] == "k")
                                {
                                    if (tablero[x - 1][y - 1] == "p" || tablero[x - 1][y - 1] == "r" || tablero[x - 1][y - 1] == "b" || tablero[x - 1][y - 1] == "n" || tablero[x - 1][y - 1] == "q" || tablero[x - 1][y - 1] == "k")
                                    {
                                        if (tablero[x + 1][y - 1] == "p" || tablero[x + 1][y - 1] == "r" || tablero[x + 1][y - 1] == "b" || tablero[x - 1][y - 1] == "n" || tablero[x + 1][y - 1] == "q" || tablero[x + 1][y + 1] == "k")
                                        {
                                            return false;
                                        }
                                        else
                                        {
                                            if ((x2 == x + 1) && (y - 1 == y2))
                                            {
                                                return true;
                                            }
                                            else
                                            {
                                                return false;
                                            }
                                        }
                                    }
                                    else
                                    {
                                        if ((x2 == x - 1) && (y - 1 == y2))
                                        {
                                            return true;
                                        }
                                        else
                                        {
                                            return false;
                                        }
                                    }
                                }
                                else
                                {
                                    if ((x2 == x + 1) && (y + 1 == y2))
                                    {
                                        return true;
                                    }
                                    else
                                    {
                                        return false;
                                    }
                                }
                            }
                            else
                            {
                                if ((x2 == x - 1) && (y + 1 == y2))
                                {
                                    return true;
                                }
                                else
                                {
                                    return false;
                                }
                            }
                        }
                        else
                        {
                            if ((x2 == x) && (y + 1 == y2))
                            {
                                return true;
                            }
                            else
                            {
                                return false;
                            }
                        }
                    }
                    else
                    {
                        if ((x2 == x) && (y - 1 == y2))
                        {
                            return true;
                        }
                        else
                        {
                            return false;
                        }
                    }
                }
                else
                {
                    if ((x2 == x + 1) && (y == y2))
                    {
                        return true;
                    }
                    else
                    {
                        return false;
                    }
                }
            }
            else
            {
                if ((x2 == x - 1) && (y == y2))
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }

            return true;
        }
    }
};
#endif