#include <iostream>
#include <fstream>
#include <iomanip>
#include <windows.h>

using namespace std;

void menu();



class Customers{
	
	public:
		string name, gender, address;
		int age, mobileNo;
		static int cusId;
		char all[999];
		
	void getDetails(){
		
		ofstream out("old-customers.txt", ios::app);
		{
			cout << "Enter customer ID : ";
			cin >> cusId;
			cout << "Enter Name : ";
			cin >> name;
			cout << "Enter Age : ";
			cin >> age;
			cout << "Enter Mobile No : ";
			cin >> mobileNo;
			cout << "Enter Address : ";
			cin >> address;
			cout << "Enter Gender : ";
			cin >> gender;
		}
		
		out << "\nCustome Id : " << cusId << "\nName : " << name << "\nAge : " << age << "\nMobile No : " << mobileNo << "\nAddress : " << address << "\nGender : " << gender << endl;
		out.close();
		cout << "\n SAVED \n Note: We Saved your details for future purposes"<<endl;
	}
	
	void showDetails(){
		ifstream in("old-customers.txt");
		{
			if(!in){
				cout << "File error" << endl;
			}
			while(!(in.eof())){
				in.getline(all, 999);
				cout << all << endl;
			}
			in.close();
		}
	}
	
};

int Customers::cusId;

class Cabs{
	
	public:
		int cabChoice;
		float kilometers;
		float cabCost;
		static float lastcabCost;
		
		void cabDetails(){
			cout << "We collaborated with the fasted and safest cab service"<<endl;
			cout<<"-----------ABC Cabs----------"<<endl<<endl;
			cout<<"1. Rent a standard cab - Rs. 15 for 1Km"<<endl;
			cout<<"2. Rent a luxury cab - Rs. 25 for 1Km"<<endl;
			
			cout<<"To calculate the cost of your journey"<<endl;
			cout<<"Enter the cab type (1/2) : ";
			cin >> cabChoice;
			cout<<"Enter kilometers to travel : ";
			cin >> kilometers;
			
			int hireCab;
			
			switch(cabChoice){
				case 1:{
					cabCost = kilometers * 15;
					cout<<"\nYour tour cost for a standard cab : Rs."<<cabCost<<endl;
					cout<<"Press 1 to hire the cab or press 2 to go back :";
					cin>> hireCab;
					system("CLS");
					switch(hireCab){
						case 1:{
							lastcabCost = cabCost;
							cout<<"You have successfully hired a standard cab"<<endl;
							cout<<"Goto menu and take the receipt"<<endl;
							break;
						}
						case 2:{
							cabDetails();
							break;
						}
						default:{
						    cout<<"Invalid input... Redirecting..."<<endl<<endl;
							Sleep(5000);
							system("CLS");
							cabDetails();
							break;
						}
					}
					break;
				}
				case 2:{
					cabCost = kilometers * 25;
					cout<<"\nYour tour cost for a luxury cab : Rs."<<cabCost<<endl;
					cout<<"Press 1 to hire the cab or press 2 to go back :";
					cin>> hireCab;
					system("CLS");
					switch(hireCab){
						case 1:{
							lastcabCost = cabCost;
							cout<<"You have successfully hired a luxury cab"<<endl;
							cout<<"Goto menu and take the receipt"<<endl;
							break;
						}
						case 2:{
							cabDetails();
							break;
						}
						default:{
							cout<<"Invalid input... Redirecting..."<<endl<<endl;
							Sleep(5000);
							system("CLS");
							cabDetails();
							break;
						}
					}
					break;
				}
				default:{
					cout<<"Invalid input... Redirecting..."<<endl<<endl;
					Sleep(5000);
					system("CLS");
					cabDetails();
					break;
				}
			}
			
			int gotomenu;
			cout<<"GOING TO MENU......."<<endl<<endl;
			Sleep(5000);
			cin>>gotomenu;
			menu();
		}
	
};

float Cabs::lastcabCost;

class Booking{
	public:
		int choiceHotel;
		int packChoice;
		static float hotelCost;
		
		void hotelBooking(){
			string hotels[] = {"Avenra", "Beach View", "Cloud Haven"};
			for(int i=0;i<3;i++){
				cout<<i+1<<". Hotel "<<"\'"<<hotels[i]<<"\'"<<endl;
			}
			
			cout<<"Currently we collaborated with above hotels"<<endl;
			cout<<"Press any 0 to go back "<<endl;
			cout<<"Press number of hotel you want to book : ";
			cin>>choiceHotel;
			
			system("CLS");
			
			switch(choiceHotel){
				case 1:{
					cout<<"------------Welcome to hotel Avenra---------------"<<endl<<endl;
					cout<<"The garden, food, beverages, playground. Enjoy all of these here at Avenra."<<endl;
					cout<<"Packages offered : "<<endl<<endl;
					cout<<"1. Standard Pack : \tAll basic facilities you need for Rs. 5000"<<endl;
					cout<<"2. Premium Pack : \tAll Premium facilities you need for Rs. 10000"<<endl;
					cout<<"3. Luxury Pack : \tAll luxury facilities you need for Rs. 15000"<<endl<<endl;
					
					cout<<"Press 0 to go back"<<endl;
					cout<<"Enter package number you want to choose : ";
					cin >> packChoice;
					
					switch(packChoice){
						case 1: {
							hotelCost = 5000.00;
							cout<<"You have successfully booked standard package at Avenra"<<endl;
							cout<<"Goto menu and take the receipt"<<endl;
							break;
						}
						case 2: {
							hotelCost = 10000.00;
							cout<<"You have successfully booked premium package at Avenra"<<endl;
							cout<<"Goto menu and take the receipt"<<endl;
							break;
						}
						case 3: {
							hotelCost = 15000.00;
							cout<<"You have successfully booked luxury package at Avenra"<<endl;
							cout<<"Goto menu and take the receipt"<<endl;
							break;
						}
						default:{
							system("CLS");
							hotelBooking();
							break;
						}
					}
					
					break;
				}
				case 2: {
					cout<<"------------Welcome to hotel Beach View---------------"<<endl<<endl;
					cout<<"The garden, food, beverages, playground. Enjoy all of these here at Beach View."<<endl;
					cout<<"Packages offered : "<<endl<<endl;
					cout<<"1. Standard Pack : \tAll basic facilities you need for Rs. 5000"<<endl;
					cout<<"2. Premium Pack : \tAll Premium facilities you need for Rs. 10000"<<endl;
					cout<<"3. Luxury Pack : \tAll luxury facilities you need for Rs. 15000"<<endl<<endl;
					
					cout<<"Press 0 to go back"<<endl;
					cout<<"Enter package number you want to choose : ";
					cin >> packChoice;
					
					switch(packChoice){
						case 1: {
							hotelCost = 4000.00;
							cout<<"You have successfully booked standard package at Beach View"<<endl;
							cout<<"Goto menu and take the receipt"<<endl;
							break;
						}
						case 2: {
							hotelCost = 11000.00;
							cout<<"You have successfully booked premium package at Beach View"<<endl;
							cout<<"Goto menu and take the receipt"<<endl;
							break;
						}
						case 3: {
							hotelCost = 16000.00;
							cout<<"You have successfully booked luxury package at Beach View"<<endl;
							cout<<"Goto menu and take the receipt"<<endl;
							break;
						}
						default:{
							system("CLS");
							hotelBooking();
							break;
						}
					}
					break;
				}
				case 3: {
					cout<<"------------Welcome to hotel Cloud Haven---------------"<<endl<<endl;
					cout<<"The garden, food, beverages, playground. Enjoy all of these here at Cloud Haven."<<endl;
					cout<<"Packages offered : "<<endl<<endl;
					cout<<"1. Standard Pack : \tAll basic facilities you need for Rs. 5000"<<endl;
					cout<<"2. Premium Pack : \tAll Premium facilities you need for Rs. 10000"<<endl;
					cout<<"3. Luxury Pack : \tAll luxury facilities you need for Rs. 15000"<<endl<<endl;
					
					cout<<"Press 0 to go back"<<endl;
					cout<<"Enter package number you want to choose : ";
					cin >> packChoice;
					
					switch(packChoice){
						case 1: {
							hotelCost = 7000.00;
							cout<<"You have successfully booked standard package at Cloud Haven"<<endl;
							cout<<"Goto menu and take the receipt"<<endl;
							break;
						}
						case 2: {
							hotelCost = 14000.00;
							cout<<"You have successfully booked premium package at Cloud Haven"<<endl;
							cout<<"Goto menu and take the receipt"<<endl;
							break;
						}
						case 3: {
							hotelCost = 25000.00;
							cout<<"You have successfully booked luxury package at Cloud Haven"<<endl;
							cout<<"Goto menu and take the receipt"<<endl;
							break;
						}
						default:{
							system("CLS");
							hotelBooking();
							break;
						}
					}
					break;
				}
			}		
			
			int gotomenu;
			cout<<"Press any key to go to menu : ";
			cin>>gotomenu;
			menu();
		}
};

float Booking::hotelCost;

class Charges : public Booking, Cabs, Customers{
	public:
		void printBill(){
			ofstream outf("receipt.txt");
			{
				outf<<"---------ABC Travel Agency-----------"<<endl;
				outf<<"-------------Receipt-------------"<<endl;
				outf<<"_________________________________"<<endl;
				
				outf<<"Customer Id : "<<Customers::cusId<<endl<<endl;
				outf<<"Description\t\t Total"<<endl;
				outf<<"Hotel Cost :\t\t "<<fixed<<setprecision(2)<<Booking::hotelCost<<endl;
				outf<<"Cab Cost :\t\t "<<fixed<<setprecision(2)<<Cabs::lastcabCost<<endl;
				
				outf<<"_________________________________"<<endl;
				outf<<"Total Cost :\t\t "<<fixed<<setprecision(2)<<Booking::hotelCost + Cabs::lastcabCost<<endl;
				outf<<"_________________________________"<<endl;
				outf<<"---------THANK YOU---------------"<<endl;
			}
			
			outf.close();
			
		}
		
		void showBill(){
			ifstream inf("receipt.txt");
			{
				if(!inf){
					cout<<"File opening error!"<<endl;
				}
				while(!(inf.eof())){
					inf.getline(all,999);
					cout<<all<<endl;
				}
			}
			
			inf.close();
		}
};


void menu(){
	
	int mainChoice;
	int inChoice;
	int gotomenu;
	
	cout<<"-------------ABC Travels------------"<<endl;
	cout<<"---------------Main Menu-----------------"<<endl;
	cout<<"__________________________________________"<<endl;
	cout<<"|                                        | "<<endl;
	cout<<"| customer management       -> 1         | "<<endl;
	cout<<"| Cabs management           -> 2         | "<<endl;
	cout<<"| Bookings management       -> 3         | "<<endl;
	cout<<"| Charges and Bill          -> 4         | "<<endl;
	cout<<"| Exit                      -> 5         | "<<endl;
	cout<<"|                                        | "<<endl;
	cout<<"|________________________________________| "<<endl<<endl<<endl;
	
	cout<<"Enter Your choice : ";
	cin>>mainChoice;
	
	system("CLS");
	
	Customers customer;
	Cabs cab;
	Booking booking;
	Charges charges;
	
	switch(mainChoice){
		case 1:{
			cout<<"----------Customers------------"<<endl<<endl;
			cout<<"1. Enter New Customer "<<endl;
			cout<<"2. See Old Customers "<<endl<<endl;
			cout<<"Enter choice : ";
			cin>> inChoice;
			
			system("CLS");
			
			switch(inChoice){
				case 1:{
					customer.getDetails();
					break;
				}
				case 2:{
					customer.showDetails();
					break;
				}
				default:{
					cout<<"Invalid input... Redirecting..."<<endl<<endl;
					Sleep(5000);
					menu();
					break;
				}
			}
			
			break;
		}
		
		case 2: {
			cab.cabDetails();
			break;
		}
		
		case 3: {
			booking.hotelBooking();
			break;
		}
		
		case 4:{
			charges.printBill();
			charges.showBill();
			break;
		}
		
		case 5: {
			return;
			break;
		}
		
		default: {
			cout<<"Invalid input... Redirecting..."<<endl<<endl;
			Sleep(5000);
			menu();
			break;
		}
	}
	
	 cout<<"Have a Great Day!!!"<<endl;
	 cout<<"Press any key to goto menu :";
	 cin>>gotomenu;
	 menu();
	
}


int main(){
	
	menu();
	
	
	return 0;
}
