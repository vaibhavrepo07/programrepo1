class AreaofTriangle1
{
  public static void main(String...args)
{
    double a=2,b=3,c=5,s,area;
   System.out.println("The Area of Triangle :");
   s=a+b+c/2;
   area=Math.sqrt(s*(s-a) *(s-b) *(s-c)); 
   System.out.println("Area of Triangle =" +area);
   }
}
