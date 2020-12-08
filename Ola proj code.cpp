#include<conio.h>
#include<iostream.h>
#include<graphics.h>
#include<dos.h>
class taxi          //class definition
{
char placename[10];    //character array
char name[30];          //character array
int km;
float rupee;
char ans;
int choice;
char addr[30];         //character array
public:
void ask()
{
//printing welcome to ola cab
cout<<"\\t\\t\\t  ****WELCOME TO TAXI FOR YOU****";
cout<<"\\n\\n\\nWhat do you want to do?"<<endl;
cout<<"1.Book a taxi"<<endl<<"2.About TAXI FOR YOU"<<endl;
cout<<"Enter your choice:";
cin>>choice;      //inputting choice
//switch case
switch(choice)
{
case 1:
input();     //function call
display();        //function call
break;
case 2:
//prints information about ola cabs
cout<<"\\n\\n\\t\\t\\t\\t****TAXI****"<<endl;
cout<<"\\n\\n\\n\\n\\t\\tTAXI FOR YOU is a cab system which is designed for the passenger who need to go from one place to another place and not having any own vehicle. Taxi for you will only ask for your destination and landmark (from where you want to go) and the date and timings. The taxi will hire you on the time and this taxi is local as well as it travels throughout India.";
cout<<"\\nRs.49 will be charged for 5kms.\\n";
cout<<"And Rs.12 will be charged for every km if it is more than 5.";
break;
}
}
void input()
{
//for booking a cab
cout<<"\\t\\t     ***WELCOME TO TAXI FOR YOU BOOKING***";
cout<<endl<<"\\nEnter your name:";
cin>>name;
cout<<"\\nHello "<<name<<" welcome to taxi for you";
cout<<endl<<"\\nEnter the place name you want to go:";
cin>>placename;
cout<<"\\nEnter your landmark:";
cin>>addr;
cout<<endl<<"Enter kms:";
cin>>km;

if(km<=5)
{
rupee=49.00;        //bill for kms<=5
}
else
{
rupee=49.00+(km-5)*12;  //calculating bill for kms more than 5
}
}
void display()       //function call
{
int time;
int date,month,year;
char ch[3];          //character array
cout<<endl<<"Your name is:"<<name<<endl;
cout<<endl<<"The place where you want to go is:"<<placename<<endl;
cout<<endl<<"your km is:"<<km<<endl;
cout<<endl<<"As per your kms,your bill is:Rs."<<rupee<<endl;
cout<<"\\nDo you want to book the taxi?(y\\\\n):";
cin>>ans;
if(ans=='y'||ans=='Y')         //execute if ans=y
{
cout<<"\\nTaxi booked...!!"<<endl;
cout<<"\\nWhen do you want the taxi?"<<endl;
cout<<"\\nEnter the date and time:";
cout<<"\\n\\nPlease enter this in digits";
x:cout<<"\\nDate:";            //inputting date
cin>>date;
if(1>date||date>31)
{
cout<<"\\nPlease enter valid date!!!";
goto x;
}
else
{
v:cout<<"\\nMonth:";             //inputting month
cin>>month;
if(month>12)
{
cout<<"Please enter a valid month!!!";
goto v;
}
else
{
y:cout<<"\\nYear:";
cin>>year;	 //inputting year
 }
if(year<2015)
{
cout<<"\\nPlease enter a valid year!!!";
goto y;
}
else
{
z:cout<<"\\nTime:";
cin>>time;	  //inputting time
if(time>12)
{
cout<<"Please enter a valid timing";
goto z;
}
else
{
cout<<"\\nam or pm?\\n";      //for am or pm?
cin>>ch;
cout<<"\\nThe taxi will pick you at "<<time<<ch<<" on the day "<<date<<"/"<<month<<"/"<<year<<" near "<<addr<<endl;
cout<<"\\nTHANK YOU FOR USING TAXI FOR YOU"<<endl;
cout<<"\\n                              ***VISIT AGAIN***"<<endl;
}
}
}
}
else
{
cout<<endl<<"Booking cancelled....!!!"<<endl<<endl; //if ans=n
cout<<"                                ***VISIT AGAIN***";

}
}   //end of switch
};         //terminating class
void main()
{
clrscr();

 int gdriver=DETECT,gmode,i=0,j=0;
 initgraph(&gdriver,&gmode,"c:\\\\turboc3\\\\bgi");

 for(i;i<420;++i)
 {
  line(0,245,650,245);
  line(0+i,200,210+i,200);
  line(50+i,200,70+i,170);
  line(70+i,170,140+i,170);
  line(140+i,170,160+i,200);
  line(85+i,170,85+i,200);
  line(125+i,170,125+i,200);

  line(0+i,200,0+i,230);
  line(210+i,200,210+i,230);
  line(0+i,230,50+i,230);
  circle(65+i,230,15);
  line(80+i,230,130+i,230);
  circle(145+i,230,15);
  line(210+i,230,160+i,230);

  pieslice(65+i,230,359-j,360-j,15);
  pieslice(65+i,230,179-j,180-j,15);
  pieslice(65+i,230,89-j,90-j,15);
  pieslice(65+i,230,269-j,270-j,15);

  pieslice(145+i,230,359-j,360-j,15);
  pieslice(145+i,230,179-j,180-j,15);
  pieslice(145+i,230,89-j,90-j,15);
  pieslice(145+i,230,269-j,270-j,15);

  if(j==179)
   j=0;
  ++j;
  delay(20);
  cleardevice();
 }
 closegraph();
taxi o;       //object creation
o.ask();      //function call
getch();
}
}
