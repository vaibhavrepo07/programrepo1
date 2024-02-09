class A implements Runnable
{
public void run()
{
int i;
for(i=0;i<=10;i++)
{
System.out.println("loop 1 executed"+i);
}
}
}
class B implements Runnable
{
public void run()
{
int i;
for(i=0;i<=10;i++)
{
System.out.println("loop 2 executed"+i);
}
}
}
class Multi
{
public static void main(String[]args)
{
A a1=new A();
B b1=new B();

}
}