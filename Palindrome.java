class Palindrome
{
  public static void main(String[]args)
{
  System.out.println("Enter the Number");
 
int temp = num;
int rev=0, digit;

  while(temp>0)
{
   digit = temp % 10;
   rev = rev*10+digit;
   temp = temp/10;
}
   
   }
}