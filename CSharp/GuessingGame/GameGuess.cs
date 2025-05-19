class GuessingGame
{
    
    static void Main(string[] args)
    {
        startGame();
    }

    static void startGame() {
        Console.WriteLine("Welcome to Number Guessing Game!\n");

        do
        {
            int target = GenerateNumber();
            bool correct = false;
            int guesses = 1;

            while (!correct)
            {
                int guess = userGuess();
                correct = checkGuess(target, guess, guesses);
                guesses++;
            }
        }
        while (playAgain());

        Console.WriteLine("\nThanks for Playing!");
    }

    static int GenerateNumber()
    {
        
        Random random = new Random();
        int number = random.Next(1, 101);

        return number;
    }

    static int userGuess()
    {
        Console.Write("\nGuess a number between (1 - 100): ");
        int guess = Convert.ToInt32(Console.ReadLine());

        return guess;

    }

    static bool checkGuess(int target, int guess, int guesses)
    {
        if (guess < target)
        {
            Console.WriteLine(guess + " is too Low");
            return false;
        }

        else if (guess > target)
        {
            Console.WriteLine(guess + " is too High");
            return false;
        }

        else
        {
            Console.WriteLine("\nCongrats! You guess correctly");
            Console.WriteLine("\nNumber of guesses = " + guesses);
            return true;
        }
    }

    static bool playAgain()
    {
        Console.WriteLine("\n\nwould you like to play again? (Y/N)");
        string input = Console.ReadLine().ToLower();
        if (input == "y")
        {
            return true;
        }

        else
        {
            return false;
        }
    }
}
