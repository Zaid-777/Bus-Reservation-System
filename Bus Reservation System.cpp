# include <iostream>
# include <conio.h>
# include <ctime>
# include <string.h>
# include <iomanip>

using namespace std;
//Global Variable
int count = 0;
//Time Function
void Time ()
{
	time_t tt;
	struct tm * ti;
    time (&tt);
    ti = localtime(&tt);
    
    cout<<"\t\t\t\t\t"<<asctime(ti);
}
//Person Structure
struct Person
{
	string Name;
};

//Base Class
class BUS_Variables
{
	protected:
		int serial_number[5];
		string bus_number[5];
		string driver_name[5];
		string arrival[5];
		string departure[5];
		string from[5];
		string to[5];
		float fare[5];
};

//Drive Classes

//Installation
class Install : protected BUS_Variables
{
	public:
		void install_info()
		{
			system ("cls");
			system ("color fc");
			cout<<"\n"<<setw(95)<<setfill('~')<<"( INSTALL BUS INFORMATION )"
			<<setw(73)<<setfill('~')<<""<<endl;	
			
			char ch;
			
			cout<<"\n\nEnter BUS Serial Number (1 - 5) : ";
			cin>>ch;
			
			switch(ch)
			{
				case '1':
					{
						cout<<"\n\n\t\t\t"<<setw(23)<<setfill('-')<<""
						<<"\n\t\t\t| BUS SERIAL NUMBER 1 |\n\t\t\t"
						<<setw(23)<<setfill('-')<<"";
						
						cout<<"\n\n\nPlease enter Bus Number\t\t\t:\t";
						cin>>bus_number[0];
						
						cout<<"\nPlease enter the Driver's Name\t\t:\t";
						cin>>driver_name[0];
						
						cout<<"\nPlease enter the Arrival Time\t\t:\t";
						cin>>arrival[0];
						
						cout<<"\nPlease enter the Departure Time\t\t:\t";
						cin>>departure[0];
						
						cout<<"\nPlease enter the Place go From\t\t:\t";
						cin>>from[0];
						
						cout<<"\nPlease enter the Place go To\t\t:\t";
						cin>>to[0];
						
						cout<<"\nPlease enter the Fare Price\t\t:\t";
						cin>>fare[0];
					}
					break;
					
					case '2':
					{
						cout<<"\n\n\t\t\t"<<setw(23)<<setfill('-')<<""
						<<"\n\t\t\t| BUS SERIAL NUMBER 2 |\n\t\t\t"
						<<setw(23)<<setfill('-')<<"";
						
						cout<<"\n\n\nPlease enter Bus Number\t\t\t:\t";
						cin>>bus_number[1];
						
						cout<<"\nPlease enter the Driver's Name\t\t:\t";
						cin>>driver_name[1];
						
						cout<<"\nPlease enter the Arrival Time\t\t:\t";
						cin>>arrival[1];
						
						cout<<"\nPlease enter the Departure Time\t\t:\t";
						cin>>departure[1];
						
						cout<<"\nPlease enter the Place go From\t\t:\t";
						cin>>from[1];
						
						cout<<"\nPlease enter the Place go To\t\t:\t";
						cin>>to[1];
						
						cout<<"\nPlease enter the Fare Price\t\t:\t";
						cin>>fare[1];
					}
					break;
					
					case '3':
					{
						cout<<"\n\n\t\t\t"<<setw(23)<<setfill('-')<<""
						<<"\n\t\t\t| BUS SERIAL NUMBER 3 |\n\t\t\t"
						<<setw(23)<<setfill('-')<<"";
						
						cout<<"\n\n\nPlease enter Bus Number\t\t\t:\t";
						cin>>bus_number[2];
						
						cout<<"\nPlease enter the Driver's Name\t\t:\t";
						cin>>driver_name[2];
						
						cout<<"\nPlease enter the Arrival Time\t\t:\t";
						cin>>arrival[2];
						
						cout<<"\nPlease enter the Departure Time\t\t:\t";
						cin>>departure[2];
						
						cout<<"\nPlease enter the Place go From\t\t:\t";
						cin>>from[2];
						
						cout<<"\nPlease enter the Place go To\t\t:\t";
						cin>>to[2];
						
						cout<<"\nPlease enter the Fare Price\t\t:\t";
						cin>>fare[2];
					}
					break;
					
					case '4':
					{
						cout<<"\n\n\t\t\t"<<setw(23)<<setfill('-')<<""
						<<"\n\t\t\t| BUS SERIAL NUMBER 4 |\n\t\t\t"
						<<setw(23)<<setfill('-')<<"";
						
						cout<<"\n\n\nPlease enter Bus Number\t\t\t:\t";
						cin>>bus_number[3];
						
						cout<<"\nPlease enter the Driver's Name\t\t:\t";
						cin>>driver_name[3];
						
						cout<<"\nPlease enter the Arrival Time\t\t:\t";
						cin>>arrival[3];
						
						cout<<"\nPlease enter the Departure Time\t\t:\t";
						cin>>departure[3];
						
						cout<<"\nPlease enter the Place go From\t\t:\t";
						cin>>from[3];
						
						cout<<"\nPlease enter the Place go To\t\t:\t";
						cin>>to[3];
						
						cout<<"\nPlease enter the Fare Price\t\t:\t";
						cin>>fare[3];
					}
					break;
					
					case '5':
					{
						cout<<"\n\n\t\t\t"<<setw(23)<<setfill('-')<<""
						<<"\n\t\t\t| BUS SERIAL NUMBER 5 |\n\t\t\t"
						<<setw(23)<<setfill('-')<<"";
						
						cout<<"\n\n\nPlease enter Bus Number\t\t\t:\t";
						cin>>bus_number[4];
						
						cout<<"\nPlease enter the Driver's Name\t\t:\t";
						cin>>driver_name[4];
						
						cout<<"\nPlease enter the Arrival Time\t\t:\t";
						cin>>arrival[4];
						
						cout<<"\nPlease enter the Departure Time\t\t:\t";
						cin>>departure[4];
						
						cout<<"\nPlease enter the Place go From\t\t:\t";
						cin>>from[4];
						
						cout<<"\nPlease enter the Place go To\t\t:\t";
						cin>>to[4];
						
						cout<<"\nPlease enter the Fare Price\t\t:\t";
						cin>>fare[4];
					}
					break;
					
					default:
						cout<<"You Entered Wrong Number! "<<endl;	
			}
		}
};
//Reservation
class Reservation : public Install
{
	public:
		Person bus_a[8][4], bus_b[8][4], bus_c[8][4], bus_d[8][4], bus_e[8][4];
		int seat_no;
		
		void Reservad_Seats()
		{
			system ("cls");
			system ("color fc");
			
			cout<<"\n"<<setw(88)<<setfill('~')<<"( Reservation )"
			<<setw(80)<<setfill('~')<<""<<endl;	
			char ch;
			
			cout<<"\nEnter BUS Serial Number (1 - 5) : ";
			cin>>ch;
			
			int a[8][4]={1,2,3,4,5,6,7,8,9,0,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32};
			int b[8][4]={1,2,3,4,5,6,7,8,9,0,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32};
			int c[8][4]={1,2,3,4,5,6,7,8,9,0,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32};
			int d[8][4]={1,2,3,4,5,6,7,8,9,0,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32};
			int e[8][4]={1,2,3,4,5,6,7,8,9,0,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32};	
			
			switch(ch)
			{
				case '1':
					{
						cout<<"\n\n\t\t\t"<<setw(23)<<setfill('-')<<""
						<<"\n\t\t\t| BUS SERIAL NUMBER 1 |\n\t\t\t"
						<<setw(25)<<setfill('-')<<"\n\n";
						
						cout<<"\t\t\t { Maximum 32 Seats }\n\n";
						do
						{	
							cout<<"\nPlease enter Seat No. \t";
							cin>>seat_no;
							
							for(int i=0; i<8; i++)
							{
								for(int j=0;j<4;j++)
								{
									if(seat_no == a[i][j])
									{
										cout<<"Please enter Passenger Name : \t";
										cin>>bus_a[i][j].Name;
									}
								}
							}
							cout<<"\n\tWant to Reserve more Seats \n\t'Y' for Yes and 'N' for No : ";
							cin>>ch;
						}
						while(ch!='n'&&ch!='N');
					}
					break;
					
				case '2':
					{
						cout<<"\n\n\t\t\t"<<setw(23)<<setfill('-')<<""
						<<"\n\t\t\t| BUS SERIAL NUMBER 2 |\n\t\t\t"
						<<setw(25)<<setfill('-')<<"\n\n";
						
						cout<<"\t\t\t { Maximum 32 Seats }\n\n";
						do
						{
							cout<<"\nPlease enter Seat No. \t";
							cin>>seat_no;
							
							for(int i=0; i<8; i++)
							{
								for(int j=0;j<4;j++)
								{
									if(seat_no == b[i][j])
									{
										cout<<"Please enter Passenger Name : \t";
										cin>>bus_b[i][j].Name;
									}
								}
							}
							cout<<"\n\tWant to Reserve more Seats \n\t'Y' for Yes and 'N' for No : ";
							cin>>ch;
						}
						while(ch!='n'&&ch!='N');
					}
					break;
					
				case '3':
					{
						cout<<"\n\n\t\t\t"<<setw(23)<<setfill('-')<<""
						<<"\n\t\t\t| BUS SERIAL NUMBER 3 |\n\t\t\t"
						<<setw(25)<<setfill('-')<<"\n\n";
						
						cout<<"\t\t\t { Maximum 32 Seats }\n\n";
						do
						{
							cout<<"\nPlease enter Seat No. \t";
							cin>>seat_no;
							
							for(int i=0; i<8; i++)
							{
								for(int j=0;j<4;j++)
								{
									if(seat_no == c[i][j])
									{
										cout<<"Please enter Passenger Name : \t";
										cin>>bus_c[i][j].Name;
									}
								}
							}
							cout<<"\n\tWant to Reserve more Seats \n\t'Y' for Yes and 'N' for No : ";
							cin>>ch;
						}
						while(ch!='n'&&ch!='N');
					}
					break;
					
				case '4':
					{
						cout<<"\n\n\t\t\t"<<setw(23)<<setfill('-')<<""
						<<"\n\t\t\t| BUS SERIAL NUMBER 4 |\n\t\t\t"
						<<setw(25)<<setfill('-')<<"\n\n";
						
						cout<<"\t\t\t { Maximum 32 Seats }\n\n";
						do
						{
							cout<<"\nPlease enter Seat No. \t";
							cin>>seat_no;
							
							for(int i=0; i<8; i++)
							{
								for(int j=0;j<4;j++)
								{
									if(seat_no == d[i][j])
									{
										cout<<"Please enter Passenger Name : \t";
										cin>>bus_d[i][j].Name;
									}
								}
							}
							cout<<"\n\tWant to Reserve more Seats \n\t'Y' for Yes and 'N' for No : ";
							cin>>ch;
						}
						while(ch!='n'&&ch!='N');
					}
					break;
					
				case '5':
					{
						cout<<"\n\n\t\t\t"<<setw(23)<<setfill('-')<<""
						<<"\n\t\t\t| BUS SERIAL NUMBER 5 |\n\t\t\t"
						<<setw(25)<<setfill('-')<<"\n\n";
						
						cout<<"\t\t\t { Maximum 32 Seats }\n\n";
						do
						{	
							cout<<"\nPlease enter Seat No. \t";
							cin>>seat_no;
							
							for(int i=0; i<8; i++)
							{
								for(int j=0;j<4;j++)
								{
									if(seat_no == e[i][j])
									{
										cout<<"Please enter Passenger Name : \t";
										cin>>bus_e[i][j].Name;
									}
								}
							}
							cout<<"\n\tWant to Reserve more Seats \n\t'Y' for Yes and 'N' for No : ";
							cin>>ch;
						}
						while(ch!='n'&&ch!='N');
					}
					break;
			}
		}
		
		void Show_a()
		{
			int a[8][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32};
			cout<<"\n"<<setw(88)<<setfill('~')<<"( Reserved Seats )"
			<<setw(80)<<setfill('~')<<""<<endl;
						
			for(int i=0; i<8; i++)
			{
				cout<<endl<<endl;
				for (int j=0; j<4; j++)
				{
					cout<<"\t\tSeat NO."<<a[i][j]<<" Name : "<<bus_a[i][j].Name<<"\t";
				}
			}
		}
		
		void Show_b()
		{
			int b[8][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32};
			cout<<"\n"<<setw(88)<<setfill('~')<<"( Reserved Seats )"
			<<setw(80)<<setfill('~')<<""<<endl;
			
			for(int i=0; i<8; i++)
			{
				cout<<endl<<endl;
				for (int j=0; j<4; j++)
				{
					cout<<"\t\tSeat NO."<<b[i][j]<<" Name : "<<bus_b[i][j].Name<<"\t";
				}
			}
		}
		
		void Show_c()
		{
			int c[8][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32};
			cout<<"\n"<<setw(88)<<setfill('~')<<"( Reserved Seats )"
			<<setw(80)<<setfill('~')<<""<<endl;
			
			for(int i=0; i<8; i++)
			{
				cout<<endl<<endl;
				for (int j=0; j<4; j++)
				{
					cout<<"\t\tSeat NO."<<c[i][j]<<" Name : "<<bus_c[i][j].Name<<"\t";
				}
			}
		}
		
		void Show_d()
		{
			int d[8][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32};
			cout<<"\n"<<setw(88)<<setfill('~')<<"( Reserved Seats )"
			<<setw(80)<<setfill('~')<<""<<endl;
			
			for(int i=0; i<8; i++)
			{
				cout<<endl<<endl;
				for (int j=0; j<4; j++)
				{
					cout<<"\t\tSeat NO."<<d[i][j]<<" Name : "<<bus_d[i][j].Name<<"\t";
				}
			}
		}
		
		void Show_e()
		{
			int e[8][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32};
			
			cout<<"\n"<<setw(88)<<setfill('~')<<"( Reserved Seats )"
			<<setw(80)<<setfill('~')<<""<<endl;
			
			for(int i=0; i<8; i++)
			{
				cout<<endl<<endl;
				for (int j=0; j<4; j++)
				{
					cout<<"\t\tSeat NO."<<e[i][j]<<" Name : "<<bus_e[i][j].Name<<"\t";
				}
			}
		}
};
//Show Data
class Show : public Reservation
{
	public:
		void Show_Data()
		{
			system ("cls");
			system ("color fc");
			
			cout<<setw(88)<<setfill('~')<<"( BUSES SHOW DATA )"
			<<setw(80)<<setfill('~')<<""<<endl;
			
			char ch;
			
			cout<<"\nEnter BUS Serial Number (1 - 5) : ";
			cin>>ch;
			
			switch(ch)
			{
				case '1':
					{	
						cout<<"\t\t\t\t\t"<<setw(23)<<setfill('-')<<""
						<<"\n\t\t\t\t\t| BUS SERIAL NUMBER 1 |\n\t\t\t\t\t"
						<<setw(24)<<setfill('-')<<"\n";
						
						cout<<"\n\t\t"<<setw(66)<<setfill('*')<<""<<endl;
						
						cout<<"\n\t\t\tBus Number is\t\t:\t"<<bus_number[0];
						
						cout<<"\n\t\t\tDriver's Name is\t:\t"<<driver_name[0];
						
						cout<<"\n\t\t\tArrival Time is\t\t:\t"<<arrival[0];
						
						cout<<"\n\t\t\tDeparture Time is\t:\t"<<departure[0];
						
						cout<<"\n\t\t\tFrom\t\t\t:\t"<<from[0];
						
						cout<<"\n\t\t\tTo\t\t\t:\t"<<to[0];
						
						cout<<"\n\t\t\tFare Price is\t\t:\t"<<fare[0];
						
						cout<<"\n\t\t"<<setw(66)<<setfill('*')<<""<<endl;
						
						Reservation::Show_a();
					}
					break;
					
				case '2':
					{	
						cout<<"\t\t\t\t\t"<<setw(23)<<setfill('-')<<""
						<<"\n\t\t\t\t\t| BUS SERIAL NUMBER 2 |\n\t\t\t\t\t"
						<<setw(24)<<setfill('-')<<"\n";
						
						cout<<"\n\t\t"<<setw(66)<<setfill('*')<<""<<endl;
						
						cout<<"\n\t\t\tBus Number is\t\t:\t"<<bus_number[1];
						
						cout<<"\n\t\t\tDriver's Name is\t:\t"<<driver_name[1];
						
						cout<<"\n\t\t\tArrival Time is\t\t:\t"<<arrival[1];
						
						cout<<"\n\t\t\tDeparture Time is\t:\t"<<departure[1];
						
						cout<<"\n\t\t\tFrom\t\t\t:\t"<<from[1];
						
						cout<<"\n\t\t\tTo\t\t\t:\t"<<to[1];
						
						cout<<"\n\t\t\tFare Price is\t\t:\t"<<fare[1];
						
						cout<<"\n\t\t"<<setw(66)<<setfill('*')<<""<<endl;
					
						Reservation::Show_b();

					}
					break;
					
				case '3':
					{	
						cout<<"\t\t\t\t\t"<<setw(23)<<setfill('-')<<""
						<<"\n\t\t\t\t\t| BUS SERIAL NUMBER 3 |\n\t\t\t\t\t"
						<<setw(24)<<setfill('-')<<"\n";
						
						cout<<"\n\t\t"<<setw(66)<<setfill('*')<<""<<endl;
						
						cout<<"\n\t\t\tBus Number is\t\t:\t"<<bus_number[2];
						
						cout<<"\n\t\t\tDriver's Name is\t:\t"<<driver_name[2];
						
						cout<<"\n\t\t\tArrival Time is\t\t:\t"<<arrival[2];
						
						cout<<"\n\t\t\tDeparture Time is\t:\t"<<departure[2];
						
						cout<<"\n\t\t\tFrom\t\t\t:\t"<<from[2];
						
						cout<<"\n\t\t\tTo\t\t\t:\t"<<to[2];
						
						cout<<"\n\t\t\tFare Price is\t\t:\t"<<fare[2];
						
						cout<<"\n\t\t"<<setw(66)<<setfill('*')<<""<<endl;
						
						Reservation::Show_c();

					}
					break;
					
				case '4':
					{	
						cout<<"\t\t\t\t\t"<<setw(23)<<setfill('-')<<""
						<<"\n\t\t\t\t\t| BUS SERIAL NUMBER 4 |\n\t\t\t\t\t"
						<<setw(24)<<setfill('-')<<"\n";
						
						cout<<"\n\t\t"<<setw(66)<<setfill('*')<<""<<endl;
						
						cout<<"\n\t\t\tBus Number is\t\t:\t"<<bus_number[3];
						
						cout<<"\n\t\t\tDriver's Name is\t:\t"<<driver_name[3];
						
						cout<<"\n\t\t\tArrival Time is\t\t:\t"<<arrival[3];
						
						cout<<"\n\t\t\tDeparture Time is\t:\t"<<departure[3];
						
						cout<<"\n\t\t\tFrom\t\t\t:\t"<<from[3];
						
						cout<<"\n\t\t\tTo\t\t\t:\t"<<to[3];
						
						cout<<"\n\t\t\tFare Price is\t\t:\t"<<fare[3];
						
						cout<<"\n\t\t"<<setw(66)<<setfill('*')<<""<<endl;
					
						Reservation::Show_d();

					}
					break;
					
				case '5':
					{	
						cout<<"\t\t\t\t\t"<<setw(23)<<setfill('-')<<""
						<<"\n\t\t\t\t\t| BUS SERIAL NUMBER 5 |\n\t\t\t\t\t"
						<<setw(24)<<setfill('-')<<"\n";
						
						cout<<"\n\t\t"<<setw(66)<<setfill('*')<<""<<endl;
						
						cout<<"\n\t\t\tBus Number is\t\t:\t"<<bus_number[4];
						
						cout<<"\n\t\t\tDriver's Name is\t:\t"<<driver_name[4];
						
						cout<<"\n\t\t\tArrival Time is\t\t:\t"<<arrival[4];
						
						cout<<"\n\t\t\tDeparture Time is\t:\t"<<departure[4];
						
						cout<<"\n\t\t\tFrom\t\t\t:\t"<<from[4];
						
						cout<<"\n\t\t\tTo\t\t\t:\t"<<to[4];
						
						cout<<"\n\t\t\tFare Price is\t\t:\t"<<fare[4];
						
						cout<<"\n\t\t"<<setw(66)<<setfill('*')<<""<<endl;
					
						Reservation::Show_e();

					}
					break;			
			}
		}
};
//Available Buses
class Available : public Show
{
	public:
		void available ()
		{
			system ("cls");
			system ("color fc");
			cout<<setw(88)<<setfill('~')<<"( BUSES AVAILABLE )"
			<<setw(80)<<setfill('~')<<""<<endl;
			
			
			for (int i=0; i<5; i++)
			{
				cout<<"\n\n\t\t\t\t\t"
				<<setw(23)<<setfill('-')<<""
				<<"\n\t\t\t\t\t| BUS SERIAL NUMBER "<<i+1<<" |\n\t\t\t\t\t"
				<<setw(24)<<setfill('-')<<"\n";
				cout<<"\n\t\t"<<setw(66)<<setfill('*')<<""<<endl;
				cout<<"\n\t\t\tBus Number is\t\t:\t"<<bus_number[i];
				
				cout<<"\n\t\t\tDriver's Name is\t:\t"<<driver_name[i];
				
				cout<<"\n\t\t\tArrival Time is\t\t:\t"<<arrival[i];
				
				cout<<"\n\t\t\tDeparture Time is\t:\t"<<departure[i];
				
				cout<<"\n\t\t\tFrom\t\t\t:\t"<<from[i];
				
				cout<<"\n\t\t\tTo\t\t\t:\t"<<to[i];
				
				cout<<"\n\t\t\tFare Price is\t\t:\t"<<fare[i];
				cout<<"\n\t\t"<<setw(66)<<setfill('*')<<""<<endl;
			}
		}
};
//Creating  Ticket
class Ticket : public Available
{
	protected:
		char ch;
		int seat_no;
	public:
		void Ticket_Output()
		{
			system ("cls");
			cout<<setw(88)<<setfill('~')<<"( TICKETING )"
			<<setw(80)<<setfill('~')<<""<<endl;
			for (int i=0; i<5; i++)
			{
				cout<<"\n\n\t\t\t\t\t"
				<<setw(23)<<setfill('-')<<""
				<<"\n\t\t\t\t\t| BUS SERIAL NUMBER "<<i+1<<" |\n\t\t\t\t\t"
				<<setw(25)<<setfill('-')<<"\n\n";
				
				cout<<"\n\t\t\tFrom : \t\t\t"<<from[i];
				
				cout<<"\n\t\t\tTo : \t\t\t"<<to[i];
				
				cout<<"\n\t\t\tFare Price is : \t"<<fare[i];
			}
			
			int a[8][4]={1,2,3,4,5,6,7,8,9,0,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32};
			int b[8][4]={1,2,3,4,5,6,7,8,9,0,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32};
			int c[8][4]={1,2,3,4,5,6,7,8,9,0,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32};
			int d[8][4]={1,2,3,4,5,6,7,8,9,0,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32};
			int e[8][4]={1,2,3,4,5,6,7,8,9,0,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32};
			
			cout<<"\n\n\n\t\t\tPlease Enter Bus Serial Number\t:\t";
			cin>>ch;
			
			cout<<"\n\t\t\tEnter Seat No.\t\t:\t";
			cin>>seat_no;
			
			switch(ch)
			{
				case'1':
					{
						system ("cls");
						
						
						cout<<setw(88)<<setfill('~')<<"( BUS SYSTEM )"
						<<setw(80)<<setfill('~')<<""<<endl;
						cout<<"\n\n\t";
						Time();
						
						cout<<setw(140)<<setfill('_')<<endl;
						
						count ++;
						
						cout<<"\n\t\t Serial No. \t\t:\t1";
						cout<<"\t\t Invoice # \t\t:\t "<<count<<endl;
						
						cout<<"\t\t BUS No. \t\t:\t"<<bus_number[0];
						cout<<"\t\t Driver Name \t\t:\t"<<driver_name[0]<<endl;
						
						cout<<"\t\t Arrival Time \t\t:\t"<<arrival[0];
						cout<<"\t\t Departure Time \t:\t"<<departure[0]<<endl;
						
						cout<<"\t\t From \t\t\t:\t"<<from[0];
						cout<<"\t\t To \t\t\t:\t"<<to[0]<<endl;
						
						for(int i=0; i<8; i++)
						{
								for (int j=0; j<4; j++)
								{
									if(seat_no==a[i][j])
									{
									cout<<"\t\t Seat NO.\t\t:\t"<<a[i][j]<<"\t\t Name\t\t\t:\t"<<bus_a[i][j].Name<<endl;
									}
								}
						}
						cout<<setw(144)<<setfill('-')<<endl;
						cout<<"\n\t\t\t\t\t\t Fare Price is : "<<fare[0];
						cout<<setw(182)<<setfill('-')<<endl;
					}
					break;
					
				case'2':
					{
						system ("cls");
						
						//cout<<"\t\t\t\t\t\t BUS SYSTEM"<<endl;
						cout<<setw(88)<<setfill('~')<<"( BUS SYSTEM )"
						<<setw(80)<<setfill('~')<<""<<endl;
						cout<<"\n\n\t";
						Time();
						
						cout<<setw(140)<<setfill('_')<<endl;
						
						count ++;
						
						cout<<"\n\t\t Serial No. \t\t:\t2";
						cout<<"\t\t Invoice # \t\t:\t "<<count<<endl;
						
						cout<<"\t\t BUS No. \t\t:\t"<<bus_number[1];
						cout<<"\t\t Driver Name \t\t:\t"<<driver_name[1]<<endl;
						
						cout<<"\t\t Arrival Time \t\t:\t"<<arrival[1];
						cout<<"\t\t Departure Time \t:\t"<<departure[1]<<endl;
						
						cout<<"\t\t From \t\t\t:\t"<<from[1];
						cout<<"\t\t To \t\t\t:\t"<<to[1]<<endl;
						
						for(int i=0; i<8; i++)
						{
								for (int j=0; j<4; j++)
								{
									if(seat_no==a[i][j])
									{
									cout<<"\t\t Seat NO.\t\t:\t"<<b[i][j]<<"\t\t Name\t\t\t:\t"<<bus_b[i][j].Name<<endl;
									}
								}
						}
						cout<<setw(144)<<setfill('-')<<endl;
						cout<<"\n\t\t\t\t\t\t Fare Price is : "<<fare[1];
						cout<<setw(182)<<setfill('-')<<endl;
					}
					break;
					
				case'3':
					{
						system ("cls");
						
						cout<<setw(88)<<setfill('~')<<"( BUS SYSTEM )"
						<<setw(80)<<setfill('~')<<""<<endl;
						cout<<"\n\n\t";
						Time();
						
						cout<<setw(140)<<setfill('_')<<endl;
						
						count ++;
						
						cout<<"\n\t\t Serial No. \t\t:\t3";
						cout<<"\t\t Invoice # \t\t:\t "<<count<<endl;
						
						cout<<"\t\t BUS No. \t\t:\t"<<bus_number[2];
						cout<<"\t\t Driver Name \t\t:\t"<<driver_name[2]<<endl;
						
						cout<<"\t\t Arrival Time \t\t:\t"<<arrival[2];
						cout<<"\t\t Departure Time \t:\t"<<departure[2]<<endl;
						
						cout<<"\t\t From \t\t\t:\t"<<from[2];
						cout<<"\t\t To \t\t\t:\t"<<to[2]<<endl;
						
						for(int i=0; i<8; i++)
						{
								for (int j=0; j<4; j++)
								{
									if(seat_no==a[i][j])
									{
									cout<<"\t\t Seat NO.\t\t:\t"<<c[i][j]<<"\t\t Name\t\t\t:\t"<<bus_c[i][j].Name<<endl;
									}
								}
						}
					
						cout<<setw(144)<<setfill('-')<<endl;
						cout<<"\n\t\t\t\t\t\t Fare Price is : "<<fare[2];
						cout<<setw(182)<<setfill('-')<<endl;
					}
					break;
					
				case'4':
					{
						system ("cls");
						
						cout<<setw(88)<<setfill('~')<<"( BUS SYSTEM )"
						<<setw(80)<<setfill('~')<<""<<endl;
						cout<<"\n\n\t";
						Time();
						
						cout<<setw(140)<<setfill('_')<<endl;
						
						count ++;
						
						cout<<"\n\t\t Serial No. \t\t:\t4";
						cout<<"\t\t Invoice # \t\t:\t "<<count<<endl;
						
						cout<<"\t\t BUS No. \t\t:\t"<<bus_number[3];
						cout<<"\t\t Driver Name \t\t:\t"<<driver_name[3]<<endl;
						
						cout<<"\t\t Arrival Time \t\t:\t"<<arrival[3];
						cout<<"\t\t Departure Time \t:\t"<<departure[3]<<endl;
						
						cout<<"\t\t From \t\t\t:\t"<<from[3];
						cout<<"\t\t To \t\t\t:\t"<<to[3]<<endl;
						
						for(int i=0; i<8; i++)
						{
								for (int j=0; j<4; j++)
								{
									if(seat_no==a[i][j])
									{
									cout<<"\t\t Seat NO.\t\t:\t"<<d[i][j]<<"\t\t Name\t\t\t:\t"<<bus_d[i][j].Name<<endl;
									}
								}
						}
						
						cout<<setw(144)<<setfill('-')<<endl;
						cout<<"\n\t\t\t\t\t\t Fare Price is : "<<fare[3];
						cout<<setw(182)<<setfill('-')<<endl;
					}
					break;
					
				case'5':
					{
						system ("cls");
						
						cout<<setw(88)<<setfill('~')<<"( BUS SYSTEM )"
						<<setw(80)<<setfill('~')<<""<<endl;
						cout<<"\n\n\t";
						Time();
						
						cout<<setw(140)<<setfill('_')<<endl;
						
						count ++;
						
						cout<<"\n\t\t Serial No. \t\t:\t5";
						cout<<"\t\t Invoice # \t\t:\t "<<count<<endl;
						
						cout<<"\t\t BUS No. \t\t:\t"<<bus_number[4];
						cout<<"\t\t Driver Name \t\t:\t"<<driver_name[4]<<endl;
						
						cout<<"\t\t Arrival Time \t\t:\t"<<arrival[4];
						cout<<"\t\t Departure Time \t:\t"<<departure[4]<<endl;
						
						cout<<"\t\t From \t\t\t:\t"<<from[4];
						cout<<"\t\t To \t\t\t:\t"<<to[4]<<endl;
						
						for(int i=0; i<8; i++)
						{
								for (int j=0; j<4; j++)
								{
									if(seat_no==a[i][j])
									{
									cout<<"\t\t Seat NO.\t\t:\t"<<e[i][j]<<"\t\t Name\t\t\t:\t"<<bus_e[i][j].Name<<endl;
									}
								}
						}
						cout<<setw(144)<<setfill('-')<<endl;
						cout<<"\n\t\t\t\t\t\t Fare Price is : "<<fare[4];
						cout<<setw(182)<<setfill('-')<<endl;
					}
					break;
					
					default:
						cout<<"\n\t\t\t You Entered Wrong Alphabet! "<<endl;
				}
		}
};
//Main Menu
class Menu : public Ticket
{
	public:
		void Bus_Menu()
		{
			char ch,choice;
	
			do
			{
				system("cls");
				system("color fc");
				
				cout<<"\n\n\n\t\t\t\t"<<setw(50)<<setfill('~')<<"{ MAIN MENU }"
				<<setw(40)<<setfill('~')<<"\n\n\t\t\t";	
											Time();
				
				cout<<"\n\n\n\t\t\t\t\t\t\t\t 1- ADMIN. \n\n\t\t\t\t\t\t\t\t"
				<<" 2- CUSTOMER. \n\n\t\t\t\t\t\t\t\t"
				<<" 3- EXIT PROGRAM. \n\n\t\t\t\t";
				
				cout<<setw(85)<<setfill('~')<<""<<endl;
				
				cout<<"\n\n\t\t\t\t\t\t\t\t Enter your Choice : -> ";
				cin>>choice;
				
				switch(choice)
				{
					case'1':
					{
						string pass ;
						char ch;
					   
						cout<<"Please Enter Password\t:\t";
						ch = getch();
					   
						while(ch != 13)
						{
					    	pass.push_back(ch);
					    	cout << '*';
					    	ch = getch();
						}
						
						if(pass == "4557")
						{
							system("cls");
							cout<<"\n\n\n\n\n\t\t\t\t"<<setw(50)<<setfill('~')<<"{ MAIN MENU }"
							<<setw(40)<<setfill('~')<<"\n\n\t\t\t";	
												Time();
					
							cout<<"\n\n\n\t\t\t\t\t\t\t\t 1- Buses Installation. \n\n\t\t\t\t\t\t\t\t"
							<<" 2- Showing Buses Data. \n\n\t\t\t\t\t\t\t\t"
							<<" 3- Exit Program. \n\n\t\t\t\t";
							
							cout<<setw(85)<<setfill('~')<<""<<endl;
							
							cout<<"\n\n\t\t\t\t\t\t\t\t Enter your Choice : -> ";
							cin>>choice;
							
							switch(choice)
							{
								case '1':
									Install::install_info();
									break;
								case '2':
									Show::Show_Data();
									break;
								case '3':
									exit(0);
									break;
								default:
									cout<<"Your Entered Instructions Invalid!!!.";
							}
						}
						else
						{
							cout << "\n\n\t\t\t You Enter Wrong PASSWORD!\n";
						}
					}	
					break;
							
					case'2':
						{	
							system("cls");
							cout<<"\n\n\n\n\n\t\t\t\t"<<setw(50)<<setfill('~')<<"{ MAIN MENU }"
							<<setw(40)<<setfill('~')<<"\n\n\t\t\t";	
														Time();
							
								cout<<"\n\n\n\t\t\t\t\t\t\t\t"
								<<" 1- Seats Reservation. \n\n\t\t\t\t\t\t\t\t"
								<<" 2- Showing Buses Data. \n\n\t\t\t\t\t\t\t\t"
								<<" 3- Buses Availability. \n\n\t\t\t\t\t\t\t\t"
								<<" 4- Ticket Generation. \n\n\t\t\t\t\t\t\t\t"
								<<" 5- Exit Program. \n\n\t\t\t\t";
							
								cout<<setw(85)<<setfill('~')<<""<<endl;
								
								cout<<"\n\n\t\t\t\t\t\t\t\t Enter your Choice : -> ";
								cin>>choice;
							switch(choice)
							{
								case '1':
									Reservation::Reservad_Seats();
								break;
								
								case '2':
									Show::Show_Data();
								break;
								
								case '3':
									Available::available ();
								break;
								
								case '4':
									Ticket::Ticket_Output();
								break;
									
								case '5':
									exit(0);
								break;
								
								default:
										cout<<"\n\n\t\tYour Entered Instructions Invalid!!!.";
							}
					}
					break;
					
					case'3':
						{
							exit(0);
						}
				
					default:
						cout<<"\n\n\t\t\tYour entered choice is invailed!!!."<<endl;
				}
				
				cout<<"\n\n\n\t\tPress (Y or y) for Main Menu and Press (N or n) to Exit. ";
				cin>>ch;
				cout<<endl<<endl;
			}
			while(ch!='N' && ch!='n');
		}
    
};
//Main Function
main()
{
	system ("cls");
	system("mode 650");
	system ("color f9");
	
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t** "
	<<" WELLCOME  TO  BUS  RESERVATION  SYSTEM **\n\n\n\n\n\n\n\n\n\n\n\n\n"
	<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Made By:\n"
	<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t AQSA SEHAR \t\t\t 41 \n"
	<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t HASSAN BIN SALIM \t\t 58 \n"
	<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t HAFIZ ANEES-UR-REHMAN \t\t 59 \n"
	<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t HAFIZ ZAID BIN KHALID \t\t 75 \n\n\n\n\n";
	
	system ("pause");
	system ("cls");

	for (int i=0; i<10; i++)
	{
		system ("color a1");
		system ("color b2");
		system ("color c3");
		system ("color D4");
	}
	
	system ("cls");
	system ("color fc");
	
	Menu M;
	M.Bus_Menu();
}
