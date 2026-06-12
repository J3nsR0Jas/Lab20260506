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
    int opcion;
    do 
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
        cout << "\n=======================================" << endl;
        cout << "   MENÚ - SISTEMA DE REGISTRO DE NOTAS " << endl;
        cout << "=======================================" << endl;
        cout << "1. Registrar alumnos y generar reporte" << endl;
        cout << "2. Salir del programa" << endl;
        cout << "---------------------------------------" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) 
        {
            case 1: 
            {
       
                vector<Estudiante> listaAlumnos;
                int cantidad;

                cout << "\n--- SISTEMA DE REGISTRO DE NOTAS ---" << endl;
                cout << "¿Cuantos alumnos desea registrar? ";
                cin >> cantidad;

                for (int i = 0; i < cantidad; i++)
                {
                    Estudiante temp;

                    cout << "\nEstudiante #" << i + 1 << endl;

                    cout << "Nombre completo: ";
                    cin.ignore(); 
                    getline(cin, temp.nombre); 

                    do 
                    {
                        cout << "Nota (0 a 20): ";
                        cin >> temp.nota;

                        if (temp.nota < 0 || temp.nota > 20) 
                        {
                            cout << "¡Error! La nota debe estar en el rango de 0 a 20. Intente de nuevo." << endl;
                        }
                    } while (temp.nota < 0 || temp.nota > 20);

                    listaAlumnos.push_back(temp);
                }

                cout << "\n--- REPORTE FINAL ---" << endl;

                float suma = 0;

                for (int i = 0; i < listaAlumnos.size(); i++)
                {
                    cout << "Alumno: " << listaAlumnos[i].nombre
                         << " | Nota: " << listaAlumnos[i].nota;

                    if (listaAlumnos[i].nota >= 11)
                        cout << " [APROBADO]";
                    else
                        cout << " [DESAPROBADO]";

                    cout << endl;

                    suma += listaAlumnos[i].nota;
                }

                float promedio = suma / listaAlumnos.size();

                cout << "\nPromedio general: " << promedio << endl;
                
                
                break;
            }
            case 2:
                cout << "\nSaliendo del sistema... ¡Hasta luego!" << endl;
                break;
            
            default:
                cout << "\n¡Opcion invalida! Por favor, elija 1 o 2." << endl;
                break;
        }

    } while (opcion != 2);

    return 0;
}
