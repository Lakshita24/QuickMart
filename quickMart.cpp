#include<bits/stdc++.h>
#include<string>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int oldID;
void choicebox();
void menu();
void load(int a)
{   int v;
    for(int h=0;h<a;h++)
    {v=0;}}
void loading()
{   cout<<"LOADING";
    for(int j=0;j<11;j++)
    {   load(9999999);
        cout<<" .";}
    cout<<"\n";
    system("cls");}
void Address(string address)
{cout<<"\nYour Order will be delevered at Address: "<<address<<" shortly in "<<rand()%40+20<<" minutes."<<endl;}
int valid(long long int n)
{   long long int g;
    int cdi=0;
    for(g=n;g>0;g=g/10)
        cdi++;
    if(cdi==16)
        return 1;
    else
        return 0;}
void payment(double d)
{   long long int p;
    cout<<"PLEASE ENTER YOUR CREDIT/DEBIT CARD\n";
    cin>>p;
    cout<<"LOADING";
    for(int j=0;j<11;j++)
    {   load(9999999);
        cout<<" .";}
    cout<<"\n";
    int che=0;
    while(che==0)
    {   che=valid(p);
    if(che==1)
    {cout<<"-----------------------------------\nPAYMENT SUCCESSFUL OF Rs. "<<d<<" THROUGH CARD XXXX XXXX XXXX "<<p%10000;}
    else
    {cout<<"\n------------------ENTER A VALID CARD NUMBER------------------\n";
    cin>>p;
    cout<<"LOADING";
    for(int j=0;j<11;j++)
    {   load(9999999);
        cout<<" .";}
    cout<<"\n";}}
    printf("-----------------------------------\nTHANKYOU FOR SHOPPING FROM QUICK TECH MART!!!\n\n");}
class user
{   public:
    string name;
    int id;long long int phn;
    string pass;
    string temp3;
    user()
    {phn=rand()%10000000000;}
    void assignid(int k)
    {id=k;}
    void assignpass(string s)
    {pass=s;}
    int getid()
    {return id;}
    string getpass()
    {return pass;}};
class mainscr:public user
{   int choice,id3,flag;
    char vl=179,hl=196,ul=218,br=192,ur=191,bl=217;
    public:
    int temp1;string temp,pass2;int temp2;
    user *us[10];
    mainscr()
    {
        int pass1=500;
        string s1;
        for(int i=0;i<10;i++)
        {us[i]=new user;}
        for(int i=0;i<10;i++)
        {
            us[i]->assignid(100+i);
            s1=to_string(pass1);
            us[i]->assignpass(s1);
            pass1=pass1+5;
        }}
    int print()
    {cout<<"\t\t\t"<<ul;
     for(int i=0;i<36;i++)
     cout<<hl;
     cout<<ur;
     cout<<"\n\t\t\t"<<vl<<"      WELCOME TO QUICK TECH MART    "<<vl;
     cout<<"\n\t\t\t"<<br;
     for(int i=0;i<36;i++)
     cout<<hl;
     cout<<bl;
     cout<<"\n";
        cout<<"\n\nMENU:\n\nPRESS 1 TO LOGIN\nPRESS 2 FOR CHANGE PASSWORD\n\nYOUR CHOICE: ";
        cin>>choice;
        return choice;}
    int login()
    {   int h,count=0;
        cout<<"\nYOU'VE CHOSEN TO LOGIN...\n\nENTER LOGIN ID: ";
        cin>>temp1;
        for(int i=0;i<10;i++)
        {
            id3=us[i]->getid();
            if(temp1==id3)
                {
                    count++;
                    h=i;
                }
        }
        if(count!=0)
            {cout<<"ENTER PASSWORD: ";
            cin>>temp;
             pass2=us[h]->getpass();
            if(temp==pass2)
            {
                cout<<"\nLOGIN SUCCESSFUL...!\n";
                loading();
                flag=1;
            }
            else
            {
                cout<<"\nWRONG PASSWORD...TRY AGAIN\n\n";
                flag=0;
                login();}}
        else
            {cout<<"LOGINID NOT REGISTERED...TRY AGAIN!\n";
             flag=0;
             login();
            }return flag;
}
void changepass()
    {
        cout<<"\nYOU'VE CHOSEN TO CHANGE PASSWORD...\n\nENTER LOGIN ID: ";
        cin>>temp1;
        for(int i=0;i<10;i++)
        {
            id3=us[i]->getid();
            pass2=us[i]->getpass();
        if(temp1==id3)
        {
        cout<<"ENTER OLD PASSWORD: ";
        cin>>temp3;
        if(temp3==pass2)
        {
            cout<<"\nENTER NEW PASSWORD: ";
            cin>>temp2;
            us[i]->pass=to_string(temp2);
            cout<<"\nPASSWORD UPDATED SUCCESSFULLY.";
        }
        else
        {
            cout<<"\nWRONG PASSWORD...TRY AGAIN\n\n";
            changepass();
        }}}}};
    class mobile                 //MOBILE RECHARGE
{
    int mob,key,r;double flag;
    string arr[4]={"AIRTEL","JIO","VODAFONE IN","BSNL"};
    double plan[3]={149,399,599};int validity[3]={1,2,3};string benefits[3]={"Only Unlimited calls No data","Unlimited calls+ 1gb data per day","Unlimited calls+ 2gb data per day"};
    public:
    double amt=rand()%500;
    double print()
    {
        cout<<"Enter a phone number: ";
        cin>>mob;
        if(mob%10000000000>=1)
        {
            cout<<"\nOperator: "<<arr[rand()%3]<<endl;
            cout<<"\nPress 1 for postpaid and 2 for prepaid\n";
            cin>>key;
            switch(key)
            {case 1:cout<<"The bill is: "<<amt;
            flag=amt;
            break;
            case 2:cout<<"\nPlans:\nChoice\t\tPrice\t\tValidity\t\tBenefits"<<endl;
            for(int i=0;i<3;i++)
        {
            cout<<i+1<<"\t\t"<<plan[i]<<"\t\t"<<validity[i]<<"\t\t"<<benefits[i]<<endl;
        }
        cout<<"\nChoose Plan"<<endl;
        cin>>r;
        cout<<"\nAmount Payable : Rs. "<<plan[r-1]<<endl<<endl;
        flag=plan[r-1];
        break;
        default:cout<<"\nInvalid Choice...Try Again...!\n\n";print();}}
        else
        {
            cout<<"not valid number...Try again"<<endl;
            print();
        }
        return flag;
    }};
char vl=179,hl=196,ul=218,br=192,ur=191,bl=217;


struct details
{
    float l;
    float s;
    float e;
    float h;
    float w;
    float score;
}d;
void heading() //function for heading
{
     cout<<"\t\t\t"<<ul;
     for(int i=0;i<25;i++)
     cout<<hl;
     cout<<ur;
     cout<<"\n\t\t\t"<<vl<<"      QUICK TECH MART    "<<vl;
     cout<<"\n\t\t\t"<<br;
     for(int i=0;i<25;i++)
     cout<<hl;
     cout<<bl;
     cout<<"\n";
}
void line()
{
    cout<<"\n\t"<<"    *";
        for(int i=0;i<50;i++)
        cout<<"*";}
 void end()
{
    int temp;
    system("cls"); //to clear screen
    heading();
    cout<<"\n\n\n";
    line();
    cout<<"\n\n\t"<<"                         THANK YOU                 \n";
    line();
    cout<<"\n\n\n\n\n\n\t                  DESIGNED AND DEVELOPED BY    \n";
    cout<<"\n\n\tAYUSH SINGH CHAUHAN, LAKSHITA GUPTA, AMAN KAKKAR, SAMRIDHI  \n\n\n\t\t\tPress Any key to Exit finally\n\t\t\t\t\t";
    if(getch())
exit(0);}
void menu1()
{
     cout<<"\n\t"<<ul;
     for(int i=0;i<55;i++)
     cout<<hl;
     cout<<ur;
     cout<<"\n\t"<<vl<<"            CHOOSE YOUR REQUIRED OPTION                "<<vl;
     cout<<"\n\t"<<vl;
     for(int i=0;i<55;i++)
     cout<<" ";
     cout<<vl;
     cout<<"\n\t"<<vl<<"                     1. ELECTRICITY                    "<<vl;
     cout<<"\n\t"<<vl;
     for(int i=0;i<55;i++)
     cout<<" ";
      cout<<vl;
     cout<<"\n\t"<<vl<<"                     2. CASHBACK GAMING                "<<vl;
    cout<<"\n\t"<<vl;;
     for(int i=0;i<55;i++)
    cout<<" ";
      cout<<vl;
     cout<<"\n\t"<<vl<<"                     3. ONLINE GROCERY                 "<<vl;
    cout<<"\n\t"<<vl;
     for(int i=0;i<55;i++)
     cout<<" ";
      cout<<vl;
    cout<<"\n\t"<<vl<<"                     4. MOBILE RECHARGE                "<<vl;
      cout<<"\n\t"<<vl;
     for(int i=0;i<55;i++)
     cout<<" ";
      cout<<vl;
    cout<<"\n\t"<<vl<<"                     5. ONLINE FOOD ORDERING           "<<vl;
    cout<<"\n\t"<<vl;
     for(int i=0;i<55;i++)
     cout<<" ";
      cout<<vl;
     cout<<"\n\t"<<vl<<"                     6. EXIT                           "<<vl;
    cout<<"\n\t"<<vl;
     for(int i=0;i<55;i++)
     cout<<" ";
      cout<<vl;
      cout<<"\n\t"<<vl;
     for(int i=0;i<55;i++)
     cout<<" ";
      cout<<vl;
      cout<<"\n\t"<<br;
     for(int i=0;i<55;i++)
     cout<<hl;
     cout<<bl;}
class EleBill                         //ELECTRICITY BILL
{
private:
    int cUnit,pUnit,unit;double amt;
public:
    void get();
    void printAmount();
};
void EleBill::get()
{
    cout << "Enter Consumer Id:";
    cin>>oldID;
    pUnit=rand()%300;
}
/*1 - 100 = 0.5
101 - 200 = 1
201 - 300 = 3
above 300 - 5*/
void EleBill::printAmount()
{
    cout<<"\nYour previous billed units dated (24/4/2021) : "<<pUnit<<endl;
     cout << "\nEnter current unit : ";
    cin>>cUnit;//ask input from the user for current unit
    try{
        if(cUnit<pUnit)
        {
            throw 1;
        }
    unit=cUnit-pUnit;
    if(unit>0 && unit<=100)
    {
        amt=unit*0.5;
    }
    if(unit>100 && unit<=200)
    {
        amt=unit*1;
    }
    if(unit>200 && unit<=300)
    {
        amt=unit*3;
    }
    if(unit>300)
    {
        amt=unit*5;
    }
    cout << "\nBill charge: " <<amt <<endl<<endl;
    payment(amt);
    }
    catch (int)
    {
        cout<<"\n\nCurrent units cannot be less than previous units. Current unit is sum of unit and previous unit."<<endl;
        cout<<"Try entering the current unit and previous unit again\n \n"<<endl;
        printAmount();
    }
    }
                                      //ONLINE GROCERY
class Grocery{
public:
int item=0;string add;
float Milk=60;
float Egg = 8;
float Cheese = 120;
float Pasta = 100;
char ch;
float cost=0.00;// take the starting cost 0
int count=0 ;//count of items
int fund=0;
float valueoffund=5.00;// value of the tip
double totalcost;
float total=0.00;
void Bill(){
cout<<"\nYour Bill Amount says : "<<total<<endl;
total=total+(0.18*total);
cout<<"\nTotal Amt is incl. 18 percent GST : "<<total<<endl;
cout<<"\nDO YOU WANT TO ADD RS.5 FOOD FUND?\nPRESS 1 FOR YES OR 2 FOR NO"<<endl;
cin>>fund;
cout<<"\nEnter delivery address: ";getchar();getline(cin,add);
switch(fund)
{
   case 1:
    total=total+valueoffund;
cout<<"\nAmount : "<<total<<endl;
    break;
case 2:
   cout<<"\nAmount : "<<total<<endl;
   break;
}
if(total<=500)
{
   cout<<"Your Delivery is : 80"<<endl;
   totalcost = total+80;
   cout<<"Amount Payable is : "<<totalcost<<endl<<endl;
    payment(totalcost);Address(add);
}
else if(500<total<700.00)
{
cout<<"Your Delivery cost is : 50"<<endl;
   totalcost = total+50;
   cout<<"Amount Payable is : "<<totalcost<<endl<<endl;
    payment(totalcost);Address(add);
}
else
{
cout<<"Your Delivery cost is free"<<endl;
totalcost = total;
cout<<"Amount Payable is : "<<totalcost<<endl<<endl;
payment(totalcost);Address(add);
}
}
                                                            // Asking Customer For The Items
   char inp(){
       char ch;
   cout<<"\nChoose Your Item : ";
   cin>> item;
    switch (item) {
case 1:
cout << "Milk\t:\t"<<Milk<<endl;
cost=Milk;
break;
case 2:
cout << "Egg\t:\t"<<Egg<<endl;;
cost=Egg;
break;
case 3:
cout << "Cheese\t:\t"<<Cheese<<endl;
cost=Cheese;
   break;
case 4:
cout << "Pasta\t:\t"<<Pasta<<endl;;
cost=Pasta;
   break;
}
                                                                //asking customer quantity of item
cout<<"Enter Quantity : ";
cin>>count;
total=total+(cost*count);
cost=0;
count=0;
cout<<"\nDo you want to purchase more?\nEnter 'y' for yes and any other character for no: "<<endl;
cin>>ch;
return ch;
   }
   void grocery(){
       char ch;
   cout<<"\t\t*******************************************\n";
   cout<<"\t\t        GROCERY SHOPPING ITEMS"<<endl;
   cout<<"\t\t*******************************************\n\n\n";
   cout<<"1. MILK    : RS.60  / LITRE"<<endl;
   cout<<"2. EGG     : RS.8   / PIECE"<<endl ;
   cout<<"3. CHEESE  : RS.120 / PACKET"<<endl;
   cout<<"4. PASTA   : RS.100 / KG"<<endl;
   do
   {ch=inp();}
   while((ch=='y')||(ch=='Y'));
Bill();
}
};
class food
{
public:
    char ans;
    int choice;
    float sum[4]= {0,0,0,0};
    int num[4]={0,0,0,0};


    int ind_item[5], ind_q[5] , ind_price[5], ind_tot[5];
    int i_item[4], i_q[4] , i_price[4], i_tot[4];
    int c_item[5], c_q[5] , c_price[5], c_tot[5];
    int d_item[5], d_q[5] , d_price[5], d_tot[5];
void Welcome();
void about_us();
void Menu();
void indian();
void italian();
void chinese();
void drinks();
void bill();
};
void food:: Welcome()
{
    char fullname[30]; int a;
    cout<<"\n\n>> 1. SHOW TODAY'S MENU\n>> 2. EXIT\n\n";
    cin>>a;
    if(a==1)
    {
        Menu();
    }
    else if(a==2)
    {
        about_us();
    }
}
void food:: about_us()
{
    system("cls");
    cout<< "chefs BEHIND THIS delicious food :\n\n"<<   "~>LAKSHITA GUPTA\n\n"<<
     "~>AMAN KAKKAR\n\n"<<       "~>AYUSH SINGH CHAUHAN\n\n"<<      "~>SAMRIDHI \n\n";


    cout<<"-->FROM THE BEST FARMS TO YOUR TABLE \n\n"<<
          "-->ORGANIC INGREDIENTS AND HEALTHY RECIPIES, DELIVERED!!!! \n\n"<<
          "-->SERVING THE BEST QUALITY WITH PASSION AND FROM A HEALTHY ATMOSPHERE!!!!\n\n\n";


    cout<<"PRESS ANY KEY TO CONTINUE";
    if(getch())
    {cout<<"\n\n\nENTER YOUR CHOICE          "<<endl;
     cout<<"1. BACK TO MAIN MENU!!"<<endl;
     cout<<"2. EXIT"<<endl;
     cin>>choice;
     if(choice==1)
     {
      loading();


      heading();
      menu1();
      choicebox();
     }
     if(choice==2)
     {
         end();
     }}
}
void food::Menu()
{
    system("cls");
    string mmenu[]={"--INDIAN STREET--","--ITALIAN CUISINE--","--CHINESE CHOICE--","--DRINKS n SHAKES--",
    "--GET MY BILL--","--BACK TO MAIN MENU--"};
   int option;
    loading();
    cout<<"Here's today's menu...!! Happy ordering (^_^) "<<endl;
    cout<<"\n\n";
    cout<<"             *********************************************"<<endl;
    cout<<"                                TODAY'S MENU              "<<endl;
    cout<<"             *********************************************"<<endl;


    for(int i=0; i<6; i++)
    {
        cout<<i+1<<">>       "<<mmenu[i]<<endl;
    }
    cout<<"\nEnter your choice : \n";
    cin>>option;
    if(option>=1 && option <=6)
    {
        if(option==1) {loading();indian();}
        else if (option == 2) {loading(); italian();}
        else if (option == 3) {loading(); chinese();}
        else if (option == 4) {loading(); drinks();}
        else if (option == 5) {loading(); bill();}
        else if (option == 6) {loading(); Welcome();}
    }
    else {cout<<"Invalid input!..please enter again : "; Menu();}
}
void food:: indian()
{
    string Indian[] = {"PANEER TIKKA        | Rs. 70/-","VEG KEBAB           | Rs. 50/-",
    "SAMOSA              | Rs.10/-","AALU TIKKI          | Rs.40/-","FRIED CHAAP         | Rs.50/-"};


    for(int i=0; i<5;i++)
        {
            cout<<">> "<<Indian[i]<<endl;
        }
    cout<<"Would you like to have something from the list?  (y/n) ";
    cin>> ans;
    if(ans=='y'|| ans=='Y')
        {
            cout<<"Enter no. of choice(s) : ";
            cin>>num[0];


            for(int i=0; i<num[0]; i++)
            {
                cout<<"Enter choice ["<<i+1<<"] :";
                cin>>ind_item[i];
                cout<<"Enter quantity : ";
                cin>>ind_q[i];
                if(ind_item[i]==1)
                {
                    Indian[i]="PANEER TIKKA"; ind_price[i] = 70;
                    ind_tot[i] = ind_price[i]* ind_q[i];
                }
                else if(ind_item[i]==2)
                {
                    Indian[i]="VEG KEBAB   "; ind_price[i] = 50;
                    ind_tot[i] = ind_price[i]* ind_q[i];
                }
                else if(ind_item[i]==3)
                {
                    Indian[i]="SAMOSA      "; ind_price[i] = 10;
                    ind_tot[i] = ind_price[i]* ind_q[i];
                }
                else if(ind_item[i]==4)
                {
                    Indian[i]="AALU TIKKI  "; ind_price[i] = 40;
                    ind_tot[i] = ind_price[i]* ind_q[i];
                }
                else if(ind_item[i]==5)
                {
                    Indian[i]="FRIED CHAAP  "; ind_price[i] = 50;
                    ind_tot[i] = ind_price[i]* ind_q[i];
                }
                else {cout<<"Invalid input!...please order again.."; indian();}
                sum[0]+= ind_tot[i];
            }
            system("cls");
            cout<<"\n\nYour order is recorded :)\n\n";
            for(int i=0; i<num[0]; i++)
            {
                cout<<i+1<<"\t\t"<<Indian[i]<<"\t\t"<<ind_q[i]<<"\t\t"<<ind_tot[i]<<"\n\n";
            }
            cout<<"your total for Indian Street is Rs."<<sum[0]<<"/-"<<endl;
            cout<<"Press any key to go back ! ";
            if(getch()) {Menu();}
        }
    else if(ans=='n'|| ans=='N')
    { Menu(); }
}
void food::italian()
{
    string Italian[] = {"MAC n CHEESE Paasta |Rs.110/-","RED PAASTA          |Rs.80/-",
                     "WHITE PAASTA        |Rs.80/-","GRILLED VEG LASAGNA |Rs.100/-"};


    for(int i=0; i<4;i++)
        {
            cout<<">> "<<Italian[i]<<endl;
        }
    cout<<"Would you like to have something from the list?  (y/n) ";
    cin>> ans;
    if(ans=='y'|| ans=='Y')
        {
            cout<<"Enter no. of choice(s) : ";
            cin>>num[1];


            for(int i=0; i<num[1]; i++)
            {
                cout<<"Enter choice ["<<i+1<<"] :";
                cin>>i_item[i];
                cout<<"Enter quantity : ";
                cin>>i_q[i];
                if(i_item[i]==1)
                {
                    Italian[i]="MAC n CHEESE PAASTA"; i_price[i] = 110;
                    i_tot[i] = i_price[i]* i_q[i];
                }
                else if(i_item[i]==2)
                {
                    Italian[i]="RED PAASTA         "; i_price[i] = 80;
                    i_tot[i] = i_price[i]* i_q[i];
                }
                else if(i_item[i]==3)
                {
                    Italian[i]="WHITE PAASTA       "; i_price[i] = 80;
                    i_tot[i] = i_price[i]* i_q[i];
                }
                else if(i_item[i]==4)
                {
                    Italian[i]="Grilled VEG Lasagna"; i_price[i] = 100;
                    i_tot[i] = i_price[i]* i_q[i];
                }


                else {cout<<"Invalid input!...please order again.."; italian();}
                sum[1]+= i_tot[i];
            }
            system("cls");
            cout<<"\n\nYour order is recorded :)\n\n";
            for(int i=0; i<num[1]; i++)
            {
                cout<<i+1<<"\t\t"<<Italian[i]<<"\t\t"<<i_q[i]<<"\t\t"<<i_tot[i]<<"\n\n";
            }
            cout<<"your total for ITALIAN CUISINE is Rs."<<sum[1]<<"/-"<<"\n\n";
            cout<<"Press any key to go back ! ";
            if(getch()) {Menu();}
        }
    else if(ans=='n'|| ans=='N')
    { Menu(); }
}
void food:: chinese()
{
    string Chinese[] = {"CHOWMEIN          |Rs.80/-","SPRING ROLLs      |Rs.50/-",
                     "VEG MOMOS         |Rs.50/-","CHILLI POTATO     |Rs.80/-","MANCHURIAN        |Rs.70/-"};


    for(int i=0; i<5;i++)
        {
            cout<<">> "<<Chinese[i]<<endl;
        }
    cout<<"Would you like to have something from the list?  (y/n) ";
    cin>> ans;
    if(ans=='y'|| ans=='Y')
        {
            cout<<"Enter no. of choice(s) : ";
            cin>>num[2];


            for(int i=0; i<num[2]; i++)
            {
                cout<<"Enter choice ["<<i+1<<"] :";
                cin>>c_item[i];
                cout<<"Enter quantity : ";
                cin>>c_q[i];
                if(c_item[i]==1)
                {
                    Chinese[i]="CHOWMEIN    "; c_price[i] = 80;
                    c_tot[i] = c_price[i]* c_q[i];
                }
                else if(c_item[i]==2)
                {
                    Chinese[i]="SPRING ROLLS"; c_price[i] = 50;
                    c_tot[i] = c_price[i]* c_q[i];
                }
                else if(c_item[i]==3)
                {
                    Chinese[i]="VEG MOMOS    "; c_price[i] = 50;
                    c_tot[i] = c_price[i]* c_q[i];
                }
                else if(c_item[i]==4)
                {
                    Chinese[i]="CHILLI POTATO"; c_price[i] = 80;
                    c_tot[i] = c_price[i]* c_q[i];
                }
                else if(c_item[i]==5)
                {
                    Chinese[i]="MANCHURIAN"; c_price[i] = 80;
                    c_tot[i] = c_price[i]* c_q[i];
                }
                else {cout<<"Invalid input!...please order again.."; italian();}
                sum[2]+= c_tot[i];
            }
            system("cls");
            cout<<"\n\nYour order is recorded :)\n\n";
            for(int i=0; i<num[2]; i++)
            {
                cout<<i+1<<"\t\t"<<Chinese[i]<<"\t\t"<<c_q[i]<<"\t\t"<<c_tot[i]<<"\n\n";
            }
            cout<<"your total for CHINESE is Rs."<<sum[2]<<"/-\n\n";
            cout<<"Press any key to go back ! ";
            if(getch()) {Menu();}
        }
    else if(ans=='n'|| ans=='N')
    { Menu(); }
}
void food:: drinks()
{
    string Drink[] = {"BLUE_LAGOON MOCKTAIL  |Rs.50/-","HAVOI DRINK           |Rs.50/-",
                     "CHOCO_VANILLA SHAKE   |Rs.70/-","OREO SHAKE            |Rs.60/-","LEMON_MOJITO          |Rs.40/-"};


    for(int i=0; i<5;i++)
        {
            cout<<">> "<<Drink[i]<<endl;
        }
    cout<<"Would you like to have something from the list?  (y/n) ";
    cin>> ans;
    if(ans=='y'|| ans=='Y')
        {
            cout<<"Enter no. of choice(s) : ";
            cin>>num[3];


            for(int i=0; i<num[3]; i++)
            {
                cout<<"Enter choice ["<<i+1<<"] :";
                cin>>d_item[i];
                cout<<"Enter quantity : ";
                cin>>d_q[i];
                if(d_item[i]==1)
                {
                    Drink[i]="BlUE_LAGOON MOCKTAIL"; d_price[i] = 50;
            d_tot[i] = d_price[i]* d_q[i];
                }
                else if(d_item[i]==2)
                {
                    Drink[i]="HAVOI DRINK         "; d_price[i] = 50;
                    d_tot[i] = d_price[i]* d_q[i];
                }
                else if(d_item[i]==3)
                {
                    Drink[i]="CHOCO_VANILLA SHAKE "; d_price[i] = 70;
                    d_tot[i] = d_price[i]* d_q[i];
                }
                else if(d_item[i]==1)
                {
                    Drink[i]="OREO SHAKE          "; d_price[i] = 60;
                    d_tot[i] = d_price[i]* d_q[i];
                }
                else if(d_item[i]==1)
                {
                    Drink[i]="LEMON_MOJITO        "; d_price[i] = 40;
                    d_tot[i] = d_price[i]* d_q[i];
                }
                else {cout<<"Invalid input!...please order again.."; drinks();}
                sum[3]+= d_tot[i];
            }
            system("cls");
            cout<<"\n\nYour order is recorded :)\n\n";
            for(int i=0; i<num[3]; i++)
            {
                cout<<i+1<<"\t\t"<<Drink[i]<<"\t\t"<<d_q[i]<<"\t\t"<<d_tot[i]<<"\n\n";
            }
            cout<<"your total for DRINKS n SHAKES is Rs."<<sum[3]<<"/-\n\n";
            cout<<"Press any key to go back ! ";
            if(getch()) {Menu();}
        }
    else if(ans=='n'|| ans=='N')
    { Menu(); }
}
void food::bill()
{
    char p;string add;
    double Sum =0.0;
    for(int i=0; i<3; i++)
    {
        Sum += sum[i];
    }
    if(Sum ==0)
    {
        cout<<"You haven't ordered anything yet :(\n\n Press any key to start ordering :)\n\n";
        if(getch()){ Menu();}
    }
    cout<<"\nWe deliver your food for free...!\n\nEnter delivery address: ";getchar();getline(cin,add);
    cout<<"\nYour total bill to be paid is Rs."<<Sum<<" /-\n";
    cout<<"\nPress 'y' to proceed to payment and any other key to cancel the order :) : \n";
    cin>> p;cout<<endl;
    if(p=='y'||p=='Y')
    {
        payment(Sum);
        Address(add);
        cout<<"press any key to exit from Online Food"<<endl;
        getch();
        about_us();
    }
    else
    {
        Welcome();
    }
}
        class Cashback{                //Cashback GAME
    public:
    void rules()
{
    system("cls");
    cout << "\t\t======CASHBACK NUMBER GUESSING RULES!======\n";
    cout << "\t1. Choose 2 numbers between 1 to 10, if any of the 2 numbers matches the winning number you win\n";
    cout << "\t2. Winner gets 10 times of the money played as cashback\n";
    cout << "\t3. Wrong guess, and you lose the amount you play\n\n";
}
void cashback(){
string playerName;
    int balance; // stores player's balance
    int playamt;
    int guess1,guess2;
    int dice; // stores the random number
    char choice;
    srand(time(0)); // "Seed" the random generator
    cout << "\n\nWhat's your Name : ";
    getchar();
    getline(cin,playerName);
    cout << "\n\nEnter the starting balance to play game : Rs. ";
    cin >> balance;
    do
    {
        system("cls");
        rules();
        cout << "\n\nYour current balance is Rs. " << balance << "\n";
// Get player's betting balance
        do
        {
            cout << "Hey, " << playerName<<", enter amount to play : Rs ";
            cin >> playamt;
            if(playamt > balance)
                cout << "Cashback Amount can't be more than current balance!\n"
                       <<"\nRe-enter balance\n ";
        }while(playamt > balance);
// Get player's numbers
        do
        {
            cout << "Guess 2 numbers between 1 & 10 :"<<endl;
            cin >>guess1;
            cin>>guess2;
            if((guess1 <= 0 || guess1 > 10)&&(guess2 <= 0 || guess2 > 10))
                cout << "\nNumber should be between 1 to 10\n"
                    <<"Re-enter number:\n ";
        }while((guess1 <= 0 || guess1 > 10)&&(guess2 <= 0 || guess2 > 10));
        dice = rand()%10 + 1;
        if((dice == guess1)||(dice==guess2))
        {
            cout << "\n\nYou are in luck!! You have won Rs." << playamt * 10<<" Cashback";
            balance = balance + playamt * 10;
        }
        else
        {
            cout << "\n\nOops, better luck next time !! You lost Rs. "<< playamt <<"\n";
            balance = balance - playamt;
        }
        cout << "\nThe winning number was : " << dice <<"\n";
        cout << "\n"<<playerName<<", You have balance of Rs. " << balance << "\n";
        if(balance == 0)
        {
            cout << "You have no money to play ";
            break;
        }
        cout << "\n\nDo you want to play again (y/n)? ";
        cin >> choice;
    }while(choice =='Y'|| choice=='y');
    cout << "\n\n\n";
    cout << "\n\nThanks for playing the game. Your balance is Rs. " << balance << "\n\n";
}    };
void choicebox()
{    int c,choice;
     cout<<"\n\n\t\t\t\t"<<"     **";
     for(int i=0;i<25;i++)
     cout<<"*";


     cout<<"\n\t\t\t\t"<<"       ENTER YOUR CHOICE(1-6) : ";
     cin>>c;


if(c==1)                                    //ELECTRICITY BILL
    {loading();
    cout<<"             *********************************************"<<endl;
    cout<<"                                ELECTRICITY BILL              "<<endl;
    cout<<"             *********************************************"<<endl;
    EleBill o;//create object for class EleBill
    o.get();//Call the get() method using object
    o.printAmount();  //Call the printAmount() method using object
    cout<<"\n\n\nENTER YOUR CHOICE          "<<endl;
     cout<<"1. BACK TO MAIN MENU!!"<<endl;
     cout<<"2. EXIT"<<endl;
     cin>>choice;
     if(choice==1)
     {
      loading();


      heading();
      menu1();
      choicebox();
     }
     if(choice==2)
     {
         end();
     }}
     else if(c==2)
     {loading();
    cout<<"             *********************************************"<<endl;
    cout<<"                                CASHBACK GAMING              "<<endl;
    cout<<"             *********************************************"<<endl;
     Cashback cas;
     cas.cashback();
     cout<<"\n\n\nENTER YOUR CHOICE          "<<endl;
     cout<<"1. BACK TO MAIN MENU!!"<<endl;
     cout<<"2. EXIT"<<endl;
     cin>>choice;


     if(choice==1)
     {
         system("cls");
      heading();
      menu1();
      choicebox();


     }
     if(choice==2)
     {
         end();
     }}
     else if(c==3)         //GROCERY CALLING
     {
     loading();
     Grocery g;
     g.grocery();
     cout<<"\n\n\nENTER YOUR CHOICE          "<<endl;
     cout<<"1. BACK TO MAIN MENU!!"<<endl;
     cout<<"2. EXIT"<<endl;
     cin>>choice;


     if(choice==1)
     {
         system("cls");
      heading();
      menu1();
      choicebox();


     }
     if(choice==2)
     {
         end();
     }}else if(c==4)            //MOBILE RECHARGE
               { loading();
                cout<<"             *********************************************"<<endl;
                cout<<"                             MOBILE RECHARGE              "<<endl;
                cout<<"             *********************************************"<<endl;
                   mobile mob;
                int d=mob.print();
                payment(d);
                cout<<"\n\n\nENTER YOUR CHOICE          "<<endl;
     cout<<"1. BACK TO MAIN MENU!!"<<endl;
     cout<<"2. EXIT"<<endl;
     cin>>choice;


     if(choice==1)
     {
         system("cls");
      heading();
      menu1();
      choicebox();


     }
     if(choice==2)
     {
         end();
     }}
     else if(c==5)
     {
    loading();
    cout<<"             *********************************************"<<endl;
    cout<<"                      Welcome to Quickzz KITCHEN          "<<endl;
    cout<<"             *********************************************"<<endl;
         food f;
    f.Welcome();
    f.Menu();
     cout<<"\n\n\nENTER YOUR CHOICE          "<<endl;
     cout<<"1. BACK TO MAIN MENU!!"<<endl;
     cout<<"2. EXIT"<<endl;
     cin>>choice;


     if(choice==1)
     {
         system("cls");
      heading();
      menu1();
      choicebox();


     }
     if(choice==2)
     {
         end();
     }}
     else
     {
         loading();
         end();}
}


int main()
{
    cout<<"LOADING";
    for(int j=0;j<11;j++)
    {
        load(9999999);
        cout<<" .";}
    system("cls");
    int a,b,c,e;
    double d;
    mainscr m;
    a=m.print();
    switch(a)
    {
        case 1:b=m.login();
        if(b==1)
        {
            heading();
            menu1();
            choicebox();}
        break;
        case 2:m.changepass();
        cout<<endl<<endl;
        loading();
        cout<<"\nYOU CAN NOW LOGIN WITH THE PASSWORD CHANGES MADE"<<endl<<endl;
        b=m.login();
        if(b==1)
        {
            heading();
            menu1();
            choicebox();}
        break;
        default:cout<<"Invalid Choice...Try Again!"<<endl;
        main();
        break;
    }
    return 0;
}
void menu()
{
    int choice;
    cout<<"\nPress 0 to Exit Paytm\nPress 1 for main menu\nChoice: ";
    cin>>choice;
    switch(choice)
    {
        case 0:exit(0);
        break;
        case 1:main();
        break;
        default:cout<<"Invalid Choice...Try Again..."<<endl;
        menu();
        break;
    }
}



