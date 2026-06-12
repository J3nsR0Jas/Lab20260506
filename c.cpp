#include <iostream>
#include <string>

struct RegistroLago {
    std::string nombre;
    double profundidadMax;
    double temperaturaAgua;
};

int main() {
    RegistroLago miLago;

    // Entrada de datos directa
    std::cout << "Introduce el nombre del lago: ";
    std::getline(std::cin, miLago.nombre);

    std::cout << "Introduce la profundidad maxima (metros): ";
    std::cin >> miLago.profundidadMax;

    std::cout << "Introduce la temperatura del agua (C): ";
    std::cin >> miLago.temperaturaAgua;

    // Salida de datos directa
    std::cout << "\nDatos del lago guardados:\n";
    std::cout << "Nombre: " << miLago.nombre << "\n";
    std::cout << "Profundidad: " << miLago.profundidadMax << " m\n";
    std::cout << "Temperatura: " << miLago.temperaturaAgua << " C\n";

    return 0;
}