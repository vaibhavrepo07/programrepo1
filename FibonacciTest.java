class FibonacciTest
{
  public static void main(String...args)
{
  int n, i, a=0, b=1, c=0;
  n=6;
  System.out.println("" +a  +b);
  for(i=1; i<=(n-2) ; i++)
{
   c=a+b;
   System.out.println("" +c);
   a=b;
   b=c;
   }
  }
}