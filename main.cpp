#include <iostream.h>
#include<stdio.h>
#include <conio.h>
#include <string.h>
struct Flight
{  string fnum;
  int capacity;
}
struct Passenger
{ char PassNo [20], airline [20] ;
  int dd,mm,yy;
  char name [20], cityarr[20], citydep[20];
  int DD,MM,YY;
  // dd/mm/yy = DOB
  // DD/MM/YY = DATE OF DEPARTURE
} a[20];
char airlines[][20] = {"ETIHAD AIRWAYS","JET AIRWAYS","AMERICAN AIRLINES","EMIRATES","AIR INDIA"};
void Booking (Passenger a[20], int);
void Edit (Passenger a[20],int);
void Cancel (Passenger a[20], int);
void Check (Passenger a[20],int);
void main ()
{ int n, ch;
  cout <<"\n Welcome to Ali-Baba Travels and Booking Services";
  cout <<"\n Enter the limit for number of passengers that you are booking for";
  cin>>n;
  do
    { cout<<"\n Menu";
      cout<<"\n 1. Make a booking";
      cout<<"\n 2. Edit a current booking";
      cout<<"\n 3. Cancel your booking";
      cout<<"\n 4. Track your booking";
      cout<<"\n 5. Exit";
      cout<<"\n Please enter your choice to continue";
      cin>>ch;
      switch (ch)
        { case 1: Booking(a,n);
                  break;
          case 2: Edit(a,n);
                  break;
          case 3: Cancel(a,n);
                  break;
          case 4: Check(a,n);
                  break;
          case 5: exit(0);
                  break;
        }
    } while (ch<=5);
getch ();
}
void Booking(Passenger a[20],int n)
{   int ch,i;
    cout<<"\n Thank you for choosing to make a reservation with us";
    cout<<"\n The following is the list of airlines that can be booked through our portal";
    //cout<<"\n 1. ETIHAD AIRWAYS";
    //cout<<"\n 2. JET AIRWAYS";
    //cout<<"\n 3. AMERICAN AIRLINES";
    //cout<<"\n 4. EMIRATES";
    //cout<<"\n 5. AIR INDIA";
    for (i=0,;i<5;i++)
        cout<<airlines[i];
    cout<<"\n Enter passenger details";
    for(i=0;i<n;i++)
    {   cout<<"\n Please enter NAME, PASSPORT NUMBER AND DATE OF BIRTH TO PROCEED\t";
        cin>>a[i].name>>a[i].dd>>a[i].mm>>a[i].yy>>a[i].PassNo;
    }
    cout<<"\n Please enter your city of departure and arrival\t";
    for(i=0;i<n;i++)
    {   cout<<"\n Passenger "<<i;
        cin>>a[i].cityarr>>a[i].citydep;
    }
    cout<<"\n Kindly enter your required date of departure\t";
    for(i=0;i<n;i++)
    {   cout<<"\n Passenger "<<i;
        cin>>a[i].DD>>a[i].MM>>a[i].YY;
    }
    cout<<"\n Thank you. The following Passengers are available for your entered choices:";
    cout<<"\n 1.ETIHAD AIRWAYS EY210 DEPARTURE TIME: 0800HRS";
    cout<<"\n 2.JET AIRWAYS 9W321 DEPARTURE TIME: 1830HRS";
    cout<<"\n 3.EMIRATES EK 213 DEPARTURE TIME: 2000HRS";
    cout<<"\n Enter the name of your preferred airline and Passenger number\t";
    for(i=0;i<n;i++)
    {   cout<<"\n Passenger "<<i;
        cin>>a[i].airline;
    }
    cout<<"\n Your airline has been successfully accepted";
    cout<<"\n You have successfully made a booking with your preferred airline on the given date and time.";
    cout<<"\n Do you wish to track your booking?";
    cout<<"\n 1. YES(Y)";
    cout<<"\n 2. NO(N)";
    cout<<"\n Enter your choice";
    cin>> ch;
    switch (ch)
      {case 'Y': Check(a,n);
       case 'N': cout<<"\n Thank you for booking with us. Please visit us again";
      }
}

void Edit(Passenger a[20],int n)
{ char ch,pno;
  cout<<"\n You have selected to edit your current Passenger booking";
  cout<<"\n Please enter your passport number\t";
  cin>>pno;
  for(i=0;i<n;i++)
  {if (strcmpi(a[i].PassNo,pno)==0)
      {cout<<"\n Your current reservation details are\t";
       cout<<a[i].cityarr<<" "<<a[i].citydep<<" "<<a[i].name<<" "<<a[i].PassNo<<" "<<a[i].airline<<" DATE OF DEPARTURE"<<a[i].DD<<a[i].MM<<a[i].YY;
       cout<<"\n Do you wish to edit the"
       cout<<"\n 1. Date of Departure";
       cout<<"\n 2. Airline choice";
       cout<<"\n Enter your choice";
       cin>>ch;
       switch (ch)
       {case 1: cout<<"\n Enter your new date\t";
                cin>>a[i].DD>>a[i].MM>>a[i].YY;
        case 2: cout<<"\n Enter your new choice";
                cout<<"\n 1.ETIHAD AIRWAYS EY210 DEPARTURE TIME: 0800HRS";
                cout<<"\n 2.JET AIRWAYS 9W321 DEPARTURE TIME: 1830HRS";
                cout<<"\n 3.EMIRATES EK 213 DEPARTURE TIME: 2000HRS";
                cin>>a[i].airline;
        }
      }
    else
         cout <<"\n Your passport number doesn't have a match with our database.";
  }
  cout<<"\n Your Passenger details have been updated";
}

void Cancel(Passenger a[20],int n)
 { char ch,pno;
  cout<<"\n You have selected to cancel your current Passenger booking";
  cout<<"\n Please enter your passport number\t";
  cin>>pno;
  for (i=0;i<n;i++)
     {if (strcmpi(a[i].PassNo,pno)==0)
          {cout<<"\n Your current reservation details are\t";
           cout<<a[i].cityarr<<" "<<a[i].citydep<<" "<<a[i].name<<" "<<a[i].PassNo<<" "<<a[i].airline<<" DATE OF DEPARTURE:"<<a.[i]DD<<<<"/"<<a[i].MM<<"/"<<a[i].YY;
           cout<<"\n Do you wish to:";
           cout<<"\n 1. Cancel";
           cout<<"\n 2. Edit";
           cout<<"\n Enter your choice\t";
           cin>>ch;
           switch (ch);
           {case 1: a[i].airline = a.[i]cityarr = a[i].citydep = a[i].name = a[i].PassNo = " ";
                    a[i].DD=a[i].dd=a[i].MM=a[i].mm=a[i].PassNo=a[i].YY=a[i].yy= 0;
                    cout<<"\n Your details have been canceled";
            case 2: Edit (a,n);
           }
          }
      else
         cout <<"\n Your passport number doesn't have a match with our database.";
     }
 }

 void Check(a[20],int n)
 { char ch,pno;
  cout<<"\n You have selected to cancel your current Passenger booking";
  cout<<"\n Please enter your passport number\t";
  cin>>pno;
  for (i=0;i<n;i++)
     {if (strcmpi(a[i].PassNo,pno)==0)
          {cout<<"\n Your current reservation details are\t";
           cout<<a[i].airline<<" DATE OF DEPARTURE:"<<a.[i]DD<<<<"/"<<a[i].MM<<"/"<<a[i].YY<<"\t";
           cout<<a[i].cityarr<<" "<<a[i].citydep<<" "<<a[i].name<<" "<<a[i].PassNo;
          }
     }
 }
