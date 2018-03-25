#include <iostream>
using namespace std;

class Shape //����������� ����� (����������� � ������� ��� ������ �������)
{
	public:
		virtual void rotate (int) = 0; //����� ����������� �������
		virtual void draw () =0; //����� ����������� �������
		virtual bool is_closed () = 0; //����� ����������� �������
		// ...
};


//������ ���������� ������������ ������

class Point { /* ...*/};
class Circle: public Shape
{
	public:
		void rotate (int) {} //�������� Shape::rotate
		void draw (); //�������� Shape::draw
		bool is_closed () {return true;} //�������� Shape::is_closed
		
		Circle (Point p, int r);
		
	private:
		Point center;
		int radius;
};


