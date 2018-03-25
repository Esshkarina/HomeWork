#include <iostream>
using namespace std;


class BankAccount {
  public:
    void deposit(int summ) {
    	cout <<"Vvedite summy depozita"<< endl;
    	cin >> summ ;
    	balanse+=summ;
    }
  public:
    void withdraw(int summ){
    	cout <<"Vvedite summy spiseniya"<< endl;
    	cin >> summ ;
    	balanse-=summ;
    }
  private:
  	int balanse;
  	
  //  BankAccount (const BankAccount& c) {
  //  	deposit=c.deposit();
  //  	withdraw=c.withdraw();
    	
	}
    BankAccount (int nom=0){
    	deposit = nom;
	};
};



int main() 
{
  BankAccount David;
  return 0;
}
