using System;


namespace SimpleCode
{
    class Program
    {
        static int Sum(int i) 
        {
           if (i<10)
                return i;

            //int digit = i % 10;
            //int value = i / 10;
            //return digit + Sum(value);

            return i % 10 + Sum(i / 10);
               
        }
        static void Main(string[] args)
        {
            int i = 514;
            Console.WriteLine(Sum(i));
        }
    }
}
