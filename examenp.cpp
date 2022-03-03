//Crear un programa que le solicite al usuario ingresar N cantidad de estudiantes (Código, nombres, apellidos, Curso ,nota1, nota2, nota3, nota4 )
 // y que calcule automáticamente el promedio; y si la nota es superior a 60 que indique que el estudiante aprobó caso contrario que indique que reprobó.
 //Aplicar los Paradigmas de la Programación Orientada a Objetos
#include "examen.cpp"
#include <iostream>

using namespace std;
main (){

    string nombres, apellidos, curso;
    int nota_1;
                int nota_2;
                int nota_3;
                int nota_4;
                int promedio;

                cout<< "Ingresar Nombre:";
                cin>> nombres;

                cout<< "Ingresar Apellidos:";
                cin>> apellidos;

                cout<< "Ingresar Curso:";
                cin>> curso;

                cout<<" Ingresar la primera nota";
                cin>> nota_1;

                cout<< "Ingrear la segunda nota";
                cin>> nota_2;

                cout<< "Ingrear la tercer nota";
                cin>> nota_3;

                cout<< "Ingresar la cuarta nota";
                cin>> nota_4;

                //instancia del objeto

                promedio=(nota_1,nota_2,nota_3,nota_4)/4;

                if (promedio>=59){
                    cout<< endl;
                    cout<< "Alumno Reprobado";
                }
                else
                {
                    cout<< endl;
                    cout<<" Alumno Reprobado";

                }





                return 0;




}
