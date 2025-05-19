package Java;
import java.util.Scanner;

public class ExpenseTracker {
    Scanner scan = new Scanner(System.in);
    double balance = 0;

    public void depositAmount(){
        System.out.print("\nEnter deposit amount: $");
        double amount = scan.nextInt();

        if (amount <0) {
            System.out.println("Amount must be greater than zero.");
            return;
        }

        balance += amount;
        System.out.println("\nAmount successfully deposited!");
        getBalance();

    }

    public void withdrawAmount(){
        
        System.out.print("\nEnter the amount to withdraw: $");
        double withdrawAmount = scan.nextInt();

        if (withdrawAmount < 0) {
            System.out.println("Amount must be greater than zero.");
        }

        
        else if (balance < withdrawAmount){
            System.out.println("\nInsufficient balance. Transaction failed!");
        }
        
        else {
            balance -= withdrawAmount;
            System.out.println("Amount sucessfully withdrawed!");
            getBalance();
        }
    }

    public void getBalance(){
        System.out.println("\n--------------------------------------");
        System.out.printf("Current balance $%.2f%n", balance);
        System.out.println("--------------------------------------");
    }

    //menu options
    public void getChoice(){
        int choice;
        do { 
            System.out.println("\n========Expense Tracker Menu=========\n");
            System.out.println("1. Deposit amount");
            System.out.println("2. Withdraw amount");
            System.out.println("3. Check Balance");
            System.out.println("4. Exit");

            System.out.print("Enter your choise: ");
            choice = scan.nextInt();
        
            switch (choice) {
                case 1: depositAmount();
                        break;
                
                case 2: withdrawAmount();
                        break;
    
                case 3: getBalance();
                        break;
    
                case 4: System.out.println("Thank you!");
                        break;
                
                default: System.out.println("\n\nInvalid choice");
                        break;
            }
        } while (choice !=4);

    }

    // main method
    public static void main(String[] args) {

        ExpenseTracker tracker = new ExpenseTracker();
        tracker.getChoice();
    }
}
