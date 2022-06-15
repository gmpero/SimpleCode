using System;


namespace SimpleCode
{
    enum Color
    { 
        Red,
        Green,
        Orange,
        Yellow,
        Blue
    }
    class Point
    {
        public int x;
        public int y;
        public Color color;
    }
    class Program
    {
       
        static void Main(string[] args)
        {
            Point p = new Point();
            p.x = 2; 
            p.y = 6;
            p.color = Color.Red;
            Console.WriteLine($"x:{p.x}|y:{p.y} color:{p.color}");
        }
    }
}
