using System;


namespace SimpleCode
{
    class Program
    {
        static int Sum(int[] Array, int i = 0) 
        {
            if (i >= Array.Length)
                return 0;

            int result = Sum(Array, i+1);
            return Array[i] + result;
            //return Array[i]+Sum(Array, i+1);
               
        }
        static void Main(string[] args)
        {
            int [] Array = { 1, 2, 3, 4, 5, 6, 7 };
            int result = Sum(Array);
            Console.WriteLine(result);
        }
    }
}
