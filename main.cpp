#include<iostream>
#include<conio.h>
#include<fstream>
#include<io.h>
#include<direct.h>
#include<windows.h>
#include<stdlib.h>
#include<stdio.h>
// #include<string.h>
#include <string>
using namespace std;

//function to give color to the text
void setcolor(int ForgC);

//user-defined date
struct date{
	int date;
	char mon[5];
	int year;
};

//class for user objects
class User{
public:
	struct date db,dt,dr;
	string name;
	long long mob_no;
	int adhar_no;
	int tno;
	string dest;
	string start;
	char stat,tstat;
	string tname;
	int na,tn,nc;

	//function to get user information for train booking
	void get(){
		system("cls");
		setcolor(9);
		cout<<"\n\t\t\t";
		cout << "   *Enter Ticket no. : ";
		cin>>tn;
		cout<<endl<<"\n\t\t\t";
		cout << "   *Enter Name : ";
		// getline(cin, name);
		cin >> name;
		cout<<endl<<"\n\t\t\t";
		cout << "   *Enter Date of Birth : ";
		cin>>db.date>>db.mon>>db.year;
		cout<<endl<<"\n\t\t\t";
		cout << "   *Enter Mobile no. : ";
		cin>>mob_no;
		cout<<endl<<"\n\t\t\t";
		cout << "   *Enter last 4 digits of Adhar no. : ";
		cin>>adhar_no;
		cout<<endl<<"\n\t\t\t";
		cout << "   *Enter Date of Travel : ";
		cin>>dt.date>>dt.mon>>dt.year;
		cout<<endl<<"\n\t\t\t";
		cout << "   *Enter Date of Return : ";
		cin>>dr.date>>dr.mon>>dr.year;
		cout<<endl<<"\n\t\t\t";
		cout << "   *Enter Destination : ";
		cin >> dest;
		cout<<endl<<"\n\t\t\t";
		cout << "   *Enter Boarding point : ";
		cin >> start;
		cout<<endl<<"\n\t\t\t";
		cout << "   *Train number : ";
		cin>>tno;
		cout<<endl<<"\n\t\t\t";
		cout << "   *Enter no. of adults travelling : ";
		cin>>na;
		cout<<endl<<"\n\t\t\t";
		cout << "   *Enter no. of children(under 12) travelling : ";
		cin>>nc;
		cout<<endl;
		stat='B';
	}

	//function to return ticket number
	int ret(){
		return(tn);
	}

	//function to show user information according to the ticket number
	void show(){
		setcolor(3);
		cout<<endl<<"\n\t\t\t";
		cout << "*NAME-                  : ";
		cout<<name;
		cout<<endl<<"\n\t\t\t";
		cout << "*Date of Birth-         : ";
		cout<<db.date<<"/"<<db.mon<<"/"<<db.year;
		cout<<endl<<"\n\t\t\t";
		cout << "*Mobile no.-            : ";
		cout<<mob_no;
		cout<<endl<<"\n\t\t\t";
		cout << "*Adhar Card no.-        : ";
		cout<<adhar_no;
		cout<<endl<<"\n\t\t\t";
		cout << "*Date of Travel-        : ";
		cout<<dt.date<<"/"<<dt.mon<<"/"<<dt.year;
		cout<<endl<<"\n\t\t\t";
		cout << "*Date of Return-        : ";
		cout<<dr.date<<"/"<<dr.mon<<"/"<<dr.year;
		cout<<endl<<"\n\t\t\t";
		cout << "*Destination-           : ";
		cout<<dest;
		cout<<endl<<"\n\t\t\t";
		cout << "*Boarding point-        : ";
		cout<<start;
		cout<<endl<<"\n\t\t\t";
		cout << "*Train no.-             : ";
		cout<<tno;
		cout<<endl<<"\n\t\t\t";
		cout << "*Adults travelling-     : ";
		cout<<na;
		cout<<endl<<"\n\t\t\t";
		cout << "*Children travelling-   : ";
		cout<<nc;
		cout<<endl<<"\n\t\t\t";
		cout << "*Status-                : ";
		cout<<stat;
		cout<<endl;
	}

	//function to cancel ticket by user (set train status to 'C')
	void cancel(){
		stat='C';
	}

	//function to add train by administration
	void addtrain(){
		setcolor(9);
		cout<<endl<<"\n\t\t\t";
		cout << "    *Enter train no : ";
		cin>>tno;
		cout<<endl<<"\n\t\t\t";
		cout << "    *Enter train name : ";
		cin >> tname;
		tstat='A';
	}

	//function to return train number
	int retu(){
		return(tno);
	}

	//function to show train information according to its number
	void tshow(){
		setcolor(9);
		cout<<endl<<"\n\t\t\t";
		cout << "    *Train number is : ";
		cout<<tno;
		cout<<endl<<"\n\t\t\t";
		cout << "    *Train name is : ";
		cout << tname;
		cout<<endl<<"\n\t\t\t";
		cout << "    *Status : ";
		cout<<tstat<<endl;
		cout<<endl;
	}

	//function to cancel train by admin
	void tcancel(){
		tstat='C';
	}

	//function to return status of the train
	char retur(){
		return(tstat);
	}
};


void menu(){

	int a=0,b=0,c=0;

	//welcome menu UI
	setcolor(6);
	cout<<"\n\t\t\t";
	cout << "    ^^^^^^^^^^^^^^^^^^^^^^^^^^^";
	cout<<endl<<"\n\t\t\t";
	cout << "     !=======================!";
	cout<<endl<<"\n\t\t\t";
	cout << "        !**** WELCOME ****!";
	cout<<endl<<"\n\t\t\t";
	cout << "     !=======================!";
	cout<<endl<<"\n\t\t\t";
	cout << "    ^^^^^^^^^^^^^^^^^^^^^^^^^^^";
	cout<<endl;

	while(a!=3){

		//main menu UI
		setcolor(4);
		cout<<endl<<"\n\t\t\t";
		cout << "     !========================!";
		cout<<endl<<"\t\t\t";
		cout << "     ******* MAIN MENU *******";
		cout<<endl<<"\t\t\t";
		cout << "     !========================!";
		cout<<endl;
		cout<<"\n\t\t\t";
		cout << "     *1.User";
		cout<<endl<<"\n\t\t\t";
		cout << "     *2.Admin";
		cout<<endl<<"\n\t\t\t";
		cout << "     *3.Exit"; 
		cout<<endl<<"\n\t\t\t";
		cout << "     Choose Mode : ";
		cin>>a;
		cout<<endl<<endl<<endl;

		switch(a){

			//if a == 1 show user menu UI
			case 1:{
				b=0;
				while(b!=4){

					setcolor(10);
					cout<<endl<<"\n\t\t\t";
					cout << "      !======================!";
					cout<<endl<<"\t\t\t";
					cout << "      !****** USER MENU *****!";
					cout<<endl<<"\t\t\t";
					cout << "      !======================!";
					cout<<endl<<endl;
					cout<<"\n\t\t\t";
					cout << "      *1.Booking";
					cout<<endl<<"\n\t\t\t";
					cout << "      *2.Cancel Ticket";
					cout<<endl<<"\n\t\t\t";
					cout << "      *3.Enquiry";
					cout<<endl<<"\n\t\t\t";
					cout << "      *4.Exit";
					cout<<endl<<"\n\t\t\t";
					cout << "      Enter Choice : ";
					cin>>b;
					cout<<endl<<endl<<endl;

					switch(b){

						//if b == 1 add ticket
						case 1:{
							fstream pas;
							pas.open("passenger.dat",ios::binary|ios::in);

							if(!pas){
								pas.close();
								pas.open("passenger.dat",ios::binary|ios::out);
							}
							else{
								pas.close();
								pas.open("passenger.dat",ios::binary|ios::app);
							}

							User ad;
							ad.get();
							pas.write((char*)&ad,sizeof(ad));
							cout<<"Record saved";

							break;
						}

						//if b == 2 input the ticket number and cancel ticket
						case 2:{

							int temp,pos;
							User ad;
							char ch;
							fstream pas;
							pas.open("passenger.dat",ios::binary|ios::in|ios::out);
							if(!pas)
								cout<<"Database doesn't exist";
							else{
								setcolor(11);
								cout<<endl<<"\n\t\t\t";
								cout << "     Enter ticket No : ";
								cin>>temp;
								cout<<endl<<endl;

								while(pas.read((char*)&ad,sizeof(ad))){
									if(temp==ad.ret()){
										setcolor(4);
										ad.show();
										pos=pas.tellg()-(long long int)sizeof(ad);

										cout<<endl<<endl;
										cout<<endl<<"\n\t\t\t";
										cout << "   Want to cancel(yes(y)/no(n)) :";
										cin>>ch;
										if(ch=='y'){

											cout<<endl<<endl;
											ad.cancel();
											pas.seekp(pos);
											pas.write((char*)&ad,sizeof(ad));
											cout<<"Record modified";
										}
									}
								}
								pas.close();
							}
							break;
						}

						//if b == 3 input ticket number and show user information and ticket status
						case 3:{

							int temp;
							User ad;
							fstream pas;
							pas.open("passenger.dat",ios::binary|ios::in);
							if(!pas)
								cout<<"Database doesn't exist";
							else{
								setcolor(1);
								cout<<endl<<"\n\t\t\t";
								cout << "      Enter ticket no : ";
								cin>>temp;
								cout<<endl<<endl;
								while(pas.read((char*)&ad,sizeof(ad))){
									if(temp==ad.ret()){
										ad.show();
									}
								}
							}
							pas.close();
							break;
						}

						//if b == 4 exit user menu UI
						case 4: break;

						cout<<endl<<endl<<endl;
					}
				}
				break;
			}

			//if a == 2 show admin menu UI
			case 2:{

				c=0;
				while(c!=4){
					//admin menu UI
					setcolor(4);
					cout<<endl<<"\n\t\t\t";
					cout << "     !=============================!";
					cout<<endl<<"\t\t\t";
					cout << "     !**** ADMINISTRATION MENU ****!";
					cout<<endl<<"\t\t\t";
					cout << "     !=============================!";
					cout<<endl<<"\n\t\t\t";
					cout << "     *1.Add Train";
					cout<<endl<<"\n\t\t\t";
					cout << "     *2.Cancel Train";
					cout<<endl<<"\n\t\t\t";
					cout << "     *3.Train Availability";
					cout<<endl<<"\n\t\t\t";
					cout << "     *4.Exit";
					cout<<endl<<"\n\t\t\t";
					cout << "     Enter Choice : ";
					cin>>c;
					switch(c){
						//if c == 1 input train info and add train
						case 1:{
							fstream pas;
							pas.open("passenger.dat",ios::binary|ios::in);

							if(!pas){
								pas.close();
								pas.open("passenger.dat",ios::binary|ios::out);
							}

							else{
								pas.close();
								pas.open("passenger.dat",ios::binary|ios::app);
							}

							User ad;
							ad.addtrain();
							pas.write((char*)&ad,sizeof(ad));
							cout<<"Record saved";

							break;
						}

						//if c == 2 input train number and cancel the train
						case 2:{
							int temp,pos;
							User ad;
							char ch;
							fstream pas;

							pas.open("passenger.dat",ios::binary|ios::in|ios::out);

							if(!pas)
								cout<<"Database doesn't exist";
							else{
								setcolor(9);
								cout<<endl<<"\n\t\t\t";
								cout << "     ---------------------------";
								cout<<endl<<"\n\t\t\t";
								cout << "     Enter train no :";
								cin>>temp;
								cout<<endl<<"\n\t\t\t";
								cout << "     ---------------------------";
								cout<<endl<<endl;

								while(pas.read((char*)&ad,sizeof(ad))){
									if(temp==ad.retu()){
										system("cls");
										ad.tshow();
										pos=pas.tellg()-(long long int)sizeof(ad);
										cout<<endl;
										cout<<endl<<"\n\t\t\t";
										cout << "     Want to cancel(yes(y)/no(n)) :";
										cin>>ch;
										if(ch=='y')
										{
											cout<<endl<<endl;
											ad.tcancel();
											pas.seekp(pos);
											pas.write((char*)&ad,sizeof(ad));
											cout<<"Record modified";
										}
									}
								}
								pas.close();
							}
							break; 
							system("cls");
						}


						//if c == 3 input train number and show train status
						case 3:{
							User ad;
							fstream pas;
							pas.open("passenger.dat",ios::binary|ios::in);

							if(!pas)
								cout<<"Database doesn't exist";
							else{
								while(pas.read((char*)&ad,sizeof(ad))){
									if(ad.retur()=='A'){
										ad.tshow();
									}
								}
								pas.close();
							}

							break;
						}
						cout<<endl<<endl<<endl;
					}
				}
				break;
			}

			//if a == 3 show exit UI and exit the program
			case 3:{
				system("cls");
				setcolor(12);
				cout<<endl<<"\n\n\n\n\n\n\n\n\n\t\t";
				cout << "   ********* AAPKI YATRA MANGALMAY HO *********";
				cout<<endl<<"\n\n\n\n\n\n\n\n\n\t\t";
				// return;
				break;
			}
		}
	}
}


int main(){
	menu();   //call to main menu function
	setcolor(7);
	// getch();
	return 0;
}


//function to give color to the text
void setcolor(int ForgC){
	WORD wColor;
	HANDLE hStdOut=GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	if(GetConsoleScreenBufferInfo(hStdOut,&csbi))
	{
		wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
		SetConsoleTextAttribute(hStdOut,wColor);
	}
	return;
}