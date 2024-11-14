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
//		cout << "Название пиццы: " << pizzaName << endl;
//		cout << "Составляющие пиццы: " << endl;
//		cout << "-Тесто: " << testo << endl;
//		cout << "-Соус: " << sauce << endl;
//		cout << "-Сыр: " << cheese << endl;
//		cout << "-Начинка: " << nachinka << endl;
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
//		pizza.setName("Маргарита");
//		return this;
//	}
//
//	MargaritaBuilder letsSetTesto() override {
//		pizza.setTesto("Толстое");
//	}
//
//	MargaritaBuilder letsSetSauce() override {
//		pizza.setSauce("Томатный");
//	}
//
//	MargaritaBuilder letsSetCheese() override {
//		pizza.setCheese("Сулугуни");
//	}
//
//	MargaritaBuilder letsSetNachinka() override {
//		pizza.setNachinka("Томаты, Базилик, Кинза");
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
//		pizza.setName("Пепперони");
//	}
//
//	void letsSetTesto() override {
//		pizza.setTesto("Тонкое");
//	}
//
//	void letsSetSauce() override {
//		pizza.setSauce("Томатный");
//	}
//
//	void letsSetCheese() override {
//		pizza.setCheese("Моцарела");
//	}
//
//	void letsSetNachinka() override {
//		pizza.setNachinka("Пепперони, Перец");
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
//	PepperoniBuilder pepperoniBuilder; //создаем пеперонистроителя
//	PizzaChef chef; //создаем шефа который будет делать пиццу по рецепту пеперонистроителя
//	chef.makePizza(pepperoniBuilder);// шеф готовит пиццу! создал. и тут он как бы получает рецепт
//	Pizza pepperoniPizza = pepperoniBuilder.letsGetPizza();// передаем пиццу для отображения на экран
//	pepperoniPizza.show();//показываю состовляющие пиццы
//
//	cout << "-----------------------------------------" << endl;
//
//	MargaritaBuilder margaritaBuilder;
//	chef.makePizza(margaritaBuilder);
//	Pizza margaritaPizza = margaritaBuilder.letsGetPizza();
//	margaritaPizza.show();
//
//}