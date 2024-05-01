#ifndef PATIENT_H
#define PATIENT_H

#include <string>

class Patient {
private:
    int appointmentId;
    std::string patientName;
    double doctorCharge;
    double hospitalCharge;

public:
    Patient(int appointmentId, const std::string& patientName, double doctorCharge);

    void setPatientDetails(int appointmentId, const std::string& patientName);
    void setDoctorCharge(double doctorCharge);
    void setHospitalCharge(double hospitalCharge);

    void displayPatientDetails() const;

    double calculateTotalPayment() const;
};

#endif 
