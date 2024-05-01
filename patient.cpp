#include "patient.h"
#include <iostream>

Patient::Patient(int appointmentId, const std::string& patientName, double doctorCharge)
    : appointmentId(appointmentId), patientName(patientName), doctorCharge(doctorCharge), hospitalCharge(0) {}

void Patient::setPatientDetails(int appointmentId, const std::string& patientName) {
    this->appointmentId = appointmentId;
    this->patientName = patientName;
}

void Patient::setDoctorCharge(double doctorCharge) {
    this->doctorCharge = doctorCharge;
}

void Patient::setHospitalCharge(double hospitalCharge) {
    this->hospitalCharge = hospitalCharge;
}

void Patient::displayPatientDetails() const {
    std::cout << "Appointment ID: " << appointmentId << std::endl;
    std::cout << "Patient Name: " << patientName << std::endl;
    std::cout << "Doctor Charge: $" << doctorCharge << std::endl;
    std::cout << "Hospital Charge: $" << hospitalCharge << std::endl;
}

double Patient::calculateTotalPayment() const {
    return doctorCharge + hospitalCharge;
}
