#include<iostream>
using namespace std;
class Marvel
{
protected:
   int hero; int heroine;
public:
Marvel()

{
   cout<<"empty of marvel"<<endl;
}

Marvel(int hr,int hn)
{

    hero=hr; heroine=hn;
    cout<<"parameterized of marvel called"<<endl;
}
void showinfo()
{
    cout<<"Marvel hero:"<<hero<<endl;
    cout<<"marvel heroine:"<<heroine<<endl;
}
};
class Dc
{
protected:
    int male;int female;
public:
Dc()

{
   cout<<"empty of Dc called"<<endl;
}
Dc(int m,int f)
{
   male=m; female=f;
   cout<<"parameterized of Dc called"<<endl;
}
void showinfo()
{
    cout<<"Dc male:"<<male<<endl;
    cout<<"Dc female:"<<female<<endl;
}
};
class Asgard: public Marvel
{
protected:
    int actor;int actress;
public:
Asgard()

{
    cout<<"empty for Asgard"<<endl;
}
    Asgard(int ar,int as):Marvel(ar,as)
{
    actor=ar;
    actress=as;
    cout<<"parameterized for Asgard"<<endl;
}
void showinfo()
{
    cout<<"Asgard actor:"<<actor<<endl;
    cout<<"Asgard actress:"<<actress<<endl;
}
};
class Alfeim: public Marvel
{
protected:
    int actor1;int actress1;
public:
Alfeim()

{
    cout<<"empty for Alfeim"<<endl;
}
    Alfeim(int ar1,int as1):Marvel(ar1,as1)
{
    actor1=ar1;
    actress1=as1;
    cout<<"parameterized for Alfeim"<<endl;
}
void showinfo()
{
    cout<<"Alfeim actor1:"<<actor1<<endl;
    cout<<"Alfeim actress1:"<<actress1<<endl;
}
};
class Nidavellir: public Marvel
{
protected:
    int actor2;int actress2;
public:
Nidavellir()

{
    cout<<"empty for Nidavellir"<<endl;
}
    Nidavellir(int ar2,int as2):Marvel(ar2,as2)
{
    actor2=ar2;
    actress2=as2;
    cout<<"parameterized for Nidavellir"<<endl;
}
void showinfo()
{
    cout<<"Nidavellir actor2:"<<actor2<<endl;
    cout<<"Nidavellir actress2:"<<actress2<<endl;
}
};
class Vanaheim: public Marvel
{
protected:
    int actor3;int actress3;
public:
Vanaheim()

{
    cout<<"empty for Vanaheim"<<endl;
}
    Vanaheim(int ar3,int as3):Marvel(ar3,as3)
{
    actor3=ar3;
    actress3=as3;
    cout<<"parameterized for Vanaheim"<<endl;
}
void showinfo()
{
    cout<<"vanaheim actor3:"<<actor3<<endl;
    cout<<"vanaheim actress3:"<<actress3<<endl;
}
};
class Earth: public Marvel,public Dc
{
protected:
    int people;int tribe;
public:
Earth()

{
    cout<<"empty for Earth"<<endl;
}
    Earth(int p,int t):Dc(p,t)
{
    people=p;
    tribe=t;
    cout<<"parameterized for Earth"<<endl;
}
void protecting_the_livings()
{
    cout<<"Earth people:"<<people<<endl;
}
void visualize_the_living()
{
    cout<<"Earth tribe:"<<tribe<<endl;
}
};
class Wakanda: public Earth
{
protected:
int wakandan;
public:
Wakanda()
{
cout<<"empty for wakanda"<<endl;
}
Wakanda(int w)
{
wakandan=w;
cout<<"Parameterized for wakanda"<<wakandan<<endl;
}
void showing_Wakanda()
{
Earth::protecting_the_livings();
Earth::visualize_the_living();
}
};
int main()
{
Asgard a;
Asgard a1(5,9);
a1 .showinfo();

Alfeim b;
Alfeim b1(6,9);
b1.showinfo();

Nidavellir c;
Nidavellir c1(7,4);
c1.showinfo();

Vanaheim d;
Vanaheim d1(5,7);
d1.showinfo();

Earth e;
Earth e1(true,20);
e1.protecting_the_livings();
e1.visualize_the_living();

Wakanda w;
Wakanda w1(10);
w1.protecting_the_livings();
w1.visualize_the_living();
}

