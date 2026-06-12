#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Estudiante
{
    string nombre;
    float nota;
};

int main()
{
    vector<Estudiante> listaAlumnos;
    int cantidad;

    cout << "--- SISTEMA DE REGISTRO DE NOTAS ---" << endl;
    cout << "¿Cuantos alumnos desea registrar? ";
    cin >> cantidad;

    for (int i = 0; i < cantidad; i++)
    {
        Estudiante temp;

        cout << "\nEstudiante #" << i + 1 << endl;

        cout << "Nombre: ";
        cin >> temp.nombre;

        cout << "Nota: ";
        cin >> temp.nota;

        listaAlumnos.push_back(temp);
    }

    cout << "\n--- REPORTE FINAL ---" << endl;

    float suma = 0;

    for (int i = 0; i < listaAlumnos.size(); i++)
    {

        cout << "Alumno: " << listaAlumnos[i].nombre
             << " Nota: " << listaAlumnos[i].nota;

        if (listaAlumnos[i].nota >= 11)
            cout << " [APROBADO]";
        else
            cout << " [DESAPROBADO]";

        cout << endl;

        suma += listaAlumnos[i].nota;
    }

    float promedio = suma / listaAlumnos.size();

    cout << "\nPromedio general: " << promedio << endl;

    return 0;
}
