#include <iostream>
#include <string>

// Definimos una estructura para agrupar los datos del lago
struct RegistroLago {
    std::string nombre;
    double profundidadMax;
    double temperaturaAgua;
};

int main() {
    RegistroLago miLago;

    std::cout << "--- REGISTRO DE BITÁCORA (LAGO) ---\n\n";

    // Pedir datos al usuario
    std::cout << "Introduce el nombre del lago: ";
    std::getline(std::cin, miLago.nombre);

    std::cout << "Introduce la profundidad máxima (en metros): ";
    std::cin >> miLago.profundidadMax;

    std::cout << "Introduce la temperatura actual del agua (°C): ";
    std::cin >> miLago.temperaturaAgua;

    std::cout << "\n-----------------------------------\n";
    std::cout << "¡Datos guardados con éxito!\n";
    std::cout << "-----------------------------------\n\n";

    // Mostrar los datos registrados
    std::cout << "RESUMEN DEL REGISTRO:\n";
    std::cout << "* Lago: " << miLago.nombre << "\n";
    std::cout << "* Profundidad: " << miLago.profundidadMax << " m\n";
    std::cout << "* Temperatura: " << miLago.temperaturaAgua << " °C\n";

    return 0;
}