#include <iostream>
#include <string.h>
#include <Windows.h>
using namespace std;
class car {char marka[20]; unsigned int  power; long int price; 
			public:
				car(); // без параметров
				car(char mrk[20], unsigned int  pwr, long int prc);
				car(char mrk[20], unsigned int  pwr);
				car(char mrk[20]);
			void set();
			void setMarka();
			void setPower();
			void setPrice();
			void show();
			char* getMarka();
			unsigned int getPower();
		    long	int getPrice();
		  };
		  
		  car::car() // конструктор
		  {
			strcpy(marka, "LADA XRAY");
		  	power=106;
		  	price=398000;
		  }	  
		  car::car(char mrk[20], unsigned int  pwr, long int prc)
		  {
		  	strcpy(marka, mrk);
		  	power=pwr;
		  	price=prc;
		  }
		   car::car(char mrk[20], unsigned int  pwr)
		  {
		  	strcpy(marka, mrk);
		  	power=pwr;
		  }
		     car::car(char mrk[20])
		  {
		  	strcpy(marka, mrk);
		  }
		  void car::setMarka() 
		  {
			cout<<"Введите марку: ";
			char mrk[20]; cin>>mrk;	strcpy(marka,mrk);
		  }
		  void car::setPower()
		  {
		  	cout<<"Введите мощность: ";		unsigned int pwr; cin>>pwr;	power=pwr;
		  }
			void car::setPrice()
		  {
			cout<<"Введите цену: ";  	long int prc; 	cin>>prc;	price=prc;
	      }
	      

	      
	     
	      void car::show() 
		  {
			cout<<"Марка: "<<marka;
			cout<<"\nМощность: "<<power;
			cout<<"\nЦена: "<<price<<endl;
			}
			unsigned int car::getPower() 
				{
					return power;
				}
			char* car::getMarka() 
				{
					return marka;
				}
	        long	int car::getPrice()
				{
					return price;
				}
		
			main() 
			{
				SetConsoleCP(1251);
				SetConsoleOutputCP(1251);		
				car marka1, marka2;
				cout<<"Данные marka1\n"; marka1.show();
				cout<<"Данные marka2\n"; marka2.show();
				marka1.set();
				cout<<"\nИзмененные данные marka2\n";	marka2.show();
				cout<<"\n marka2: "<<marka2.getMarka();
				cout<<"\npower marka2: "<<marka2.getPower();
				cout<<"\nprice marka2: "<<marka2.getPrice();
			}
