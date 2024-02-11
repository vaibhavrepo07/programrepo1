class Maxof3ConditionalOperator
{
  public static void main(String ...args)
{
  int a,b,c,max=0;
  a=20;
  b=30;
  c=45;
  max=((a>b) ? ((a>c)?a:c) :((b>c)?b:c));n
 
  System.out.println("The Largest Number" +max);
  }
}