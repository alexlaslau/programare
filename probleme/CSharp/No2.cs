using System;
using System.Collections.Generic;

namespace Boxes
{
    class Box
    {
        int width;
        int height;
        int length;
        public Box(int _width, int _height, int _length)
        {
            width = _width;
            height = _height;
            length = _length;
        }
        public void Display()
        {
            Console.WriteLine("Total width: " + width);
            Console.WriteLine("Total length: " + length);
            Console.WriteLine("Total height: " + height);
        }
        public static Box operator +(Box b1, Box b2)
        {
            Box b3 = new Box(b1.width + b2.width, b1.height + b2.height, b1.length + b2.length);
            return b3;
        }
    }
}

namespace BoxOverloadingOperator
{
    using Boxes;
    class Program
    {
        static void Main(string[] args)
        {
            List<Box> listBox = new List<Box>();
            Console.WriteLine("Type the amount of boxes: ");
            int n = Convert.ToInt32(Console.ReadLine());
            for(int i = 0; i < n; i++)
            {
                Console.WriteLine("Width: ");
                int width = Convert.ToInt32(Console.ReadLine());
                Console.WriteLine("Length: ");
                int length = Convert.ToInt32(Console.ReadLine());
                Console.WriteLine("Height: ");
                int height = Convert.ToInt32(Console.ReadLine());
                Box box = new Box(width, height, length);
                listBox.Add(box);
            }
            Calculare(listBox).Display();
            Console.ReadKey();
        }

        static Box Calculare(List<Box> listBoxes)
        {
            Box finalBox = new Box(0, 0, 0);
            foreach(Box box in listBoxes)
            {
                finalBox += box;
            }
            return finalBox;
        }
    }
}
