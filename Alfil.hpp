#include "Pieza.hpp"
#ifndef ALFIL_H
#define ALFIL_H
class Alfil : public Pieza{
    public:
    virtual bool validarmovimiento(string pieza, int x1, int y1, int x2, int y2, string **tablero) {
        if (pieza == "P" || pieza == "N" || pieza == "B" || pieza == "R" || pieza == "Q" || pieza == "K"){
            // JUGADOR 1
            if (tablero[x2][y2] == "P" || tablero[x2][y2] == "N" || tablero[x2][y2] == "B" || tablero[x2][y2] == "Q" || tablero[x2][y2] == "R" || tablero[x2][y2] == "K") {
                // La coordenada a irse es una pieza del mismo color
                return false;
            } else if(x1 == x2 && y1 == y2){
                // La coordenada es la misma en la que esta la pieza actualmente
                return false;               
            } else if (tablero[x2][y2] == "p" || tablero[x2][y2] == "n" || tablero[x2][y2] == "b" || tablero[x2][y2] == "r" || tablero[x2][y2] == "q" || tablero[x2][y2] == "k" || tablero[x2][y2] == " "){
                // Verificacion que el punto x2,y2 este en las diagonales del punto x1,y1
                bool diagvalid;
                diagvalid = false;
                    int numy, numx;
                // Evaluacion de la diagonal hacia arriba y a la izquierda 
                numy = y1; 
                numx = x1;
                for (int i = 0; i < 7; i++){
                    numy--;
                    numx--;
                    if (numx == x2 && numy == y2){
                        diagvalid = true;
                    } // Fin If                       
                } // Fin For
                // Evaluacion de la diagonal hacia arriba y a la derecha
                numy = y1; 
                numx = x1;
                for (int i = 0; i < 7; i++){
                    numy++;
                    numx--;
                    if (numx == x2 && numy == y2){
                        diagvalid = true;
                    } // Fin If                       
                } // Fin For
                // Evaluacion de la diagonal hacia abajo y a la izquierda
                numy = y1; 
                numx = x1;
                    for (int i = 0; i < 7; i++){
                        numy--;
                        numx++;
                    if (numx == x2 && numy == y2){
                        diagvalid = true;
                    } // Fin If                       
                } // Fin For    
                // Evaluacion de la diagonal hacia abajo y a la derecha
                numy = y1; 
                numx = x1;
                for (int i = 0; i < 7; i++){
                    numy++;
                    numx++;
                    if (numx == x2 && numy == y2){
                        diagvalid = true;
                    } // Fin If                       
                } // Fin For                              
                if (diagvalid == true){
                    int difX, difY;
                    difX = x2 - x1;
                    difY = y2 - y1;
                    if(difX < 0 && difY < 0){
                        // Movimiento Diagonal hacia arriba y a la izquierda
                        int numy, numx;
                        numy = y1; 
                        numx = x1;                       
                        difY = difY * -1;
                        difX = difX * -1;
                        for (int i = 0; i < difY - 1; i++){
                            numy--;
                            numx--;
                            if (tablero[numx][numy] != " "){
                                return false;
                            } // Fin If                    
                        } // Fin For
                        return true;                       
                    } else if (difX < 0 && difY > 0){
                        // Movimiento Diagonal hacia arriba y a la derecha
                        int numy, numx;
                        numy = y1; 
                        numx = x1;                       
                        difX = difX * -1;
                        for (int i = 0; i < difY - 1; i++){
                            numy++;
                            numx--;
                            if (tablero[numx][numy] != " "){
                                return false;
                            } // Fin If                    
                        } // Fin For
                        return true; 
                    } else if (difX > 0 && difY < 0){
                        // Movimiento Diagonal hacia abajo y a la izquierda 
                        int numy, numx;
                        numy = y1; 
                        numx = x1;                       
                        difY = difY * -1;
                        for (int i = 0; i < difY - 1; i++){
                            numy--;
                            numx++;
                            if (tablero[numx][numy] != " "){
                                return false;
                            } // Fin If                    
                        } // Fin For
                        return true; 
                    } else if (difX > 0 && difY > 0){
                        // Movimiento Diagonal hacia abajo y a la derecha
                        int numy, numx;
                        numy = y1; 
                        numx = x1;                       
                        for (int i = 0; i < difY - 1; i++){
                            numy++;
                            numx++;
                            if (tablero[numx][numy] != " "){
                                return false;
                            } // Fin If                    
                        } // Fin For
                        return true; 
                    } else {
                        return false;
                    } // Fin If
                } else {
                    return false;
                } // Fin If
            } // Fin If
        } else {
            // JUGADOR 2
            if (tablero[x2][y2] == "p" || tablero[x2][y2] == "n" || tablero[x2][y2] == "b" || tablero[x2][y2] == "q" || tablero[x2][y2] == "r" || tablero[x2][y2] == "k") {
                // La coordenada a irse es una pieza del mismo color
                return false;
            }  else if(x1 == x2 && y1 == y2){
                // La coordenada es la misma en la que esta la pieza actualmente
                return false;
            }  else if (tablero[x2][y2] == "P" || tablero[x2][y2] == "N" || tablero[x2][y2] == "B" || tablero[x2][y2] == "R" || tablero[x2][y2] == "Q" || tablero[x2][y2] == "K" || tablero[x2][y2] == " "){
                // Verificacion que el punto x2,y2 este en las diagonales del punto x1,y1
                bool diagvalid;
                diagvalid = false;
                    int numy, numx;
                // Evaluacion de la diagonal hacia arriba y a la izquierda 
                numy = y1; 
                numx = x1;
                for (int i = 0; i < 7; i++){
                    numy--;
                    numx--;
                    if (numx == x2 && numy == y2){
                        diagvalid = true;
                    } // Fin If                       
                } // Fin For
                // Evaluacion de la diagonal hacia arriba y a la derecha
                numy = y1; 
                numx = x1;
                for (int i = 0; i < 7; i++){
                    numy++;
                    numx--;
                    if (numx == x2 && numy == y2){
                        diagvalid = true;
                    } // Fin If                       
                } // Fin For
                // Evaluacion de la diagonal hacia abajo y a la izquierda
                numy = y1; 
                numx = x1;
                    for (int i = 0; i < 7; i++){
                        numy--;
                        numx++;
                    if (numx == x2 && numy == y2){
                        diagvalid = true;
                    } // Fin If                       
                } // Fin For    
                // Evaluacion de la diagonal hacia abajo y a la derecha
                numy = y1; 
                numx = x1;
                for (int i = 0; i < 7; i++){
                    numy++;
                    numx++;
                    if (numx == x2 && numy == y2){
                        diagvalid = true;
                    } // Fin If                       
                } // Fin For                              
                if (diagvalid == true){
                    int difX, difY;
                    difX = x2 - x1;
                    difY = y2 - y1;
                    if(difX < 0 && difY < 0){
                        // Movimiento Diagonal hacia arriba y a la izquierda
                        int numy, numx;
                        numy = y1; 
                        numx = x1;                       
                        difY = difY * -1;
                        difX = difX * -1;
                        for (int i = 0; i < difY - 1; i++){
                            numy--;
                            numx--;
                            if (tablero[numx][numy] != " "){
                                return false;
                            } // Fin If                    
                        } // Fin For
                        return true;                       
                    } else if (difX < 0 && difY > 0){
                        // Movimiento Diagonal hacia arriba y a la derecha
                        int numy, numx;
                        numy = y1; 
                        numx = x1;                       
                        difX = difX * -1;
                        for (int i = 0; i < difY - 1; i++){
                            numy++;
                            numx--;
                            if (tablero[numx][numy] != " "){
                                return false;
                            } // Fin If                    
                        } // Fin For
                        return true; 
                    } else if (difX > 0 && difY < 0){
                        // Movimiento Diagonal hacia abajo y a la izquierda 
                        int numy, numx;
                        numy = y1; 
                        numx = x1;                       
                        difY = difY * -1;
                        for (int i = 0; i < difY - 1; i++){
                            numy--;
                            numx++;
                            if (tablero[numx][numy] != " "){
                                return false;
                            } // Fin If                    
                        } // Fin For
                        return true; 
                    } else if (difX > 0 && difY > 0){
                        // Movimiento Diagonal hacia abajo y a la derecha
                        int numy, numx;
                        numy = y1; 
                        numx = x1;                       
                        for (int i = 0; i < difY - 1; i++){
                            numy++;
                            numx++;
                            if (tablero[numx][numy] != " "){
                                return false;
                            } // Fin If                    
                        } // Fin For
                        return true; 
                    } else {
                        return false;
                    } // Fin If
                } else {
                    return false;
                } // Fin If
            } // Fin If
        } // Fin If Jugador     
        return false;
    } // Fin Validar Movimiento
}; // Fin Class Alfil
#endif