class Pattern
{
    static void Main(string[] args)
    {

        Console.Write("Enter the number of rows: ");
        int rows = Convert.ToInt32(Console.ReadLine());

        Console.Write("Enter the number of rows: ");
        int columns = Convert.ToInt32(Console.ReadLine());

        Console.Write("Enter any symbol");
        string symbol = Console.ReadLine();

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < rows; j++)
            {
                Console.Write(symbol);
            }
            Console.WriteLine();
        }
    }

}