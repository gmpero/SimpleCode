using System;


namespace SimpleCode
{
    class Program
    {
        static void Foo(int[] Array, int i = 0) 
        {
            if(i < Array.Length)
            {
                Console.WriteLine(Array[i]);
                i++;
                Foo(Array , i); //Foo(Array , i++);


            }
            
        }
        static void Main(string[] args)
        {
            int [] Array = { 1, 2, 3, 4, 5, 6, 7 };
            Foo(Array);
        }
    }
}
