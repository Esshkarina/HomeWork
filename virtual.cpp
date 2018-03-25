#include <iostream>
using namespace std;

class Shape //Абстрактный класс (интерфйсный и базовый для других классов)
{
	public:
		virtual void rotate (int) = 0; //Чисто виртуальная функция
		virtual void draw () =0; //Чисто виртуальная функция
		virtual bool is_closed () = 0; //Чисто виртуальная функция
		// ...
};


//Пример применения абстрактного класса

class Point { /* ...*/};
class Circle: public Shape
{
	public:
		void rotate (int) {} //Замещает Shape::rotate
		void draw (); //Замещает Shape::draw
		bool is_closed () {return true;} //Замещает Shape::is_closed
		
		Circle (Point p, int r);
		
	private:
		Point center;
		int radius;
};


