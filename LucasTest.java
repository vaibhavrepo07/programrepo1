class LucasTest
{
  public static void main(String...args)
{
  int n,i,a=1,b=1,c=1,d;
  n=10;
  System.out.println("" +a+ "" +b+ ""+c);
  for(i=1; i<=(n-3) ; i++)
  {
    d=a+b+c;
  System.out.println("" +d);
 a=b;
 b=c;
 c=d;
   }
  }
}