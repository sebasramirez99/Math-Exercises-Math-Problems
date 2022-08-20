/****************************
* Fecha: 19-08-2022
* Autor: Juan Sebastian Bueno Ramirez
* Tema: Math Exercises & Math Problems: Matrix Equations
* Materia: Métricas de rendimiento para HPC
*****************************/

#include <iostream>
#include <vector>
#include <eigen3/Eigen/Dense>

using namespace std;

int main()
{

    int opcion;
    int bol = 1;
    while (bol==1){
        cout << "Bienvenido escoja una de las siguientes opciones … \n";
        cout << "0) Salir\n";
        cout << "1) X = 3A-4B \n";
        cout << "2) 2X+4A = 3BA \n";
        cout << "3) AX B(T) = C \n";
        cout << "4) XA = B";
        cout << "5) X = 2(AB+C) \n";
        cout << "6) X = A+3B \n";
        cout << "7) XA = B \n";
        cout << "8) AX = B \n";
        cout << "9) X = A(3) \n";
        cout << "10) A(T) XB = C \n";
        cin >> opcion;
        switch(opcion)
        {
           case 0:
              bol=0;
              break;
           case 1:
              break;
           case 2:
              break;
            case 3:
               break;
            case 4:
               break;
            case 5:
               break;
            case 6:
               break;
            case 7:
               break;
            case 8:
                break;
            case 9:
                break;
            case 10:
                break;
           default:
              cout << "La opcion escogida no es válida.\n";
        }
    }
    return 0;
}
