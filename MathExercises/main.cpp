/****************************
* Fecha: 19-08-2022
* Autor: Juan Sebastian Bueno Ramirez
* Tema: Math Exercises & Math Problems: Matrix Equations
* Materia: Métricas de rendimiento para HPC
*****************************/

#include <iostream>
#include <vector>
#include <eigen3/Eigen/Dense>

//se define los tipos de las matrices que se van a utilizar
typedef Eigen::Matrix<float, 2, 2> fMatrix22;
typedef Eigen::Matrix<float, 2, 3> fMatrix23;
typedef Eigen::Matrix<float, 3, 2> fMatrix32;
typedef Eigen::Matrix<float, 3, 3> fMatrix33;
typedef Eigen::Matrix<float, 4, 4> fMatrix44;
typedef Eigen::Matrix<float, 1, 3> fMatrix13;
typedef Eigen::Matrix<float, 3, 2> fMatrix32;
typedef Eigen::Matrix<float, 2, 1> fMatrix21;
typedef Eigen::Matrix<float, 1, 1> fMatrix11;
typedef Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic> fMatrixDD;


/* se inicializan las matrices que vamos a usar durante el programa*/
fMatrix22 A;
fMatrix22 B;
fMatrix22 X;
fMatrix22 C;
fMatrix23 AA;
fMatrix32 BB;
fMatrix23 AAE;
fMatrix33 A3;
fMatrix33 B3;
fMatrix33 X3;
fMatrix44 A4;
fMatrix44 B4;
fMatrix44 X4;
fMatrixDD AE(1,3);
fMatrixDD BE(3,2);
fMatrixDD CE(2,1);
fMatrixDD XE(1,1);

void Opcion1(){
    std::cout <<"\n";
    std::cout <<"X = 3A-4B \n"<<std::endl;

    //Matrices inicializadas con valores de la pagina
    A << 4, -2,
         1, -7;
    B << -1, 2,
         6, -5;

    std::cout <<"A"<<std::endl;
    std::cout <<A<<std::endl;
    std::cout << "\n";
    std::cout <<"B"<<std::endl;
    std::cout <<B<<std::endl;
    std::cout << "\n";

    //Ecuacion a resolver
    X=(A*3)-(B*4);
    std::cout << "X\n"<<X<<std::endl;
    std::cout << "\n\n";
}
void Opcion2(){
    std::cout <<"\n";
    std::cout <<"2X+4A = 3BA \n"<<std::endl;


    //Matrices inicializadas con valores de la pagina
    A << 0, -1,
         2, 1;
    B << 1, 2,
         3, 4;

    std::cout <<"A"<<std::endl;
    std::cout <<A<<std::endl;
    std::cout << "\n";
    std::cout <<"B"<<std::endl;
    std::cout <<B<<std::endl;
    std::cout << "\n";

    //Ecuacion a resolver
    X=((B*3*A)-(A*4))/2;
    std::cout << "X\n"<<X<<std::endl;
    std::cout << "\n\n";
}
void Opcion3(){
    std::cout <<"\n";
    std::cout <<"AX B(T) = C \n"<<std::endl;

    //Matrices inicializadas con valores de la pagina
    A << -3, -2,
         3, 3;
    B << 5, 3,
         9, 4;
    C << 1, 1,
         0, 0;

    std::cout <<"A"<<std::endl;
    std::cout <<A<<std::endl;
    std::cout << "\n";
    std::cout <<"B"<<std::endl;
    std::cout <<B<<std::endl;
    std::cout << "\n";

    //Ecuacion a resolver
    X= A.inverse()*C*(B.transpose()).inverse();
    std::cout << "X\n"<<X<<std::endl;
    std::cout << "\n\n";
}
void Opcion4(){
    std::cout <<"\n";
    std::cout <<"XA = B \n"<<std::endl;

    //Matrices inicializadas con valores de la pagina
    A << 2, 1,
         -4, -3;
    B << 2, 2,
         6, 4;

    std::cout <<"A"<<std::endl;
    std::cout <<A<<std::endl;
    std::cout << "\n";
    std::cout <<"B"<<std::endl;
    std::cout <<B<<std::endl;
    std::cout << "\n";

    //Ecuacion a resolver
    X= B*(A.inverse());
    std::cout << "X\n"<<X<<std::endl;
    std::cout << "\n\n";
}
void Opcion5(){
    std::cout <<"\n";
    std::cout <<"X = 2(AB+C) \n"<<std::endl;

    //Matrices inicializadas con valores de la pagina
    AA << 3, 0, -1,
         0, 2, 1;
    BB << 1, 2,
          1, 0,
          0, 6;
    C << -2, 0,
         -2, -5;

    std::cout <<"A"<<std::endl;
    std::cout <<AA<<std::endl;
    std::cout << "\n";
    std::cout <<"B"<<std::endl;
    std::cout <<BB<<std::endl;
    std::cout << "\n";

    //Ecuacion a resolver
    X= 2*((AA*BB)+C);
    std::cout << "X\n"<<X<<std::endl;
    std::cout << "\n\n";
}
void Opcion6(){
    std::cout <<"\n";
    std::cout <<"X = A+3B\n"<<std::endl;

    //Matrices inicializadas con valores de la pagina
    A3 << 1, 5, -1,
         -1, 2, 2,
          0, -3, 3;
    B3 << -1, -4, 3,
           1, -2, -2,
          -3, 3, -5;

    std::cout <<"A"<<std::endl;
    std::cout <<A3<<std::endl;
    std::cout << "\n";
    std::cout <<"B"<<std::endl;
    std::cout <<B3<<std::endl;
    std::cout << "\n";

    //Ecuacion a resolver
    X3= A3+(3*B3);
    std::cout << "X\n"<<X3<<std::endl;
    std::cout << "\n\n";
}
void Opcion7(){
    std::cout <<"\n";
    std::cout <<"XA = B \n"<<std::endl;

    //Matrices inicializadas con valores de la pagina
    A3 << 2, 7, 3,
          3, 9, 4,
          1, 5, 3;
    B3 << 1, 0, 2,
          0, 1, 0,
          0, 0, 1;

    std::cout <<"A"<<std::endl;
    std::cout <<A3<<std::endl;
    std::cout << "\n";
    std::cout <<"B"<<std::endl;
    std::cout <<B3<<std::endl;
    std::cout << "\n";

    //Ecuacion a resolver
    X3= B3*(A3.inverse());
    std::cout << "X\n"<<X3<<std::endl;
    std::cout << "\n\n";
}
void Opcion8(){
    std::cout <<"\n";
    std::cout <<"AX = B \n"<<std::endl;

    //Matrices inicializadas con valores de la pagina
    A3 << 1, 1, 1,
          6, 5, 4,
          13, 10, 8;
    B3 << 0, 1, 2,
          1, 0, 2,
          1, 2, 0;

    std::cout <<"A"<<std::endl;
    std::cout <<A3<<std::endl;
    std::cout << "\n";
    std::cout <<"B"<<std::endl;
    std::cout <<B3<<std::endl;
    std::cout << "\n";

    //Ecuacion a resolver
    X3= (A3.inverse())*B3;
    std::cout << "X\n"<<X3<<std::endl;
    std::cout << "\n\n";
}
void Opcion9(){
    std::cout <<"\n";
    std::cout <<"X = A(T)A-2A \n"<<std::endl;

    //Matrices inicializadas con valores de la pagina
    A << 3, -1,
         0, 2;

    std::cout <<"A"<<std::endl;
    std::cout <<A<<std::endl;
    std::cout << "\n";

    //Ecuacion a resolver
    X=A.transpose()*A-2*A;
    std::cout << "X\n"<<X<<std::endl;
    std::cout << "\n\n";
}
void Opcion10(){
    std::cout <<"\n";
    std::cout <<"X = A(3) \n"<<std::endl;

    //Matrices inicializadas con valores de la pagina
    A << 4, 2,
        -1, 0;

    std::cout <<"A"<<std::endl;
    std::cout <<A<<std::endl;
    std::cout << "\n";

    //Ecuacion a resolver
    X=A*A*A;
    std::cout << "X\n"<<X<<std::endl;
    std::cout << "\n\n";
}
void Opcion11(){
    std::cout <<"\n";
    std::cout <<"A(T)XB = C\n"<<std::endl;

    //Matrices inicializadas con valores de la pagina
    A << 2, 4,
         3, 2;

    B << 1, 0,
         2, 1;

    C << 7, 5,
         6, 1;

    std::cout <<"A"<<std::endl;
    std::cout <<A<<std::endl;
    std::cout << "\n";
    std::cout <<"B"<<std::endl;
    std::cout <<B<<std::endl;
    std::cout << "\n";
    std::cout <<"C"<<std::endl;
    std::cout <<C<<std::endl;
    std::cout << "\n";

    //Ecuacion a resolver
    X=(A.transpose()).inverse()*C*B.inverse();
    std::cout << "X\n"<<X<<std::endl;
    std::cout << "\n\n";
}
void Opcion12(){
    std::cout <<"\n";
    std::cout <<"X = AA(T)-2AB \n"<<std::endl;

    //Matrices inicializadas con valores de la pagina
    AAE << 1, 0, -2,
           2, -1, 3;
    BB << 2, -3,
         -2, 0,
         -1,-2;

    std::cout <<"A"<<std::endl;
    std::cout <<AAE<<std::endl;
    std::cout << "\n";
    std::cout <<"B"<<std::endl;
    std::cout <<BB<<std::endl;
    std::cout << "\n";

    //Ecuacion a resolver
    X= AAE*AAE.transpose()-2*AAE*BB;
    std::cout << "X\n"<<X<<std::endl;
    std::cout << "\n\n";
}
void Opcion13(){
    std::cout <<"\n";
    std::cout <<"X = ABC \n"<<std::endl;

    //Matrices inicializadas con valores de la pagina
    AE << 4,8,12;
    BE << 3, 2,
         0, 1,
         -1,0;
    CE << 3,
         -1;

    std::cout <<"A"<<std::endl;
    std::cout <<AE<<std::endl;
    std::cout << "\n";
    std::cout <<"B"<<std::endl;
    std::cout <<BE<<std::endl;
    std::cout << "\n";
    std::cout <<"C"<<std::endl;
    std::cout <<CE<<std::endl;
    std::cout << "\n";

    //Ecuacion a resolver
    XE= AE*BE*CE;
    std::cout << "X\n"<<XE<<std::endl;
    std::cout << "\n\n";
}
void Opcion14(){
    std::cout <<"\n";
    std::cout <<"XA = B \n"<<std::endl;

    //Matrices inicializadas con valores de la pagina
    A3 << 2, 5, 7,
         6, 3, 4,
         5, -2, -3;
    B3 << -1, 1, 0,
          0, 1, 1,
          1, 0, -1;


    std::cout <<"A"<<std::endl;
    std::cout <<A3<<std::endl;
    std::cout << "\n";
    std::cout <<"B"<<std::endl;
    std::cout <<B3<<std::endl;
    std::cout << "\n";

    //Ecuacion a resolver
    X3= B3*(A3.inverse());
    std::cout << "X\n"<<X3<<std::endl;
    std::cout << "\n\n";
}
void Opcion15(){
    std::cout <<"\n";
    std::cout <<"AX = B \n"<<std::endl;

    //Matrices inicializadas con valores de la pagina
    A4 << 1,1,1,1,
          1,1,-1,-1,
          1,-1,1,-1,
          1,-1,-1,1;
    B4 << 1,1,0,0,
          1,0,1,0,
          1,0,0,1,
          1,0,1,1;
    std::cout <<"A"<<std::endl;
    std::cout <<A4<<std::endl;
    std::cout << "\n";
    std::cout <<"B"<<std::endl;
    std::cout <<B4<<std::endl;
    std::cout << "\n";

    //Ecuacion a resolver
    X4= (A4.transpose())*B4;
    std::cout << "X\n"<<X4<<std::endl;
    std::cout << "\n\n";
}
int main(){
    //Se crea la variable opcion para manejar el switch
    int opcion;
    //Se crea la variablke bol para manipular el while
    int bol = 1;

    //Se crea un while para tener en bucle las opciones
    //hasta que el usuario de salir(opcion 1)
    while (bol==1){
       std::cout << "Bienvenido escoja una de las siguientes opciones … \n\n";
       std::cout << "0) Salir\n\n";
       std::cout << "1) X = 3A-4B \n";
       std::cout << "2) 2X+4A = 3BA \n";
       std::cout << "3) AX B(T) = C \n";
       std::cout << "4) XA = B\n";
       std::cout << "5) X = 2(AB+C) \n";
       std::cout << "6) X = A+3B \n";
       std::cout << "7) XA = B \n";
       std::cout << "8) AX = B \n";
       std::cout << "9) X = A(T)A-2A  \n";
       std::cout << "10) X = A(3)  \n";
       std::cout << "11) A(T)XB = C\n";
       std::cout << "12) X = AA(T)-2AB \n";
       std::cout << "13) X = ABC\n";
       std::cout << "14) XA = B\n";
       std::cout << "15) AX = B \n";
       std::cin >> opcion;
        switch(opcion)
        {
           case 0:
              bol=0;
              break;
           case 1:
              Opcion1();
              break;
           case 2:
              Opcion2();
              break;
            case 3:
              Opcion3();
              break;
            case 4:
                Opcion4();
               break;
            case 5:
               Opcion5();
               break;
            case 6:
               Opcion6();
               break;
            case 7:
               Opcion7();
               break;
            case 8:
                Opcion8();
                break;
            case 9:
                Opcion9();
                break;
            case 10:
                Opcion10();
                break;
            case 11:
               Opcion11();
               break;
            case 12:
               Opcion12();
               break;
             case 13:
               Opcion13();
               break;
             case 14:
                Opcion14();
                break;
             case 15:
                Opcion15();
                break;
           default:
              std::cout << "La opcion escogida no es válida.\n";
        }
    }
    return 0;
}
