#include <iostream>
#include <cmath>
#include <vector>

// 1. GLOBAL CONSTANT (The "magic 9" turned into a business rule)
const double PEAK_CAPACITY = 9.0;

// --- BUSINESS MODULES ---
//We use std::vector<double>

// Module 1: Operational Slack (Formerly: Constant C)
double calculateFreeCapacity(double demand_tickets) {
    double half = demand_tickets / 2.0;
    // Uses PEAK_CAPACITY instead of the isolated number 9
    double c = PEAK_CAPACITY - (half * half); 
    return c;
}

// Module 2: Delivery Zone Validation (Formerly: Circle Operation)
bool isDeliveryInZone(double client_x, double client_y, double rest_x, double rest_y, double delivery_radius) {
    // LOGIC CHALLENGE: Change "==" to "<=" to cover the ENTIRE area inside the radius.
    bool result = ((std::pow(client_x - rest_x, 2)) + (std::pow(client_y - rest_y, 2))) <= (std::pow(delivery_radius, 2));
    return result;
}


std::vector<double> readPolynomial(){
    
    std::cout<< ""
    
    std::vector<double> values;
    
    for ()


}






    
// --- MAIN ENGINE (INTERACTIVE MENU) ---

int main() {
    int choice = -1; 
    
    while (choice != 0) {
        std::cout << "\n=== Predictive POS Engine ===" << std::endl;
        std::cout << "1. Calculate operational slack" << std::endl;
        std::cout << "2. Validate delivery zone" << std::endl;
        std::cout << "0. Exit" << std::endl;
        std::cout << "Choose an option: ";
        
        std::cin >> choice; 
        
        // TODO: If the user enters a letter, std::cin breaks. (Mandatory technical debt).

        if (choice == 1) {
            double demand;
            std::cout << "Enter shift demand: ";
            std::cin >> demand;
            
            double freeCapacity = calculateFreeCapacity(demand);
            std::cout << "Operational slack: " << freeCapacity << std::endl;
        } 
        else if (choice == 2) {
            double cx, cy, rx, ry, rad;
            
            std::cout<<"Enter client coordinates: ";
            std::cin>>cx>>cy;

            std::cout<<"Enter restaurant coordinates: ";
            std::cin>>rx>>ry;

            std::cout<<"Enter radius: ";
            std::cin>>rad;
        
        if(isDeliveryInZone(cx,cy,rx,ry,rad)){
            std::cout<<"Inside the zone";
        }
        else{
            std::cout<<"Outside zone";
        }
        
            
        }
        else if (choice == 0) {
            std::cout << "Shutting down engine..." << std::endl;
        } 
        else {
            std::cout << "Error: Invalid option. Try again." << std::endl;
        }
    }
    return 0; 




}

