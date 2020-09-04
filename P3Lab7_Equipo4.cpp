#include <iostream>
#include <string>
using namespace std;
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
            //
            //
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
                        continua = false;
                    } else {
                        //Aqui lo respectivo de polimorfismo
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
                        continua = false;
                    } else {
                        //Aqui lo respectivo de polimorfismo
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