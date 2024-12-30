#include <iostream>
#include <vector>

using namespace std;

class Animal {
public:
	virtual void makeSound() = 0;
	virtual ~Animal() {}
};

class Dog : public Animal {
	void makeSound() {
		cout << "Dog : woof woof" << endl;
	}
};

class Cat : public Animal {
	void makeSound() {
		cout << "Cat : meow meow" << endl;
	}
};

class Cow : public Animal {
	void makeSound() {
		cout << "Cow : moo moo" << endl;
	}
};

int main() {
	Animal* animals[3];

	animals[0] = new Dog();
	animals[1] = new Cat();
	animals[2] = new Cow();

	for (int i = 0; i < 3; i++) {
		animals[i]->makeSound();
	}

	for (int i = 0; i < 3; ++i) {
		delete animals[i];
	}
	cout << round(1.2);

}