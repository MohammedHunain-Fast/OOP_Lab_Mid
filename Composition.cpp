#include <iostream>
#include <string>
using namespace std;

class Room {
    private:
        string type;
    public:
    Room(string type) : type(type) {}

    void displayroom() const {
        cout << "Room type: " << type << endl;
    }
};

class House {
    private:
        string owner_name;
        Room living_room;
        Room bed_room;
    public:
        House(string owner_name, Room living_room, Room bed_room) : owner_name(owner_name), living_room(living_room), bed_room(bed_room) {}
        void displayhouse(){
            cout << "Owner name: " << owner_name << endl;
            living_room.displayroom();
            bed_room.displayroom();
        }
};

int main() {
    Room r1("Big LR"), r2("King sized Bed room");
    House h1("Hunain", r1, r2);
    h1.displayhouse();
    return 0;
}
