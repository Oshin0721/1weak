#include <iostream>
#include <vector>

using namespace std;

class Adventurer {
public:
	virtual  void useskill() = 0;
	virtual ~Adventurer() {}
};

class Warrior : public Adventurer {
public:
	void useskill() {
		cout << "Warrior uses Slash!" << endl;
	}
};

class Mage : public Adventurer {
	public:
	void useskill() {
		cout << "Mage casts Fireball!" << endl;
	}
};

class Archer : public Adventurer {
public:
	void useskill() {
		cout << "Archer shoots an Arrow!" << endl;
	}
};

int main() {
	vector<Adventurer*> adventurers;
	adventurers.push_back(new Warrior());
	adventurers.push_back(new Mage());
	adventurers.push_back(new Archer());
	
	for (size_t i = 0; i < adventurers.size(); ++i) {
		adventurers[i]->useskill();
	}
	
	for (size_t i = 0; i < adventurers.size(); ++i) {
		delete adventurers[i];
	}

	return 0;
}