#include <iostream>
#include<string>
using namespace std;

class Employee
{
	string first_name, family_name;
	short departament;
	char middle_initial;
	
	public:

		string full_name () const
		{return first_name+' '+middle_initial+' '+family_name;};
		
	public:
	Employee(const string&n, int d);
		virtual void print() const;
	
	Employee& operator = ( const Employee&);
	Employee (const Employee&);
	
	
};











class Manager : public Employee
{

	short level;

	public:
		void print () const;
		
	public:
		Manager (const string &n, int d, int lvl);
	

};


void Manager :: print () const
{
	cout<<"name is"<<full_name()<< '\n';
	
	Employee::print(); //Вывести общую информацию, характерную для любого сотрудника
	cout<<"\tlevel"<<level<<'\n';
}
void f (const Manager& m)
{
	Employee e=m; //Копируем e из Employee-части m
	e = m; // присваиваем Employ-часть m объекту e
}


 


int main (){
	Employee e ("Brown",1234);
	Manager m ("Smith",1234,4);

return 0;	
}
