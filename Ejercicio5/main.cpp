#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <deque>

int main() {
    // Vector
    std::cout << "Presione Enter para ver el vector..." << std::endl;
    std::cin.get(); // Espera a que el usuario presione Enter
    std::vector<int> numeros {1, 2, 3, 4, 5};
    std::cout << "Elementos del vector: ";
    for (const auto& numero : numeros) {
        std::cout << numero << " ";
    }
    numeros.push_back(6);

    // Map
    std::cout << "Presione Enter para ver el mapa..." << std::endl;
    std::cin.get(); // Espera a que el usuario presione Enter
    std::map<std::string, int> edad;
    std::cout << "Edad de Juan: " << edad["Juan"] << std::endl;
    edad["Juan"] = 25;
    edad.erase("Juan");

    // Set
    std::cout << "Presione Enter para ver el conjunto..." << std::endl;
    std::cin.get(); // Espera a que el usuario presione Enter
    std::set<int> conjunto {1, 2, 3, 4, 5};
    std::cout << "Elementos del conjunto: ";
    for (const auto& numero : conjunto) {
        std::cout << numero << " ";
    }
    conjunto.insert(6);
    conjunto.erase(1);

    // Deque
    std::cout << "Presione Enter para ver el deque..." << std::endl;
    std::cin.get(); // Espera a que el usuario presione Enter
    std::deque<double> precios {10.5, 20.3, 15.8};
    precios.push_front(5.2);

    // Imprimir elementos del deque
    std::cout << "Elementos del deque: ";
    for (const auto& precio : precios) {
        std::cout << precio << " ";
    }
    std::cout << std::endl;

    std::cout << "Fin del programa. Presione Enter para salir..." << std::endl;
    std::cin.get(); // Espera a que el usuario presione Enter

    return 0;
}