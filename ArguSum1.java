class ArguSum1
{
  public static void main(String ...args)
{
   int s=0, len;
   len = args.length;
   
   for(int i =0; i<len ; i++)
{
  int x= Integer.parseInt(args[i]);
  {
     s = s+x;
   }

 System.out.println("Sum of Command Line Argument");
   }
}
}