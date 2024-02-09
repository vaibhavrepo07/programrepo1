class A
{
int x;
int y;
void f1(int x,int y)
{
this.x=x;
this.y=y;
}
void Display()
{
x=6;
y=7;
System.out.println(x);
System.out.println(this.y);
}
}
class B extends A
{
int x;
int y;
void f2(int x,int y)
{
super.x=x;
super.y=y;
}
void f4()
{
System.out.println(x);
System.out.println(y);
}
}
class Superk
{
public static void main(String[]args)
{
B a1=new B();
a1.f1(5,6);
a1.Display();
//a1.f2();
a1.f4();
}
}

