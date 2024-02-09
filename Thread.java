class A extends Thread
{
public void run()
{
int x;
for(x=0;x<=10;x++)
{
System.out.println("loop 1 excecuted"+x);
}
}
}
class B extends Thread
{
public void run()
{
int x;
for(x=0;x<=20;x++)
{
System.out.println("loop 2 Excecuted"+x);
}
}
}
class Thread
{
public static void mian(String[]args)
{
A a1=new A();
B b1=new B();
a1.start();
b1.start();
}
}