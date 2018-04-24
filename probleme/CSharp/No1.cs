using System;

class MainClass
{
    public static void Main()
    {
        int n;
        n = Convert.ToInt32(Console.ReadLine());
        Ascendent1(n);
        Cube(n);
        Descendent1(n);
        Console.ReadKey();
    }

    static void Ascendent1(int x)
    {
        int a;
        for (int i = 0; i < x; i++)
        {
            for (a = 0; a <= i; a++)
            {
                Console.Write('*');
            }
            for (int v = a; v < x; v++)
            {
                Console.Write(' ');
            }
            for (int v = a; v < x; v++)
            {
                Console.Write(' ');
            }
            for (int v = 0; v < x; v++)
            {
                Console.Write(' ');
            }
            for (a = 0; a <= i; a++)
            {
                Console.Write('*');
            }
            Console.WriteLine();
        }
    }

    static void Cube(int x)
    {
        for (int i = 0; i < x; i++)
        {
            for (int v = 0; v < x; v++)
            {
                Console.Write(' ');
            }
            for (int v = 0; v < x; v++)
            {
                Console.Write('*');
            }
            for (int v = 0; v < x; v++)
            {
                Console.Write(' ');
            }
            Console.WriteLine();
        }
    }

    static void Descendent1(int x)
    {
        for (int i = 1; i <= x; i++)
        {
            int a;
            for (a = i; a <= x; a++)
            {
                Console.Write('*');
            }
            for (int v = 0; v < i - 1; v++)
            {
                Console.Write(' ');
            }
            for (int v = 0; v < i - 1; v++)
            {
                Console.Write(' ');
            }
            for (int v = 0; v < x; v++)
            {
                Console.Write(' ');
            }
            for (a = i; a <= x; a++)
            {
                Console.Write('*');
            }
            Console.WriteLine();
        }
    }
}
