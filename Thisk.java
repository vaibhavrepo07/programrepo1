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
class Thisk
{
public static void main(String[]args)
{
A a1=new A();
a1.f1(5,6);
a1.Display();
}
}

