#include <iostream>
#include <fstream>
#include <iomanip>
#include <windows.h>

using namespace std;

class Customers{
	
	public:
		string name, gender, address;
		int age, mobileNo, cusId;
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

class Cabs{
	
	public:
		int cabChoice;
		float kilometers;
		float cabCost;
		float lastcabCost;
		
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
							cout<<"Invalid input.  Redirecting... ";
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
							cout<<"Invalid input.  Redirecting... ";
							Sleep(5000);
							system("CLS");
							cabDetails();
							break;
						}
					}
					break;
				}
				default:{
					cout<<"Invalid input. Redirecting...";
					Sleep(5000);
					system("CLS");
					cabDetails();
					break;
				}
			}
		}
	
};

class Booking{
	public:
		int choiceHotel;
		int packChoice;
		float hotelCost;
		
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
			}		
		}
};

class Charges{
	
};


int main(){
	
	cout << " Welcome " << endl;
	
	
	return 0;
}
