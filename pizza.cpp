//#include <iostream>
//#include <string>
//using namespace std;
//
//class Pizza {
//private:
//	string testo;
//	string sauce;
//	string cheese;
//	string nachinka;
//	string pizzaName;
//public:
//	void setName(const string& other) {
//		pizzaName = other;
//	}
//
//	void setTesto(const string& other) {
//		testo = other;
//	}
//
//	void setSauce(const string& other) {
//		sauce = other;
//	}
//
//	void setCheese(const string& other) {
//		cheese = other;
//	}
//	void setNachinka(const string& other) {
//		nachinka = other;
//	}
//
//	void show() {
//		cout << "�������� �����: " << pizzaName << endl;
//		cout << "������������ �����: " << endl;
//		cout << "-�����: " << testo << endl;
//		cout << "-����: " << sauce << endl;
//		cout << "-���: " << cheese << endl;
//		cout << "-�������: " << nachinka << endl;
//	}
//};
//
//class PizzaBuilder {
//public:
//	virtual void letSetName() = 0;
//	virtual void letsSetTesto() = 0;
//	virtual void letsSetSauce() = 0;
//	virtual void letsSetCheese() = 0;
//	virtual void letsSetNachinka() = 0;
//	virtual Pizza letsGetPizza() = 0;
//};
//
//class MargaritaBuilder : public PizzaBuilder {
//private:
//	Pizza pizza;
//public:
//	MargaritaBuilder* letSetName() override {
//		pizza.setName("���������");
//		return this;
//	}
//
//	MargaritaBuilder letsSetTesto() override {
//		pizza.setTesto("�������");
//	}
//
//	MargaritaBuilder letsSetSauce() override {
//		pizza.setSauce("��������");
//	}
//
//	MargaritaBuilder letsSetCheese() override {
//		pizza.setCheese("��������");
//	}
//
//	MargaritaBuilder letsSetNachinka() override {
//		pizza.setNachinka("������, �������, �����");
//	}
//
//	Pizza letsGetPizza() override {
//		return pizza;
//	}
//};
//
//class PepperoniBuilder : public PizzaBuilder {
//private:
//	Pizza pizza;
//public:
//	void letSetName() override {
//		pizza.setName("���������");
//	}
//
//	void letsSetTesto() override {
//		pizza.setTesto("������");
//	}
//
//	void letsSetSauce() override {
//		pizza.setSauce("��������");
//	}
//
//	void letsSetCheese() override {
//		pizza.setCheese("��������");
//	}
//
//	void letsSetNachinka() override {
//		pizza.setNachinka("���������, �����");
//	}
//
//	Pizza letsGetPizza() override {
//		return pizza;
//	}
//
//};
//
//class PizzaChef {
//public:
//	void makePizza(PizzaBuilder& builder) {
//		builder.letSetName();
//		builder.letsSetTesto();
//		builder.letsSetSauce();
//		builder.letsSetCheese();
//		builder.letsSetNachinka();
//	}
//};
//
//int main() {
//	setlocale(0, "ru");
//	PepperoniBuilder pepperoniBuilder; //������� �����������������
//	PizzaChef chef; //������� ���� ������� ����� ������ ����� �� ������� �����������������
//	chef.makePizza(pepperoniBuilder);// ��� ������� �����! ������. � ��� �� ��� �� �������� ������
//	Pizza pepperoniPizza = pepperoniBuilder.letsGetPizza();// �������� ����� ��� ����������� �� �����
//	pepperoniPizza.show();//��������� ������������ �����
//
//	cout << "-----------------------------------------" << endl;
//
//	MargaritaBuilder margaritaBuilder;
//	chef.makePizza(margaritaBuilder);
//	Pizza margaritaPizza = margaritaBuilder.letsGetPizza();
//	margaritaPizza.show();
//
//}