#include <iostream>
#include <string>
using namespace std;
struct price{
   string tovar;
 string magaz;
   int num;
   bool operator()(int a){
       num=a;
       return 0;
       }
   bool operator()(int a,string b){
       num=a;tovar=b;
       return 0;
       }
   bool operator()(int a,string b,string c){
       num=a;tovar=b;magaz=c;
       return 0;
       }   
   bool iseecity(){
       cout<<"Nazvanie tovara - "<<tovar;
       cout<<"/tMagazin - "<<magaz;
       cout<<"/tStoimost -"<<num<<endl;
       return 0;}
   bool iseebycity(){
       cout<<"/tMagazin - "<<magaz<<"; ";
       cout<<"/tStoimost - "<<num<<endl;
       return 0;
       }   
   };
bool findcity(string str,price* a){
   bool key=0;
   for(size_t i=0;i!=7;++i){
       if(str==(a[i].tovar)){
           a[i].iseebycity();
           key=1;}
       }
   return key;
   }
int main(){
 
   price air[7];
   int x1;
 int dann;
   string x2,x3;
   cout<<"Vvedite skolko raz hotite vvesti dannie:";
 cin>>dann;
   for(size_t i=0; i!=dann;++i){
       cout<<"Vvedite "<<(i+1)<<" stoimost, tovar i magazin: ";
       cin>>x1>>x2>>x3;
       air[i](x1,x2,x3);
       }
   string word;    
 for(size_t i=0;i!=dann;++i){
 for(size_t j=i+1;j!=dann;++j){
           if((air[i].tovar)>(air[j].tovar)){
               word=air[i].tovar;
               air[i].tovar=air[j].tovar;
               air[j].tovar=word;}                  
           }
       }
   for(size_t i=0;i!=dann;++i){air[i].iseecity();}
   string plane;
   cout << "Vvedite nazvanie tovara ";
   cin>>plane;
   if(!findcity(plane,air)){
   cout<<"V yacheike nichego net"<<endl;
 }
system("pause");
   return 0;
   }
