#include <iostream>
#include <string>
#include "Pieza.hpp"
#include "Torre.hpp"
#include "Caballo.hpp"
#include "Reina.hpp"
#include "Rey.hpp"
#include "Peon.hpp"
#include "Alfil.hpp"
using namespace std;
string** MovimientoValido(string**, int, int, int, int, string);
int main(){
    char respuesta = 's';
    while (respuesta == 's'){
        int opcion;
        cout << "****JUGAR****" << endl;
        cout << "1. Ajedrez" << endl;
        cout << "2. Salida" << endl;
        cout << "*************" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;
        switch (opcion){
        case 1:{
            string nameP1, nameP2;
            cout << "Bienvenidos!" << endl;
            cout << "Jugador 1 ingrese su nombre: ";
            cin >> nameP1;
            cout << "Jugador 2 ingrese su nombre: ";
            cin >> nameP2;
            cout << endl;
            cout << "->Jugador 1: " << nameP1 << endl;
            cout << "->Jugador 2: " << nameP2 << endl;
            cout << endl << "A Jugar!" << endl << endl;
            string** tablero = new string*[8];
            for (int i = 0; i < 8; i++){
                tablero[i] = new string[8];
            } // Fin For Creación del Tablero P1
            // Llenado del Tablero
            tablero[0][0] = "r";
            tablero[0][1] = "n";
            tablero[0][2] = "b";
            tablero[0][3] = "q";
            tablero[0][4] = "r";
            tablero[0][5] = "b";
            tablero[0][6] = "n";
            tablero[0][7] = "r";
            for (int i = 0; i < 8; i++){
                tablero[1][i] = "p";  
            } // Fin For
            tablero[7][0] = "R";
            tablero[7][1] = "N";
            tablero[7][2] = "B";
            tablero[7][3] = "Q";
            tablero[7][4] = "R";
            tablero[7][5] = "B";
            tablero[7][6] = "N";
            tablero[7][7] = "R";
            for (int i = 0; i < 8; i++){
                tablero[6][i] = "P";  
            } // Fin For
            // Impresion del Tablero
            bool continua = true;
            bool player = true;
            while(continua){
                string comando;
                if(player){
                    cout << "                 " << nameP2 << endl;
                    int cont = 8;
                    for (int i = 0; i < 8; i++){
                        cout << "[" << cont << "] ";
                        cont--;
                        for (int j = 0; j < 8; j++){
                            if (i < 2 && j == 7 ){
                                cout << "| " << tablero[i][j] << " |";
                            } else if(i < 2 || i > 5 && j != 7){
                                cout << "| " << tablero[i][j] << " ";  
                            }else if(i >= 2 && i <= 5 && j != 7){
                                cout << "|  " << tablero[i][j] << " ";
                            } else if (i >= 2 && i <= 5 && j == 7){
                                cout << "|  " << tablero[i][j] << " |";
                            } else {
                                cout << "| " << tablero[i][j] << " |";   
                            } // Fin If
                        } // Fin For
                        cout << endl;
                    } // Fin For
                    cout << "     [a] [b] [c] [d] [e] [f] [g] [h]" << endl;
                    cout << "                 " << nameP1 << endl;
                    cout << "->Ingrese: ";
                    cin >> comando;
                    cout << endl;
                    if (comando == "bai"){
                        for (int i = 0; i < 8; i++){
                            delete[] tablero[i];
                        } // Fin For
                        delete[] tablero;
                        cout << "*Partida finalizada, " << nameP1 << " abandono*" << endl;
                        continua = false;
                    } else {
                        string letraPieza, dondeEstoy, dondeVoy;
                        int x1, y1, x2, y2;
                        letraPieza = comando.substr(0,1);
                        cout << "lP" << letraPieza << endl;
                        dondeEstoy = comando.substr(2, 2);
                        dondeVoy = comando.substr(5, 2);
                        cout << "Donde Estoy: " << dondeEstoy << endl;
                        cout << "Donde Voy: " << dondeVoy << endl;
                        // Posicion en la que está la pieza X
                        if (dondeEstoy[0] == 'a'){
                            x1 = 0;
                        } else if(dondeEstoy[0] == 'b') {
                            x1 = 1;
                        } else if(dondeEstoy[0] == 'c') {
                            x1 = 2;    
                        }   else if(dondeEstoy[0] == 'd') {
                            x1 = 3;    
                        } else if(dondeEstoy[0] == 'e') {
                            x1 = 4;    
                        } else if(dondeEstoy[0] == 'f') {
                            x1 = 5;    
                        } else if(dondeEstoy[0] == 'g') {
                            x1 = 6;    
                        } else {
                            x1 = 7;    
                        } // Fin If       
                        // Posicion en la que se moverá la pieza X
                        if (dondeVoy[0] == 'a'){
                            x2 = 0;
                        } else if(dondeVoy[0] == 'b') {
                            x2 = 1;
                        } else if(dondeVoy[0] == 'c') {
                            x2 = 2;    
                        }   else if(dondeVoy[0] == 'd') {
                            x2 = 3;    
                        } else if(dondeVoy[0] == 'e') {
                            x2 = 4;    
                        } else if(dondeVoy[0] == 'f') {
                            x2 = 5;    
                        } else if(dondeVoy[0] == 'g') {
                            x2 = 6;    
                        } else {
                            x2 = 7;    
                        } // Fin If  
                        // Posicion en la que está la pieza Y
                        if (dondeEstoy[1] == '1'){
                            y1 = 7;
                        } else if(dondeEstoy[1] == '2') {
                            y1 = 6;
                        } else if(dondeEstoy[1] == '3') {
                            y1 = 5;    
                        }   else if(dondeEstoy[1] == '4') {
                            y1 = 4;    
                        } else if(dondeEstoy[1] == '5') {
                            y1 = 3;    
                        } else if(dondeEstoy[1] == '6') {
                            y1 = 2;    
                        } else if(dondeEstoy[1] == '7') {
                            y1 = 1;    
                        } else {
                            y1 = 0;    
                        } // Fin If       
                        // Posicion en la que se moverá la pieza Y
                        if (dondeVoy[1] == '1'){
                            y2 = 7;
                        } else if(dondeVoy[1] == '2') {
                            y2 = 6;
                        } else if(dondeVoy[1] == '3') {
                            y2 = 5;    
                        }   else if(dondeVoy[1] == '4') {
                            y2 = 4;    
                        } else if(dondeVoy[1] == '5') {
                            y2 = 3;    
                        } else if(dondeVoy[1] == '6') {
                            y2 = 2;    
                        } else if(dondeVoy[1] == '7') {
                            y2 = 1;    
                        } else {
                            y1 = 0;    
                        } // Fin If
                        cout << "x1: " << x1 << " y1: " << y1 << " x2: " << x2 << " y2: " << y2 << endl;
                        bool movValido; 
                        if (letraPieza == "P"){
                            Peon peon;
                            movValido = peon.validarmovimiento(letraPieza, y1, x1, y2, x2, tablero);
                        } else if (letraPieza == "R"){
                            Torre torre;
                            movValido = torre.validarmovimiento(letraPieza, y1, x1, y2, x2, tablero);
                        } else if (letraPieza == "N") {
                            Caballo caballo;
                            movValido = caballo.validarmovimiento(letraPieza, y1, x1, y2, x2, tablero);
                        } else if (letraPieza == "B"){
                            Alfil alfil;
                            movValido = alfil.validarmovimiento(letraPieza, y1, x1, y2, x2, tablero);
                        } else if (letraPieza == "Q"){
                            Reina dama;
                            movValido = dama.validarmovimiento(letraPieza, y1, x1, y2, x2, tablero);
                        } else {
                            Rey rey;
                            movValido = rey.validarmovimiento(letraPieza, y1, x1, y2, x2, tablero);
                        } // Fin If    
                        if (movValido){
                            tablero = MovimientoValido(tablero, y1, x1, y2, x2, letraPieza);
                        } else {
                            cout << "El movimiento no es valido!";
                        } // Fin If
                        player = false;
                        comando = "";
                    }  // Fin If
                } else {
                    cout << "              " << nameP1 << endl;
                    int cont = 1;
                    for (int i = 7; i >= 0; i--){
                        cout << "[" << cont << "] ";
                        cont++;
                        for (int j = 0; j < 8; j++){                           
                            if (i > 5 && j == 7 ){
                                cout << "| " << tablero[i][j] << " |";
                            } else if(i == 1 && j != 7){
                                cout << "| " << tablero[i][j] << " ";
                            } else if(i == 1 && j == 7) {
                                cout << "| " << tablero[i][j] << " |";
                            }else if(i > 5 || i < 1 && j != 7){
                                cout << "| " << tablero[i][j] << " ";  
                            } else if(i <= 5 && i >= 1 && j != 7){
                                cout << "|  " << tablero[i][j] << " ";
                            } else if (i <= 5 && i >= 1 && j == 7){
                                cout << "|  " << tablero[i][j] << " |";
                            } else {
                                cout << "| " << tablero[i][j] << " |";   
                            } // Fin If
                        } // Fin For
                        cout << endl;
                    } // Fin For
                    cout << "     [h] [g] [f] [e] [d] [c] [b] [a]" << endl;
                    cout << "              " << nameP2 << endl;
                    cout << "->Ingrese: ";
                    cin >> comando;
                    cout << endl;
                    if (comando == "bai"){
                        for (int i = 0; i < 8; i++){
                            delete[] tablero[i];
                        } // Fin For
                        delete[] tablero;
                        cout << "*Partida finalizada, " << nameP2 << "vabandono*" << endl;
                        continua = false;
                    } else {
                        string letraPieza, dondeEstoy, dondeVoy;
                        int x1, y1, x2, y2;
                        letraPieza = comando.substr(0,1);
                        dondeEstoy = comando.substr(2, 2);
                        dondeVoy = comando.substr(5, 2);
                        // Posicion en la que está la pieza Y
                        if (dondeEstoy[0] == 'a'){
                            y1 = 7;
                        } else if(dondeEstoy[0] == 'b') {
                            y1 = 6;
                        } else if(dondeEstoy[0] == 'c') {
                            y1 = 5;    
                        }   else if(dondeEstoy[0] == 'd') {
                            y1 = 4;    
                        } else if(dondeEstoy[0] == 'e') {
                            y1 = 3;    
                        } else if(dondeEstoy[0] == 'f') {
                            y1 = 2;    
                        } else if(dondeEstoy[0] == 'g') {
                            y1 = 1;    
                        } else {
                            y1 = 0;    
                        } // Fin If       
                        // Posicion en la que se moverá la pieza Y
                        if (dondeVoy[0] == 'a'){
                            y2 = 7;
                        } else if(dondeVoy[0] == 'b') {
                            y2 = 6;
                        } else if(dondeVoy[0] == 'c') {
                            y2 = 5;    
                        }   else if(dondeVoy[0] == 'd') {
                            y2 = 4;    
                        } else if(dondeVoy[0] == 'e') {
                            y2 = 3;    
                        } else if(dondeVoy[0] == 'f') {
                            y2 = 2;    
                        } else if(dondeVoy[0] == 'g') {
                            y2 = 1;    
                        } else {
                            y2 = 0;    
                        } // Fin If
                        // Posicion en la que está la pieza X
                        if (dondeEstoy[1] == '1'){
                            x1 = 0;
                        } else if(dondeEstoy[1] == '2') {
                            x1 = 1;
                        } else if(dondeEstoy[1] == '3') {
                            x1 = 2;    
                        }   else if(dondeEstoy[1] == '4') {
                            x1 = 3;    
                        } else if(dondeEstoy[1] == '5') {
                            x1 = 4;    
                        } else if(dondeEstoy[1] == '6') {
                            x1 = 5;    
                        } else if(dondeEstoy[1] == '7') {
                            x1 = 6;    
                        } else {
                            x1 = 7;    
                        } // Fin If       
                        // Posicion en la que se moverá la pieza X
                        if (dondeVoy[1] == '1'){
                            x2 = 0;
                        } else if(dondeVoy[1] == '2') {
                            x2 = 1;
                        } else if(dondeVoy[1] == '3') {
                            x2 = 2;    
                        }   else if(dondeVoy[1] == '4') {
                            x2 = 3;    
                        } else if(dondeVoy[1] == '5') {
                            x2 = 4;    
                        } else if(dondeVoy[1] == '6') {
                            x2 = 5;    
                        } else if(dondeVoy[1] == '7') {
                            x2 = 6;    
                        } else {
                            y1 = 7;    
                        } // Fin If
                        cout << "x1: " << x1 << " y1: " << y1 << " x2: " << x2 << " y2: " << y2;
                        bool movValido;                        
                        if (letraPieza == "p"){
                            Peon peon;
                            movValido = peon.validarmovimiento(letraPieza, y1, x1, y2, x2, tablero);
                        } else if (letraPieza == "r"){
                            Torre torre;
                            movValido = torre.validarmovimiento(letraPieza, y1, x1, y2, x2, tablero);
                        } else if (letraPieza == "n") {
                            Caballo caballo;
                            movValido = caballo.validarmovimiento(letraPieza, y1, x1, y2, x2, tablero);
                        } else if (letraPieza == "b"){
                            Alfil alfil;
                            movValido = alfil.validarmovimiento(letraPieza, y1, x1, y2, x2, tablero);
                        } else if (letraPieza == "q"){
                            Reina dama;
                            movValido = dama.validarmovimiento(letraPieza, y1, x1, y2, x2, tablero);
                        } else {
                            Rey rey;
                            movValido = rey.validarmovimiento(letraPieza, y1, x1, y2, x2, tablero);
                        } // Fin If   
                        if (movValido){
                            tablero = MovimientoValido(tablero, y1, x1, y2, x2, letraPieza);
                        } else {
                            cout << "El movimiento no es valido!" << endl;
                        } // Fin If                       
                        player = true;    
                        comando = "";
                    } // Fin If 
                } // Fin If
            } // Fin While Validacion
            break;}
        case 2:{
         respuesta = 'n';
            break;}
        default:
        cout << "¡Entrada no valida!";
        } // Fin Switch
    } // Fin While Respuesta 
} // Fin Main
string** MovimientoValido(string** tablero, int y1, int x1, int y2, int x2, string pieza){
    tablero[y1][x1] = "";
    tablero[y2][x2] = pieza;  
    return tablero;
}