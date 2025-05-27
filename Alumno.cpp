#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Alumno {
    string primerNombre;        // Primer nombre del alumno
    string primerApellido;      // Primer apellido del alumno
    string segundoApellido;     // Segundo apellido del alumno
    int cicloEstudio;           // Ciclo de estudio en el que se encuentra
    int numeroCedula;           // Número de cédula del alumno
    double* calificaciones;      // Puntero para almacenar las calificaciones
    int numCalif;               // Número de calificaciones
    double promedio;            // Promedio de las calificaciones
}
