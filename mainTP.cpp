#include <iostream>
#include <cstring>

using namespace std;

enum acciones{
    norte,
    sur,
    este,
    oeste,
    ver,
    tomar,
    usar
};

int main() {
    bool continuar = true;
    bool accionTomada = false;
    int op = 0;
    string strAccion;
    while(continuar){
        cout << "Presiona 1 para jugar, 0 para salir" << endl;
        cin >> op;

        if(op==0){
            continuar = false;
        }else{
            while(!accionTomada){
                cout << "Ingresa accion" << endl;
                cin >> strAccion;
                accionTomada = true;
                if(strAccion == "n" || strAccion == "N"){
                    op = 0;
                }
                else if(strAccion == "s" || strAccion == "S"){
                    op = 1;
                }
                else if(strAccion == "e" || strAccion == "E"){
                    op = 2;
                }
                else if(strAccion == "o" || strAccion == "O"){
                    op = 3;
                }
                else if(strAccion == "v" || strAccion == "V"){
                    op = 4;
                }
                else if(strAccion == "t" || strAccion == "T"){
                    op = 5;
                }
                else if(strAccion == "u" || strAccion == "U"){
                    op = 6;
                }
                else{
                    accionTomada = false;
                    cout << "Comando no reconocido, ingresa la inicial de la accion deseada"<<endl;
                    cout <<"Acciones: Norte, Sur, Este, Oeste, Tomar, Ver, Usar"<<endl;
                }
                strAccion="";
            }
            accionTomada=false;
        }
    }

    cout << "Gracias por jugar!";

    return 0;
}