#include <iostream>
#include "patient.h"

int main() {

    Patient p1(1001, "Nimal", 1500);
    Patient p2(1002, "Sunil", 1700);

    p1.setHospitalCharge(500);
    p2.setHospitalCharge(500);

    std::cout << "Patient 1 Details:" << std::endl;
    p1.displayPatientDetails();
    std::cout << "Total Bill Payment: $" << p1.calculateTotalPayment() << std::endl;

    std::cout << "\nPatient 2 Details:" << std::endl;
    p2.displayPatientDetails();
    std::cout << "Total Bill Payment: $" << p2.calculateTotalPayment() << std::endl;

    return 0;
}
