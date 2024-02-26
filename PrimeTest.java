class PrimeTest
{
  public static void main(String...args)
{
   int i,n;
   boolean flag = true;
  
   n=29;
   
  for(i=2 ; i<=n/2; i++)
  {
    if(n%i==0)
   {
     flag = false;
     break;
    }
 }
   if(flag==true)
   System.out.println("Number is Prime Number" +n);
   else
   System.out.println("Number is Not Prime Number" +n);
    }
}