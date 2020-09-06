#include "Pieza.hpp"
#ifndef REINA_H
#define REINA_H
class Reina : public Pieza{
    public:
    virtual bool validarmovimiento(string pieza, int x1, int y1, int x2, int y2, string** tablero) {
        if (pieza == "P" || pieza == "N" || pieza == "B" || pieza == "R" || pieza == "Q" || pieza == "K"){
            // JUGADOR 1
            if (tablero[x2][y2] == "P" || tablero[x2][y2] == "N" || tablero[x2][y2] == "B" || tablero[x2][y2] == "Q" || tablero[x2][y2] == "R" || tablero[x2][y2] == "K") {
                // La coordenada a irse es una pieza del mismo color
                return false;
            } else if(x1 == x2 && y1 == y2){
                // La coordenada es la misma en la que esta la pieza actualmente
                return false;               
            } else if (tablero[x2][y2] == "p" || tablero[x2][y2] == "n" || tablero[x2][y2] == "b" || tablero[x2][y2] == "r" || tablero[x2][y2] == "q" || tablero[x2][y2] == "k" || tablero[x2][y2] == " "){
                if (x1 == x2 && y1 != y2){
                    // Moverme entre Columnas
                    int difY;
                    difY = y2 - y1;
                    if (difY > 0){
                        // Movimiento hacía la derecha
                        int numy;
                        numy = y1;
                        for (int i = 0; i < difY - 1; i++){
                            numy++;
                            if (tablero[x1][numy] != " "){
                                return false;
                            } // Fin If                    
                        } // Fin For
                        return true;                                                
                    } else {
                        // Movimiento hacía izquierda
                        int numy;
                        numy = y1;                        
                        difY = difY * -1;
                        for (int i = 0; i < difY - 1; i++){
                            numy--;
                            if (tablero[x1][numy] != " "){
                                return false;
                            } // Fin If                    
                        } // Fin For
                        return true;
                    } // Fin If
                } else if (y1 == y2 && x1 != x2){
                    // Moverme entre Filas
                        int difX;
                        difX = x2 - x1;
                    if (difX < 0){
                        // Movimiento hacía arriba
                        int numx;
                        numx = x1;  
                        difX = difX * -1;
                        for (int i = 0; i < difX - 1; i++){
                            numx--;
                            if (tablero[numx][y1] != " "){
                                return false;
                            } // Fin If                    
                        } // Fin For  
                        return true;                      
                    } else {
                        // Movimiento hacía abajo
                        int numx;
                        numx = x1;  
                        for (int i = 0; i < difX - 1; i++){
                            numx++;
                            if (tablero[numx][y1] != " "){
                                return false;
                            } // Fin If                    
                        } // Fin For  
                        return true; 
                    } // Fin If
                } else {
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
                if (x1 == x2 && y1 != y2){
                    // Moverme entre Columnas
                    int difY;
                    difY = y2 - y1;
                    if (difY > 0){
                        // Movimiento hacía la derecha
                        int numy;
                        numy = y1;
                        for (int i = 0; i < difY - 1; i++){
                            numy++;
                            if (tablero[x1][numy] != " "){
                                return false;
                            } // Fin If                    
                        } // Fin For
                        return true;                                                
                    } else {
                        // Movimiento hacía izquierda
                        int numy;
                        numy = y1;                        
                        difY = difY * -1;
                        for (int i = 0; i < difY - 1; i++){
                            numy--;
                            if (tablero[x1][numy] != " "){
                                return false;
                            } // Fin If                    
                        } // Fin For
                        return true;
                    } // Fin If
                } else if (y1 == y2 && x1 != x2){
                    // Moverme entre Filas
                        int difX;
                        difX = x2 - x1;
                    if (difX < 0){
                        // Movimiento hacía arriba
                        int numx;
                        numx = x1;  
                        difX = difX * -1;
                        for (int i = 0; i < difX - 1; i++){
                            numx--;
                            if (tablero[numx][y1] != " "){
                                return false;
                            } // Fin If                    
                        } // Fin For  
                        return true;                      
                    } else {
                        // Movimiento hacía abajo
                        int numx;
                        numx = x1;  
                        for (int i = 0; i < difX - 1; i++){
                            numx++;
                            if (tablero[numx][y1] != " "){
                                return false;
                            } // Fin If                    
                        } // Fin For  
                        return true; 
                    } // Fin If
                } else {
                    // Aqui va lo de los diagonales
                } // Fin If
            } // Fin If
        } // Fin If Jugador     
        return false;
    } // Fin Validar Movimiento
}; // Fin Class Reina
#endif