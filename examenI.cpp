#include "examen.cpp"
#include <iostream>
using namespace std;

class Estudiante: Alumno{
//atributos
        private: int nota;
// //Crear un programa que le solicite al usuario ingresar N cantidad de estudiantes (C�digo, nombres, apellidos, Curso ,nota1, nota2, nota3, nota4 )
 // y que calcule autom�ticamente el promedio; y si la nota es superior a 60 que indique que el estudiante aprob� caso contrario que indique que reprob�.
 //Aplicar los Paradigmas de la Programaci�n Orientada a Objetos


        // constructor
        public:
        Estudiante(){
        }

        Estudiante(string nom, string ape, string cur, int nt1,int nt2, int nt3, int nt4, int prom): Alumno(nom, ape, cur, nt1, nt2, nt3, nt4, prom){
        nota = n;

        }


    void mostrar(){
    };
};
