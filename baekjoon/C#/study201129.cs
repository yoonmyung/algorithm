using System;
using System.Collections.Generic;
using System.Text;

//enum�� Main() �Լ� �ٱ�, class ���ο� �����ؾ��Ѵ�. �ϳ��� �ڷ������� ��޵Ǳ� ����
namespace RectArea
{
    class MainApp
    {
        //3�� �������� 4��
        public static void Main()
        {
            Console.WriteLine("�簢���� �ʺ� �Է��ϼ���.");
            string width = Console.ReadLine();

            Console.WriteLine("�簢���� ���̸� �Է��ϼ���.");
            string height = Console.ReadLine();

            int? area = null;
            area = int.Parse(width) * int.Parse(height);

            Console.WriteLine("�簢���� ���̴� : {0}", area);
        }
    }

    class MainApp2
    {
        //4�� ��������
        public static void Main()
        {
            int a = 0xF0 | 0x0F;
            Console.WriteLine($"{a:x}");

            int b = 10;
            string c = b == 0 ? "������" : "ABC";
            Console.WriteLine($"{c}");
        }
    }
}
