#include<iostream>
#include<conio.h>
using namespace std;
class Alumno {
    //atributos
    protected: string nombres, apellidos, curso;
                int nota_1;
                int nota_2;
                int nota_3;
                int nota_4;
                int promedio;
            // constructor
    protected:
            Alumno (){
            }
            Alumno(string nom, string ape, string cur, int nt1,int nt2, int nt3, int nt4, int prom){
               nombres= nom;
               apellidos= ape;
               curso= cur;
               nota_1=nt1;
               nota_2=nt2;
               nota_3=nt3;
               nota_4=nt4;
               promedio=prom;
            }
            //metodo

            void mostrar();





};
