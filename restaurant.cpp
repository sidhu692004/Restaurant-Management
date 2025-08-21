#include<iostream>
#include<string.h>
using namespace std;
class project
{int l,x,tp,m,tm,n,tn,o,to,r,tr,u,tu,st,mn,lp,fr,bn,ri,er,a,b,c;
int K,X,M,N,O,R,U,ST,A,ER,FR,P,B,C,D,E,F,G,H,I,J;
int table=1;
string name,address;
char number[20];
public:
project()
{

P=B=C=D=E=F=G=H=I=J=10;
}
void introduction()
{
cout<<"|^^^^^^^^^^^^^^^^^^^^^^WELCOME^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^|";
cout<<"\n|_AMRITSARGROUPOFCOLLEGES|";
cout<<"\n|                STUDENT DETAIL                              |";
cout<<"\n||";
cout<<"\n| B.TECH(CSE)-REVIEW    CSE3/G1       GROUP NAME:LIFE CYCLE  |";
cout<<"\n| PROJECT NAME:RESTAURANT MANAGEMENT SYSTEM                  |";
cout<<"\n| PROJECT TEAM LEADER:                                       |";
cout<<"\n||";
cout<<"\n| PROJECT TEAM MEMBERS:                                      |";
cout<<"\n| 1.SUDHANSHU SHEKHAR(2233733)                               |";
cout<<"\n| 2.SARISHTI KUMARI(2233714)                                 |";
cout<<"\n| 3.SUSHMA KUMARI(2233737)                                   |";
cout<<"\n|     GUIDED BY                                              |";
cout<<"\n|<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>|";
}
void front()
{
cout<<"|^^^^^^^^^^^^^^^^^^^^^^WELCOME^^IN^^RESTAURANT^^^^^^^^^^^^^^^^^^^^|";
cout<<"\n|                   RESTAURANT MANAGEMENT SYSTEM                |";
cout<<"\n||";
cout<<"\n|LOGIN_|";
ab:
cout<<"\nenter user id:";
cin>>b;
if(b==368)
{
  bc:
  cout<<"\nenter password:";
  cin>>c;
  if(c==383)
  {
  goto cd;
  }
  else
  goto bc;
  }
  else
  goto ab;
  cd:
  cout<<"\nLOGIN SUCCESSFUL:";
}
void add_item()
{
  int Q,HJ,JK,KL,UK,RS,UL,ST,AC,ER,FC;
  HJ=JK=KL=UK=RS=UL=ST=AC=ER=FC=0;
  ssp:
 cout<<"\nenter 1 for add pizza,\n 2 for add DOSA,\n 3 for add MOMOS,\n 4 for add NOODLES,\n 5 for add CHEESE RICE,\n 6 for add PANEER MANCHURIAN,\n 7 for add COLD COFFEE,\n for add HOT CHOCOLATE,\n for add MILK SHAKE,\n for add FRIED RICE nor enter 0";
 
 cin>>Q;
 switch(Q)
 {
 	case 1:{cout<<"\nenter quantity of add pizza:";
 	cin>>HJ;
 	goto ssp;
		break;
	 }
	 case 2:{cout<<"\n enter quantity of add dosa:";
	 cin>>JK;
	 goto ssp;
		break;
	 }
	 case 3:{cout<<"\n enter quantity of add momos";
	 cin>>KL;
	 goto ssp;
		break;
	 }
	 case 4:{cout<<"\n enter quantity of add noodles";
	 cin>>UK;
	 goto ssp;
		break;
	 }
    case 5:{cout<<"\n enter quantity of add cheese rice";
    cin>>RS;
    goto ssp;
		break;
	}
	case 6:{cout<<"\n enter quantity of add paneer manchurian";
	cin>>UL;
	goto ssp;
		break;
	}	
	case 7:{cout<<"\n enter quantity of add cold coffee";
	cin>>ST;
	goto ssp;
		break;
	}
	case 8:{cout<<"enter quantity of add hot chocolate";
	cin>>AC;
	goto ssp;
		break;
	}
	case 9:{cout<<"enter quantity of add milk shake";
	cin>>ER;
	goto ssp;
		break;
	}
	case 10:{"enter quantity of add fried rice";
	cin>>FC;
	goto ssp;
		break;
	}
	}	 
	P=P+HJ;
	B=B+JK;
	C=C+KL;
	D=D+UK;
	E=E+RS;
	F=F+UL;
	G=G+ST;
	H=H+AC;
	I=I+ER;
	J=J+FC;
 }

void Table()
{
  if(table<10)
  {
    cout<<"\navailable table number: "<<table;
  }
  else
  cout<<"\nSorry, not available any table:";
}
void Table_b()
{
  if(table<10)
  {
    cout<<"\nyour table number: "<<table;
    table++;
  }
  else
  cout<<"\nSorry, not available any table:";
}
void get()
{
  x=0;
m=0;
n=0;
o=0;
r=0;
u=0;
st=0;
a=0;
er=0;
fr=0;
X=M=N=O=R=U=ST=A=ER=FR=0;
cout<<"\n      MENU LIST       ";
cout<<"\nSr.  Name of dish      price";
cout<<"\n1.   PIZZA             400Rs";
cout<<"\n2.   DOSA              200Rs";
cout<<"\n3.   MOMOS             100Rs";
cout<<"\n4.   NOODLES           80Rs ";
cout<<"\n5.   CHEESE RICE       250Rs";
cout<<"\n6.   PANEER MANCHURIAN 250Rs";
cout<<"\n7.   COLD COFFEE       100Rs";
cout<<"\n8.   HOT CHOCOLATE     150Rs";
cout<<"\n9.   MILK SHAKE        50Rs";
cout<<"\n10.  FRIED RICE        150Rs";
}
void available()
{
cout<<"\n ITEM AVAILABLE";
cout<<"\n ITEM              QUANTITY";
if(P==0||P<0)
cout<<"\n PIZZA                OUT OF STOCK";
else
cout<<"\n PIZZA               "<<P;
if(B==0||B<0)
cout<<"\n DOSA                OUT OF STOCK";
else
cout<<"\n DOSA                "<<B;
if(C==0||C<0)
cout<<"\n MOMOS                OUT OF STOCK";
else
cout<<"\n MOMOS               "<<C;
if(D==0||D<0)
cout<<"\n NOODLES                OUT OF STOCK";
else
cout<<"\n NOODLES             "<<D;
if(E==0||E<0)
cout<<"\n CHINESE PANEER         OUT OF STOCK";
else
cout<<"\n CHEESE PANEER       "<<E;
if(F==0||F<0)
cout<<"\n PANEER MANCHURIAN       OUT OF STOCK";
else
cout<<"\n PANEER MANCHURIAN   "<<F;
if(G==0||G<0)
cout<<"\n COLD COFFEE            OUT OF STOCK";
else
cout<<"\n COLD COFFEE         "<<G;
if(H==0||H<0)
cout<<"\n HOT CHOCOLATE          OUT OF STOCK";
else
cout<<"\n HOT CHOCOLATE       "<<H;
if(I==0||I<0)
cout<<"\n MILK SHAKE             OUT OF STOCK";
else
cout<<"\n MILK SHAKE          "<<I;
if(J==0||J<0)
cout<<"\n FRIED RICE                OUT OF STOCK";
else
cout<<"\n FRIED RICE          "<<J;
} 
void data()
{
cout<<"\nenter customer name:";
getline (cin, name);
getline (cin, name);
cout<<"\nenter customer address: ";
getline (cin, address);
cout<<"\nenter mobile number: ";
cin>>number;
cout<<"\nCHOOSE ITEM";
cout<<"\nEnter serial number for choose item and enter 0 for exit:";
sss:
cin>>l;
switch(l)
{
case 1: { cout<<"\nenter quantity of PIZZA: ";
cin>>x;

cout<<"\n CHOOSE NEXT ITEM: ";
goto sss;
}
case 2:{cout<<"\nenter quantity of DOSA: ";
cin>>m;

cout<<"\nCHOOSE NEXT ITEM: ";
goto sss;
}
case 3:{cout<<"\nenter quantity of MOMOS: ";
cin>>n;

cout<<"\nCHOOSE NEXT ITEM: ";
goto sss;
}
case 4:{cout<<"\nenter quantity of NOODLES: ";
cin>>o;

cout<<"\nCHOOSE NEXT ITEM: ";
goto sss;
}
case 5:{cout<<"\nenter quantity of CHEESE RICE: ";
cin>>r;

cout<<"\nCHOOSE NEXT ITEM: ";
goto sss;
}
case 6:{cout<<"\nenter quantity of PANEER MANCHURIAN: ";
cin>>u;

cout<<"\nCHOOSE NEXT ITEM: ";
goto sss;
}
case 7: { cout<<"\n enter quantity of COLD COFFEE:";
cin>>st;

cout<<"\n CHOOSE NEXT ITEM: ";
goto sss;
}
case 8:{ cout<<"\n enter quantity of HOT CHOCOLATE:";
cin>>a;
cout<<"\n CHOOSE NEXT ITEM: ";
goto sss;
}
case 9: { cout<<"\n enter quantity of MILK SHAKE:";
cin>>er;
cout<<"\nCHOOSE NEXT ITEM: ";
goto sss;
}
case 10: { cout<<"\n enter quantity of FRIED RICE:";
cin>>fr;
cout<<"\nCHOOSE NEXT ITEM: ";
goto sss;
}
default: {cout<<"\n your order is confirmed:";
}
}
}
void delet()
{
    ssss:
    cout<<"\nenter 1 for pizza\nenter 2 for dosa\nenter 3 for momos\nenter 4 for noodles\nenter 5 for chinese paneer\nenter 6 for paneer manchurian\nenter 7 for cold coffee\nenter 8 for hot chocolate\nenter 9 for milk shake\nenter 10 for fried rice \nenter 0 for next";

cin>>K;
switch(K)
{
case 1: { cout<<"\nenter quantity of PIZZA: ";
cin>>X;

cout<<"\n CHOOSE NEXT ITEM: ";
goto ssss;
}
case 2:{cout<<"\nenter quantity of DOSA: ";
cin>>M;

cout<<"\nCHOOSE NEXT ITEM: ";
goto ssss;
}
case 3:{cout<<"\nenter quantity of MOMOS: ";
cin>>N;

cout<<"\nCHOOSE NEXT ITEM: ";
goto ssss;
}
case 4:{cout<<"\nenter quantity of NOODLES: ";
cin>>O;

cout<<"\nCHOOSE NEXT ITEM: ";
goto ssss;
}
case 5:{cout<<"\nenter quantity of CHEESE RICE: ";
cin>>R;

cout<<"\nCHOOSE NEXT ITEM: ";
goto ssss;
}
case 6:{cout<<"\nenter quantity of PANEER MANCHURIAN: ";
cin>>U;

cout<<"\nCHOOSE NEXT ITEM: ";
goto ssss;
}
case 7: { cout<<"\n enter quantity of COLD COFFEE:";
cin>>ST;

cout<<"\n CHOOSE NEXT ITEM: ";
goto ssss;
}
case 8:{ cout<<"\n enter quantity of HOT CHOCOLATE:";
cin>>A;
cout<<"\n CHOOSE NEXT ITEM: ";
goto ssss;
}
case 9: { cout<<"\n enter quantity of MILK SHAKE:";
cin>>ER;
cout<<"\nCHOOSE NEXT ITEM: ";
goto ssss;
}
case 10: { cout<<"\n enter quantity of FRIED RICE:";
cin>>FR;
cout<<"\nCHOOSE NEXT ITEM: ";
goto ssss;
}
default: {
	cout<<"\n your order is confirmed:";
}
}
}
void bill()
{
    lp=150*(a-A);
    mn=100*(st-ST);
    bn=50*(er-ER);
    ri=150*(fr-FR);
    tu=250*(u-U);
    tr=250*(r-R);
    tm=200*(m-M);
    to=80*(o-O);
    tn=100*(n-N);
    tp=400*(x-X);

    cout<<"\n|BILLING~|";
    cout<<"\n customer name: "<<name;
    cout<<"\n address: "<<address;
    cout<<"\n mobile number: "<<number;

    cout<<"\n ITEM                    QUANTITY           PRICE";

    if(tp>0) {
        cout<<"\n PIZZA                  "<<x-X<<"               "<<tp;
        P=P-(x-X);
    }
    if(tm>0) {
        cout<<"\n DOSA                   "<<m-M<<"               "<<tm;
        B=B-(m-M);
    }
    if(tn>0) {
        cout<<"\n MOMOS                  "<<n-N<<"               "<<tn;
        C=C-(n-N);
    }
    if(to>0) {
        cout<<"\n NOODLES                "<<o-O<<"               "<<to;
        D=D-(o-O);
    }
    if(tr>0) {
        cout<<"\n CHEESE PANEER          "<<r-R<<"               "<<tr;
        E=E-(r-R);
    }
    if(tu>0) {
        cout<<"\n PANEER MANCHURIAN      "<<u-U<<"               "<<tu;
        F=F-(u-U);
    }
    if(mn>0) {
        cout<<"\n COLD COFFEE            "<<st-ST<<"              "<<mn;
        G=G-(st-ST);
    }
    if(lp>0) {
        cout<<"\n HOT CHOCOLATE          "<<a-A<<"              "<<lp;
        H=H-(a-A);
    }
    if(bn>0) {
        cout<<"\n MILK SHAKE             "<<er-ER<<"              "<<bn;
        I=I-(er-ER);
    }
    if(ri>0) {
        cout<<"\n FRIED RICE             "<<fr-FR<<"              "<<ri;
        J=J-(fr-FR);
    }

    cout<<"\n                                total amount:"<<tp+tm+tn+to+tr+tu+mn+lp+bn+ri;
}

void dtable()
{
  table--;
  cout<<"\n 1 table delete successful";
}
};
int main()
{
int i,y;
project s;
s.introduction();
cout<<"\npress 1 for next";
cin>>i;
s.front();
int r,t;
abc:
cout<<"\nclick 1 for search table nor 0:";
cin>>r;
if(r==1)
s.Table();
cout<<"\nclick 1 for order nor 0";
cin>>t;
if(t==1)
{
s.get();
s.available();
s.data();
s.Table_b();
int k;
cout<<"enter 1 for delete item nor enter 0:";
cin>>k;
if(k==1){
s.delet();
s.bill();
}
else
s.bill();
cout<<"\nenter 1 for again billing nor enter 0";
int v;
cin>>v;
if(v==1)
goto abc;
else{
cout<<"\nTHANK YOU FOR VISITING IN MY RESTAURANT.";
s.dtable();
}
}
else
cout<<"\nTHANK YOU FOR VISITING.";
return 0;
}