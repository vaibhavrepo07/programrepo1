class NestedWhile
{
  public static void main(String...args)
{
  int a=1, b;
  while(a<=5)
{
  b=1;
 while(b<=a)
{
  System.out.println("*");
  b++;
 }
 a++;
  System.out.println();
   }
  }
}