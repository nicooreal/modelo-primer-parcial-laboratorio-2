#include <iostream>
#include "Estudiante.h"
#include "ModeloParcial1.h"
#include "EstudiantesArchivo.h"
#include "ExamenesArchivo.h"
using namespace std;

int main()
{
EstudiantesArchivo estArch;
ExamenesArchivo examArch;
ModeloParcial1 modeloParcial(1,2);


examArch.mostrarTodoElArchivo();

modeloParcial.Punto3();




//ModeloParcial1 ModeloParcial1(1,2);
//mod.Punto1();
//mod.Punto2();
//mod.Punto3();
    return 9;
}
