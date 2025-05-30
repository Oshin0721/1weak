#include <iostream>

class Battery {
    private:
        int charge;

    public:
        Battery() {
            charge = 100;
        }
        
        int getCharge() const {
            return charge;
        }

        void useBattery() {
            if (charge >= 5) {
                charge -= 5;
            }
            else {
                charge = 0;
            }
            std::cout << "Battery used. charge : " << charge << "%.\n";
        }

        void chgargeBattery() {
            if (charge <= 93) {
                charge += 7;
            } else {
                charge = 100;
            }
			std::cout << "Battery charged. charge : " << charge << "%.\n";
        }
};



int main()
{
    Battery b;

	std::cout << "Initial battery charge: " << b.getCharge() << "%\n";

    b.useBattery();
    b.useBattery();
    b.chgargeBattery();
    b.useBattery();
}



