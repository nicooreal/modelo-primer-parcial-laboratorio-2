#include "ModeloParcial1.h"
#include "Fecha.h"
#include "ExamenesArchivo.h"
#include "Examen.h"

#include "Estudiante.h"
#include "EstudiantesArchivo.h"

#include <iostream>
using namespace std;

//Mostrar legajo, apellidos y nombres de aquellos estudiantes que no hayan rendido ningún examen en el año 2022.

int cantidad;
float promedio;

ModeloParcial1::ModeloParcial1( int cantidad, float promedio ) {
_cantidad = cantidad;
_promedio = promedio;




}



void ModeloParcial1::Punto1()
{
    ExamenesArchivo examenArch;
    EstudiantesArchivo estudianteArch;
    int largoDelArchivoEstudiante = estudianteArch.getCantidad();
    int largoDelArchivoExamen = examenArch.getCantidad();
    for (int i = 0; i < largoDelArchivoEstudiante; i++)
    {


        for (int y = 0; y < largoDelArchivoExamen; y++)
        {

            if (examenArch.leer(y).getLegajo() == estudianteArch.leer(i).getLegajo()   && examenArch.leer(y).getFecha().getAnio() == 2022 )
            {
                break;
            }
            //si nunca aparece el 2022 muestro el nombre

            if (y ==  largoDelArchivoExamen - 1)
            {
                cout << estudianteArch.leer(i).getApellidos()<< endl;
                cout << estudianteArch.leer(i).getNombres()<< endl;
                cout << estudianteArch.leer(i).getLegajo()<< endl;
                cout <<"-----------------------------------------------"<< endl<< endl;


            }
        }

    }

}



void ModeloParcial1::Punto2()
{
//Por cada alumno listar legajo, apellidos, nombres, cantidad de exámenes aprobados (nota >=6) y cantidad de exámenes desaprobados. Utilizar el siguiente formato:

EstudiantesArchivo estArch;
ExamenesArchivo examArch;

int largoDelArchivoExamen = examArch.getCantidad();
int largoDelArchivoAlumno = estArch.getCantidad();


for (int i = 0; i < largoDelArchivoAlumno; i++){

int examenesDesaprobados = 0;
int examenesAprobados = 0;

for (int j = 0; j < largoDelArchivoExamen; j++){


    if (examArch.leer(j).getLegajo() == estArch.leer(i).getLegajo() ) {

if (examArch.leer(j).getNota() >= 6  ) {examenesAprobados ++;} else { examenesDesaprobados++;};

    }
}

    cout << estArch.leer(i).getNombres() << endl;
    cout << estArch.leer(i).getApellidos() << endl;
    cout << estArch.leer(i).getLegajo() << endl;
    cout << "cantidad de examenes aprobados: " << examenesAprobados << endl;
    cout <<"cantidad de examenes desaprobados: " << examenesDesaprobados << endl;

cout << endl<< endl;
}




}

void ModeloParcial1::Punto3()
{
//Listar la cantidad de alumnos que hayan rendido examen más de una vez para la misma materia entre los años 2018 y 2022 (ambos años inclusive).


ExamenesArchivo examenArch;
    EstudiantesArchivo estudianteArch;
    int largoDelArchivoEstudiante = estudianteArch.getCantidad();
    int largoDelArchivoExamen = examenArch.getCantidad();
    int vecMaterias[60] {};
    int cantidadAlumnos = 0;



    for (int i = 0; i < largoDelArchivoEstudiante; i ++)
    {

  vecMaterias[60] = {};

        for (  int j = 0; j < largoDelArchivoExamen; j++ )
        {

            if ( examenArch.leer(j).getLegajo() == estudianteArch.leer(i).getLegajo() && examenArch.leer(j).getFecha().getAnio() >= 2018 &&  examenArch.leer(j).getFecha().getAnio() <= 2022 )
            {

                vecMaterias[examenArch.leer(j).getIDMateria() - 1]++;

            }

        }
        for (int x = 0; x < 60; x ++)
        {


            if ( vecMaterias[x] > 1 )
            {
                cantidadAlumnos++;
             x = 60;
            }

        }

}
cout <<" la cantidad de alumnos con materias repetidas entre 2018 y 2022 es :" << cantidadAlumnos;

}
void ModeloParcial1::MostrarExamenesPorAlumno(){

ExamenesArchivo examArch;
EstudiantesArchivo estudArch;


int largoDelArchivoAlumnos = estudArch.getCantidad();
int largoDelArchivoExamen = estudArch.getCantidad();


for (int i = 0; i < largoDelArchivoAlumnos; i++){

   estudArch.leer(i).mostrarTodo();
    cout << endl;

    for (int j = 0; j < largoDelArchivoExamen;j++){

          if (estudArch.leer(i).getLegajo()  == examArch.leer(j).getLegajo()) {

         examArch.leer(j).mostrarTodo();

          }

    }

    cout <<"--------------------------------------------"<< endl;
}




}

