#include "Pieza.hpp"
#ifndef TORRE_H
#define TORRE_H
class Torre : public Pieza{
    public:
    virtual bool validarmovimiento(string pieza, int x1, int y1, int x2, int y2, string** tablero){
        if (pieza == "P" || pieza == "N" || pieza == "B" || pieza == "R" || pieza == "Q" || pieza == "K"){
            // JUGADOR 1
            int difX, difY;
            difX = x2 - x1;
            difY = y2 - y1;
            if (tablero[x2][y2] == "P" || tablero[x2][y2] == "N" || tablero[x2][y2] == "B" || tablero[x2][y2] == "Q" || tablero[x2][y2] == "R" || tablero[x2][y2] == "K") {
                // La coordenada a irse es una pieza del mismo color
                return false;
            } else if(x1 == x2 && y1 == y2){
                // La coordenada es la misma en la que esta la pieza actualmente
                return false;
            } else if (tablero[x2][y2] == "p" || tablero[x2][y2] == "n" || tablero[x2][y2] == "b" || tablero[x2][y2] == "r" || tablero[x2][y2] == "q" || tablero[x2][y2] == "k"){
                if (x1 == x2){
                    // Moverme entre filas
                    if (difY < 0){
                        // Movimiento hacía la derecha
                        for (int i = 0; i < difY - 1; i++){
                            if (tablero[x1][y1++] != ""){
                                return false;
                            } // Fin If                    
                        } // Fin For
                        return true;                                                
                    } else {
                        // Movimiento hacía izquierda
                        difY = difY * -1;
                        for (int i = 0; i < difY - 1; i++){
                            if (tablero[x1][y1--] != ""){
                                return false;
                            } // Fin If                    
                        } // Fin For
                        return true;
                    } // Fin If
                } else {
                    // Moverme entre columnas
                    if (difX < 0){
                        // Movimiento hacía arriba
                        difX = difX * -1;
                        for (int i = 0; i < difX - 1; i++){
                            if (tablero[x1--][y1] != ""){
                                return false;
                            } // Fin If                    
                        } // Fin For  
                        return true;                      
                    } else {
                        // Movimiento hacía abajo
                        for (int i = 0; i < difX - 1; i++){
                            if (tablero[x1++][y1] != ""){
                                return false;
                            } // Fin If                    
                        } // Fin For  
                        return true; 
                    } // Fin If
                } // Fin If
            } else if (tablero[x2][y2] == " "){
                if (x1 == x2){
                    // Moverme entre filas
                    if (difY < 0){
                        // Movimiento hacía la derecha
                        for (int i = 0; i < difY - 1; i++){
                            if (tablero[x1][y1++] != ""){
                                return false;
                            } // Fin If                    
                        } // Fin For
                        return true;                                                
                    } else {
                        // Movimiento hacía izquierda
                        difY = difY * -1;
                        for (int i = 0; i < difY - 1; i++){
                            if (tablero[x1][y1--] != ""){
                                return false;
                            } // Fin If                    
                        } // Fin For
                        return true;
                    } // Fin If
                } else {
                    // Moverme entre columnas
                    if (difX < 0){
                        // Movimiento hacía arriba
                        difX = difX * -1;
                        for (int i = 0; i < difX - 1; i++){
                            if (tablero[x1--][y1] != ""){
                                return false;
                            } // Fin If                    
                        } // Fin For  
                        return true;                      
                    } else {
                        // Movimiento hacía abajo
                        for (int i = 0; i < difX - 1; i++){
                            if (tablero[x1++][y1] != ""){
                                return false;
                            } // Fin If                    
                        } // Fin For  
                        return true; 
                    } // Fin If
                } // Fin If
            } // Fin If         
        } else {
            // JUGADOR 2
            int difX, difY;
            difX = x2 - x1;
            difY = y2 - y1;
            if (tablero[x2][y2] == "p" || tablero[x2][y2] == "n" || tablero[x2][y2] == "b" || tablero[x2][y2] == "q" || tablero[x2][y2] == "r" || tablero[x2][y2] == "k") {
                // La coordenada a irse es una pieza del mismo color
                return false;
            }  else if(x1 == x2 && y1 == y2){
                // La coordenada es la misma en la que esta la pieza actualmente
                return false;
            } else if (tablero[x2][y2] == "P" || tablero[x2][y2] == "N" || tablero[x2][y2] == "B" || tablero[x2][y2] == "R" || tablero[x2][y2] == "Q" || tablero[x2][y2] == "K"){
                if (x1 == x2){
                    // Moverme entre filas
                    if (difY < 0){
                        // Movimiento hacía la derecha
                        for (int i = 0; i < difY - 1; i++){
                            if (tablero[x1][y1++] != ""){
                                return false;
                            } // Fin If                    
                        } // Fin For
                        return true;                                                
                    } else {
                        // Movimiento hacía izquierda
                        difY = difY * -1;
                        for (int i = 0; i < difY - 1; i++){
                            if (tablero[x1][y1--] != ""){
                                return false;
                            } // Fin If                    
                        } // Fin For
                        return true;
                    } // Fin If
                } else {
                    // Moverme entre columnas
                    if (difX < 0){
                        // Movimiento hacía arriba
                        difX = difX * -1;
                        for (int i = 0; i < difX - 1; i++){
                            if (tablero[x1--][y1] != ""){
                                return false;
                            } // Fin If                    
                        } // Fin For  
                        return true;                      
                    } else {
                        // Movimiento hacía abajo
                        for (int i = 0; i < difX - 1; i++){
                            if (tablero[x1++][y1] != ""){
                                return false;
                            } // Fin If                    
                        } // Fin For  
                        return true; 
                    } // Fin If
                } // Fin If
            } else if (tablero[x2][y2] == " "){
                if (x1 == x2){
                    // Moverme entre filas
                    if (difY < 0){
                        // Movimiento hacía la derecha
                        for (int i = 0; i < difY - 1; i++){
                            if (tablero[x1][y1++] != ""){
                                return false;
                            } // Fin If                    
                        } // Fin For
                        return true;                                                
                    } else {
                        // Movimiento hacía izquierda
                        difY = difY * -1;
                        for (int i = 0; i < difY - 1; i++){
                            if (tablero[x1][y1--] != ""){
                                return false;
                            } // Fin If                    
                        } // Fin For
                        return true;
                    } // Fin If
                } else {
                    // Moverme entre columnas
                    if (difX < 0){
                        // Movimiento hacía arriba
                        difX = difX * -1;
                        for (int i = 0; i < difX - 1; i++){
                            if (tablero[x1--][y1] != ""){
                                return false;
                            } // Fin If                    
                        } // Fin For  
                        return true;                      
                    } else {
                        // Movimiento hacía abajo
                        for (int i = 0; i < difX - 1; i++){
                            if (tablero[x1++][y1] != ""){
                                return false;
                            } // Fin If                    
                        } // Fin For  
                        return true; 
                    } // Fin If
                } // Fin If
            } // Fin If
        } // Fin If
    } // Fin Validar Movimiento
}; // Fin Class Torre
#endif