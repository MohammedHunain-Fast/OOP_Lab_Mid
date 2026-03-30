#include <iostream>
#include <string>
using namespace std;

class Device {
    public:
        string model;
        string brand;
        
        Device(string model = "", string brand = "") 
            : model(model), brand(brand) {}
        
        void info() {
            cout << "I am a device!\n";
        }
}; 

class Smartphone : virtual public Device {
    public:
        int sim_slots;

        Smartphone(string model = "", string brand = "", int sim_slots = 0) 
            : Device(model, brand), sim_slots(sim_slots) {}
        
        void telltype() {
            cout << "I am a smartphone\n";
        }
};

class Tablet : virtual public Device {
    public:
        string stylus;

        Tablet(string model = "", string brand = "", string stylus = "") 
            : Device(model, brand), stylus(stylus) {}
        
        void about() {
            cout << "I am a Tablet!\n";
        }
};

class HybridDevice : public Smartphone, public Tablet {
    public:
        HybridDevice(string model, string brand, int sim_slots, string stylus) 
            : Device(model, brand),        // ✅ directly constructs shared Device
              Smartphone(model, brand, sim_slots),
              Tablet(model, brand, stylus) {}
        
        void tell() {
            cout << "I am a hybrid device!\n";
        }

        void displaydetails() const {
            cout << "Model: "     << model     << "\n" 
                 << "Brand: "     << brand     << "\n" 
                 << "Sim slots: " << sim_slots << "\n" 
                 << "Stylus: "    << stylus    << "\n";
        }
};

int main() {
    HybridDevice h1("Fold", "Samsung", 2, "foldable");
    h1.info();
    h1.telltype();
    h1.about();
    h1.tell();
    h1.displaydetails();

    return 0;
}
