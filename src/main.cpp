#include <iostream>
#include <cmath>

// 1. CONSTANTE GLOBAL (El "9 mágico" convertido en regla de negocio)
const double PEAK_CAPACITY = 9.0;

// --- MÓDULOS DE NEGOCIO ---

// Módulo 1: Holgura Operativa (Antes: Constante C)
double calculateFreeCapacity(double demand_tickets) {
    double half = demand_tickets / 2.0;
    // Usa la constante PEAK_CAPACITY en lugar del número 9 aislado
    double c = PEAK_CAPACITY - (half * half); 
    return c;
}

// Módulo 2: Validación de Zona de Delivery (Antes: Operación del Círculo)
bool isDeliveryInZone(double client_x, double rest_x, double client_y, double rest_y, double delivery_radius) {
    // RETO LOGICO: Cambiar el "==" por "<=" para cubrir TODA el área interna del radio.
    bool result = ((std::pow(client_x - rest_x, 2)) + (std::pow(client_y - rest_y, 2))) <= (std::pow(delivery_radius, 2));
    return result;
}

// --- MOTOR PRINCIPAL (MENÚ INTERACTIVO) ---

int main() {
    int choice = -1; 
    
    while (choice != 0) {
        std::cout << "\n=== Motor Predictivo POS ===" << std::endl;
        std::cout << "1. Calcular holgura operativa" << std::endl;
        std::cout << "2. Validar zona de entrega" << std::endl;
        std::cout << "0. Salir" << std::endl;
        std::cout << "Elige una opcion: ";
        
        std::cin >> choice; 
        
        // TODO: Si el usuario ingresa una letra, cin se rompe. (Deuda técnica obligatoria).

        if (choice == 1) {
            double demand;
            std::cout << "Ingresa la demanda del turno: ";
            std::cin >> demand;
            
            // TU TURNO: 
            // 1. Llama a la función calculateFreeCapacity pasándole 'demand'
            // 2. Imprime el resultado con std::cout
            
        } 
        else if (choice == 2) {
            double cx, cy, rx, ry, rad;
            
            // TU TURNO: 
            // 1. Pide al usuario (cout) las coordenadas del cliente, restaurante y radio.
            // 2. Captura las 5 variables usando std::cin.
            // 3. Usa un condicional if() llamando a isDeliveryInZone. 
            // 4. Si es true imprime "DENTRO de zona". Si es false, "FUERA de zona".
            
        }
        else if (choice == 0) {
            std::cout << "Apagando motor..." << std::endl;
        } 
        else {
            std::cout << "Error: Opcion no valida. Intenta de nuevo." << std::endl;
        }
    }
    return 0; 
}