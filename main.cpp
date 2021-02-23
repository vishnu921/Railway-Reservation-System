#include<iostream>
#include<conio.h>
#include<fstream>
#include<io.h>
#include<direct.h>
#include<windows.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
using namespace std;

void setcolor(int ForgC);

struct date
{
int date;
char mon[5];
int year;
};
class User
{
public:
struct date db,dt,dr;
char name[25];
long mob_no;
int adhar_no;
int tno;
char dest[30];
char start[30];
char stat,tstat,tname[40];
int na,tn,nc;
void get()
{
clrscr();
setcolor(LIGHTBLUE);
cout<<"\n\t\t\t";
_cprintf("   *Enter Ticket no. : ");
cin>>tn;
cout<<endl<<"\n\t\t\t";
_cprintf("   *Enter Name : ");
gets(name);
cout<<endl<<"\n\t\t\t";
_cprintf("   *Enter Date of Birth : ");
cin>>db.date>>db.mon>>db.year;
cout<<endl<<"\n\t\t\t";
_cprintf("   *Enter Mobile no. : ");
cin>>mob_no;
cout<<endl<<"\n\t\t\t";
_cprintf("   *Enter last 4 digits of Adhar no. : ");
cin>>adhar_no;
cout<<endl<<"\n\t\t\t";
_cprintf("   *Enter Date of Travel : ");
cin>>dt.date>>dt.mon>>dt.year;
cout<<endl<<"\n\t\t\t";
_cprintf("   *Enter Date of Return : ");
cin>>dr.date>>dr.mon>>dr.year;
cout<<endl<<"\n\t\t\t";
_cprintf("   *Enter Destination : ");
gets(dest);
cout<<endl<<"\n\t\t\t";
_cprintf("   *Enter Boarding point : ");
gets(start);
cout<<endl<<"\n\t\t\t";
_cprintf("   *Train number : ");
cin>>tno;
cout<<endl<<"\n\t\t\t";
_cprintf("   *Enter no. of adults travelling : ");
cin>>na;
cout<<endl<<"\n\t\t\t";
_cprintf("   *Enter no. of children(under 12) travelling : ");
cin>>nc;
cout<<endl;
stat='B';
}
int ret()
{
return(tn);
}
void show()
{
setcolor(3);
cout<<endl<<"\n\t\t\t";
_cprintf("*NAME-                  : ");
cout<<name;
cout<<endl<<"\n\t\t\t";
_cprintf("*Date of Birth-         : ");
cout<<db.date<<"/"<<db.mon<<"/"<<db.year;
cout<<endl<<"\n\t\t\t";
_cprintf("*Mobile no.-            : ");
cout<<mob_no;
cout<<endl<<"\n\t\t\t";
_cprintf("*Adhar Card no.-        : ");
cout<<adhar_no;
cout<<endl<<"\n\t\t\t";
_cprintf("*Date of Travel-        : ");
cout<<dt.date<<"/"<<dt.mon<<"/"<<dt.year;
cout<<endl<<"\n\t\t\t";
_cprintf("*Date of Return-        : ");
cout<<dr.date<<"/"<<dr.mon<<"/"<<dr.year;
cout<<endl<<"\n\t\t\t";
_cprintf("*Destination-           : ");
cout<<dest;
cout<<endl<<"\n\t\t\t";
_cprintf("*Boarding point-        : ");
cout<<start;
cout<<endl<<"\n\t\t\t";
_cprintf("*Train no.-             : ");
cout<<tno;
cout<<endl<<"\n\t\t\t";
_cprintf("*Adults travelling-     : ");
cout<<na;
cout<<endl<<"\n\t\t\t";
_cprintf("*Children travelling-   : ");
cout<<nc;
cout<<endl<<"\n\t\t\t";
_cprintf("*Status-                : ");
cout<<stat;
cout<<endl;
}
void cancel()
{
stat='C';
}
void addtrain()
{
setcolor(9);
cout<<endl<<"\n\t\t\t";
_cprintf("    *Enter train no : ");
cin>>tno;
cout<<endl<<"\n\t\t\t";
_cprintf("    *Enter train name : ");
gets(tname);
tstat='A';
}
int retu()
{
return(tno);
}
void tshow()
{
setcolor(9);
cout<<endl<<"\n\t\t\t";
_cprintf("    *Train number is : ");
cout<<tno;
cout<<endl<<"\n\t\t\t";
_cprintf("    *Train name is : ");
puts(tname);
cout<<endl<<"\n\t\t\t";
_cprintf("    *Status : ");
cout<<tstat<<endl;
cout<<endl;
}
void tcancel()
{
tstat='C';
}
char retur()
{
return(tstat);
}};
void menu()
{
int a=0,b=0,c=0;
setcolor(6);
cout<<"\n\t\t\t";
_cprintf("    ^^^^^^^^^^^^^^^^^^^^^^^^^^^");
cout<<endl<<"\n\t\t\t";
_cprintf("     !=======================!");
cout<<endl<<"\n\t\t\t";
_cprintf("        !**** WELCOME ****!");
cout<<endl<<"\n\t\t\t";
_cprintf("     !=======================!");
cout<<endl<<"\n\t\t\t";
_cprintf("    ^^^^^^^^^^^^^^^^^^^^^^^^^^^");
cout<<endl;
while(a!=3)
{
setcolor(4);
cout<<endl<<"\n\t\t\t";
_cprintf("     !========================!");
cout<<endl<<"\t\t\t";
_cprintf("     ******* MAIN MENU *******");
cout<<endl<<"\t\t\t";
_cprintf("     !========================!");
cout<<endl;
cout<<"\n\t\t\t";
_cprintf("     *1.User");
cout<<endl<<"\n\t\t\t";
_cprintf("     *2.Admin");
cout<<endl<<"\n\t\t\t";
_cprintf("     *3.Exit"); 
cout<<endl<<"\n\t\t\t";
_cprintf("     Choose Mode : ");
cin>>a;
cout<<endl<<endl<<endl;
switch(a)
{
case 1:
{
b=0;
while(b!=4)
{
setcolor(10);
cout<<endl<<"\n\t\t\t";
_cprintf("      !======================!");
cout<<endl<<"\t\t\t";
_cprintf("      !****** USER MENU *****!");
cout<<endl<<"\t\t\t";
_cprintf("      !======================!");
cout<<endl<<endl;
cout<<"\n\t\t\t";
_cprintf("      *1.Booking");
cout<<endl<<"\n\t\t\t";
_cprintf("      *2.Cancel Ticket");
cout<<endl<<"\n\t\t\t";
_cprintf("      *3.Enquiry");
cout<<endl<<"\n\t\t\t";
_cprintf("      *4.Exit");
cout<<endl<<"\n\t\t\t";
_cprintf("      Enter Choice : ");
cin>>b;
cout<<endl<<endl<<endl;
switch(b)
{
case 1:
{
fstream pas;
pas.open("passenger.dat",ios::binary|ios::in);
if(!pas)
{
pas.close();
pas.open("passenger.dat",ios::binary|ios::out);
}
else
{
pas.close();
pas.open("passenger.dat",ios::binary|ios::app);
}
User ad;
ad.get();
pas.write((char*)&ad,sizeof(ad));
cout<<"Record saved";
}
break;
case 2:
{
int temp,pos;
User ad;
char ch;
fstream pas;
pas.open("passenger.dat",ios::binary|ios::in|ios::out);
if(!pas)
cout<<"Database doesn't exist";
else
{
setcolor(11);
cout<<endl<<"\n\t\t\t";
_cprintf("     Enter ticket No : ");
cin>>temp;
cout<<endl<<endl;
while(pas.read((char*)&ad,sizeof(ad)))
{
if(temp==ad.ret())
{
setcolor(4);
close();
ad.show();
pos=pas.tellg()-sizeof(ad);
cout<<endl<<endl;
cout<<endl<<"\n\t\t\t";
_cprintf("   Want to cancel(yes(y)/no(n)) :");
cin>>ch;
if(ch=='y')
{
cout<<endl<<endl;
ad.cancel();
//pas.close();
//pas.open("passenger.dat",ios::binary|ios::app);
pas.seekp(pos);
pas.write((char*)&ad,sizeof(ad));
cout<<"Record modified";
}
}}
pas.close();
}}
break;
case 3:
{
int temp;
User ad;
fstream pas;
pas.open("passenger.dat",ios::binary|ios::in);
if(!pas)
cout<<"Database doesn't exist";
else
{
setcolor(1);
cout<<endl<<"\n\t\t\t";
_cprintf("      Enter ticket no : ");
cin>>temp;
cout<<endl<<endl;
while(pas.read((char*)&ad,sizeof(ad)))
if(temp==ad.ret())
{
close();
ad.show();
}}
pas.close();
}
break;
case 4:
break;
}
cout<<endl<<endl<<endl;
}}
close();
break;
case 2:
{
c=0;
while(c!=4)
{
setcolor(4);
cout<<endl<<"\n\t\t\t";
_cprintf("     !=============================!");
cout<<endl<<"\t\t\t";
_cprintf("     !**** ADMINISTRATION MENU ****!");
cout<<endl<<"\t\t\t";
_cprintf("     !=============================!");
cout<<endl<<"\n\t\t\t";
_cprintf("     *1.Add Train");
cout<<endl<<"\n\t\t\t";
_cprintf("     *2.Cancel Train");
cout<<endl<<"\n\t\t\t";
_cprintf("     *3.Train Availability");
cout<<endl<<"\n\t\t\t";
_cprintf("     *4.Exit");
cout<<endl<<"\n\t\t\t";
_cprintf("     Enter Choice : ");
cin>>c;
switch(c)
{
case 1:
{
fstream pas;
pas.open("passenger.dat",ios::binary|ios::in);
if(!pas)
{
pas.close();
pas.open("passenger.dat",ios::binary|ios::out);
}
else
{
pas.close();
pas.open("passenger.dat",ios::binary|ios::app);
}
User ad;
ad.addtrain();
pas.write((char*)&ad,sizeof(ad));
cout<<"Record saved";
}
break;
case 2:
{
int temp,pos;
User ad;
char ch;
fstream pas;
pas.open("passenger.dat",ios::binary|ios::in|ios::out);
if(!pas)
cout<<"Database doesn't exist";
else
{
setcolor(9);
cout<<endl<<"\n\t\t\t";
_cprintf("     ---------------------------");
cout<<endl<<"\n\t\t\t";
_cprintf("     Enter train no :");
cin>>temp;
cout<<endl<<"\n\t\t\t";
_cprintf("     ---------------------------");
cout<<endl<<endl;
while(pas.read((char*)&ad,sizeof(ad)))
{
if(temp==ad.retu())
{
clrscr();
ad.tshow();
pos=pas.tellg()-sizeof(ad);
cout<<endl;
cout<<endl<<"\n\t\t\t";
_cprintf("     Want to cancel(yes(y)/no(n)) :");
cin>>ch;
if(ch=='y')
{
cout<<endl<<endl;
ad.tcancel();
//pas.close();
//pas.open("passenger.dat",ios::binary|ios::app);
pas.seekp(pos);
pas.write((char*)&ad,sizeof(ad));
cout<<"Record modified";
}}}
pas.close();
}
break; 
clrscr();
}
case 3:
{
User ad;
fstream pas;
pas.open("passenger.dat",ios::binary|ios::in);
if(!pas)
cout<<"Database doesn't exist";
else
{
while(pas.read((char*)&ad,sizeof(ad)))
if(ad.retur()=='A')
{
ad.tshow();
}}
pas.close();
}
break;
clrscr();
}
cout<<endl<<endl<<endl;
}}
break;
case 3:
clrscr();
setcolor(12);
cout<<endl<<"\n\n\n\n\n\n\n\n\n\t\t";
_cprintf("   ********* AAPKI YATRA MANGALMAY HO *********");
break;
}}};
main()
{
menu();
getch();
}
void setcolor(int ForgC)
{
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