package Java;
import java.util.Scanner;

class ExpenseManager{

    double income, withdraw, balance;

    public void incomeUpdate(double income){
        this.income = income;
        balanceUpdate();
    }

    public void withdrawUpdate(double amount){
        if(balance >= amount){
            this.withdraw += amount;
            balanceUpdate();
        }

        else{
            System.out.println("Insufficient fund!");
        }
    }

    public void balanceUpdate(){
        this.balance = income - withdraw;
    }

    public double getBalance(){
        return balance;
    }

    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);

        ExpenseManager em = new ExpenseManager();

        System.out.print("Enter the income amount: ");
        double income = scan.nextDouble();
        em.incomeUpdate(income);

        System.out.print("Enter the withdraw amount: ");
        double withdraw = scan.nextDouble();
        em.withdrawUpdate(withdraw);

        System.out.print("Amount after withdraw = " + em.balance);

        scan.close();
    }
}