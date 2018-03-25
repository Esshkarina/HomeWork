#include <iostream>
using namespace std;

class Test {
	private:
		int a,b,c;
		public:
			void s(int a, int b, int c){
				this ->a=a;
				this ->b=b;
				this -> c=c;
			};
		void d(){
			cout<<"A = "<<a<<endl<<"B = "<<b<<endl<<"C = "<<c<<endl;
		};
};

int main (){
	Test test;
	test.s(22,2,44);
	test.d();
	
	return 0;
}
