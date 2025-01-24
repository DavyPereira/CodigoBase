#include <iostream>
using std::cout;
using std::endl;

#include "BasePlusCommissionEmployee.h"

int main() {
    // Criação de um objeto BasePlusCommissionEmployee
    BasePlusCommissionEmployee employee("John", "Doe", "123-45-6789", 10000, 0.06, 500);

    // Exibe os detalhes do empregado
    employee.print();

    // Exibe os ganhos
    cout << "\nEarnings: " << employee.earnings() << endl;

    return 0;
}
