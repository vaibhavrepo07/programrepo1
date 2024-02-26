class PerfectTest
{
  public static void main(String...args)
{
  int i,n,sum;
  n=28;
  sum=0; 

  for(i=1; i<=n/2 ; i++)
 {
   if(n%i==0)
{
   sum=sum+i;
  }
}
  if(n==sum)
  System.out.println("The number " +n);
  else
  System.out.println("The number is not perfect"+n); 
   
   }
}