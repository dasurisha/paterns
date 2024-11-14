#include <iostream>
#include <string>
using namespace std;


class ValidationStrategy {
public:
	virtual bool validate(const string& data) const = 0;
};

// проверка на пустоту
class EmptyValidationStrategy : public ValidationStrategy {
public:
	bool validate(const string& data) const override {
		return data.empty();
	}
};

// проверка длины
class LengthValidationStrategy : public ValidationStrategy {
private:
	int minLength;
	int maxLength;

public:
	LengthValidationStrategy(int minLength, int maxLength)
		: minLength(minLength), maxLength(maxLength) {}

	bool validate(const string& data) const override {
		return data.size() >= minLength && data.size() <= maxLength;
	}
};

// проверка email-адрес
class EmailValidationStrategy : public ValidationStrategy {
public:
	bool validate(const string& data) const override {
		return data.find('@') != string::npos;
	}
};


class Validator {
private:
	const ValidationStrategy& strategy;

public:
	Validator(const ValidationStrategy& strategy) : strategy(strategy) {}

	bool validate(const string& data) const {
		return strategy.validate(data);
	}
};

int main() {
	setlocale(0, "ru");

	EmptyValidationStrategy emptyValidation;
	LengthValidationStrategy lengthValidation(5, 10);
	EmailValidationStrategy emailValidation;


	Validator validator1(emptyValidation);
	Validator validator2(lengthValidation);
	Validator validator3(emailValidation);


	string data1 = "233";
	string data2 = "Red applelljhhuugiy";
	string data3 = "test#example.ru";

	cout << "Data 1: " << (validator1.validate(data1) ? "Valid" : "Invalid") << endl;
	cout << "Data 2: " << (validator2.validate(data2) ? "Valid" : "Invalid") << endl;
	cout << "Data 3: " << (validator3.validate(data3) ? "Valid" : "Invalid") << endl;

}
