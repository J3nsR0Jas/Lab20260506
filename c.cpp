#include <iostream>
#include <string>

struct RegistroLago {
    std::string nombre = "Sin registrar";
    double profundidadMax = 0.0;
    double temperaturaAgua = 0.0;
    bool tieneDatos = false; // Nos ayuda a saber si ya se llenó el registro
};

int main() {
    RegistroLago miLago;
    int opcion;

    // Bucle do-while para que el menú se repita hasta que el usuario decida salir
    do {
        // --- MENÚ PRINCIPAL ---
        std::cout << "\n===================================\n";
        std::cout << "     MENU DE GESTION DE LAGOS      \n";
        std::cout << "===================================\n";
        std::cout << "1. Registrar / Modificar Lago\n";
        std::cout << "2. Ver Resumen del Lago\n";
        std::cout << "3. Salir\n";
        std::cout << "-----------------------------------\n";
        std::cout << "Selecciona una opcion: ";
        std::cin >> opcion;

        // Evaluamos la opción elegida
        switch (opcion) {
            case 1:
                std::cout << "\n--- NUEVO REGISTRO ---\n";
                
                // Limpiar el búfer antes de leer texto con getline
                std::cin.ignore(); 
                std::cout << "Introduce el nombre del lago: ";
                std::getline(std::cin, miLago.nombre);

                // VALIDACIÓN DE PROFUNDIDAD (No permite negativos ni cero)
                do {
                    std::cout << "Introduce la profundidad maxima (en metros): ";
                    std::cin >> miLago.profundidadMax;
                    if (miLago.profundidadMax <= 0) {
                        std::cout << "[ERROR] La profundidad debe ser mayor a 0 m.\n";
                    }
                } while (miLago.profundidadMax <= 0);

                // VALIDACIÓN DE TEMPERATURA (Límites lógicos para agua líquida/congelada)
                do {
                    std::cout << "Introduce la temperatura actual del agua (*C): ";
                    std::cin >> miLago.temperaturaAgua;
                    if (miLago.temperaturaAgua < -50.0 || miLago.temperaturaAgua > 100.0) {
                        std::cout << "[ERROR] Temperatura irreal. Introduce un valor entre -50 y 100 *C.\n";
                    }
                } while (miLago.temperaturaAgua < -50.0 || miLago.temperaturaAgua > 100.0);

                miLago.tieneDatos = true; // Marcamos que ya hay datos válidos guardados
                std::cout << "\n¡Datos guardados con exito!\n";
                break;

            case 2:
                std::cout << "\n-----------------------------------\n";
                if (miLago.tieneDatos) {
                    std::cout << "RESUMEN DEL REGISTRO:\n";
                    std::cout << "* Lago: " << miLago.nombre << "\n";
                    std::cout << "* Profundidad: " << miLago.profundidadMax << " m\n";
                    std::cout << "* Temperatura: " << miLago.temperaturaAgua << " *C\n";
                } else {
                    std::cout << "Aviso: Aun no hay ningun lago registrado. Elige la Opcion 1 primero.\n";
                }
                std::cout << "-----------------------------------\n";
                break;

            case 3:
                std::cout << "\nSaliendo del programa... ¡Hasta luego!\n";
                break;

            default:
                std::cout << "\n[ERROR] Opcion no valida. Intenta de nuevo.\n";
                break;
        }

    } while (opcion != 3); // El programa se repite mientras la opción no sea 3

    return 0;
}