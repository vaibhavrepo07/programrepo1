class GreaterThree1
{
 public static void main(String...args)
{
  int a=100, b=300, c=500;
  if(a>b)
 { 
   if(a>c)
   {
      System.out.println("A is Greater than B");
    }
else
 {
   System.out.println("C is Greater than A");
    }
  }
 else if(b>c)
{ 
  System.out.println("B is Greater");
 }
 else
{
   System.out.println("C is Greater");
 }
}
}