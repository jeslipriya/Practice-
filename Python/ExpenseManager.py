class ExpenseManager:
    
    def __init__(self):
        self.income = 0
        self.withdraw = 0
        self.balance = 0

    def income_update(self, income):
        self.income = income
        self.update_balance()
    
    def withdraw_update(self, amount):
        if amount <= self.balance:
            self.withdraw += amount
            self.update_balance()

        else:
            print("Insufficient fund!")

    def update_balance(self):
        self.balance = self.income - self.withdraw

    def get_balance(self):
        return self.balance
    

em = ExpenseManager()

income = int(input("enter the income: "))
em.income_update(income)

withdraw = int(input("enter the withdraw amount: "))
em.withdraw_update(withdraw)

print("balance after withdraw " + str(em.get_balance()))