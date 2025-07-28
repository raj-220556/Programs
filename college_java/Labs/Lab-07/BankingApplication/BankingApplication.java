import java.util.*;

class DepositMaximumAmountException extends Exception{
  DepositMaximumAmountException(String s){
    super(s);
  }
}

class NegativeWithdrawException extends Exception{
  NegativeWithdrawException(String s){
    super(s);
  }
}

class InsufficientBalanceException extends Exception{
  InsufficientBalanceException(String s){
    super(s);
  }
}


class Bank{
  static int balance = 0;
  
  void Withdraw(int withdraw) throws NegativeWithdrawException, InsufficientBalanceException{
    if(withdraw < 0){
      throw new NegativeWithdrawException("Amount Must Be Positive :" + withdraw);
    }
    else{
      if((balance - withdraw) < 0){
        throw new InsufficientBalanceException("Insufficient Balance");
      }else{
        balance -= withdraw;
        System.out.println("Withdraw Succesfully!");
      }
    }
  }
  
  void Deposit(int deposit) throws DepositMaximumAmountException{
    if((balance + deposit) > 50000){
      throw new DepositMaximumAmountException("Account Balance Must be Less Than '50000/-'");
    }
    else{
      balance += deposit;
      System.out.println("Deposited Successfully!");
    }
  }
  
  void ShowBalance(){
    System.out.println("Your Account Balance : "+balance+"/-");
  }
}

class BankingApplication{
  public static void main(String[] args){
    Scanner s = new Scanner(System.in);
    Bank account = new Bank();
    int c;
    boolean isRunning = true;
    try{
      System.out.println("===== Welcome To Bank =====");
      while(isRunning){
        System.out.print("Enter For\n1.Show Balance\n2.Deposit Amount\n3.Withdraw Amount\n4.exist\nInput: ");
        c = s.nextInt();
        switch(c){
          case 1 :
            account.ShowBalance();
            break;
          case 2 :{
            System.out.print("Enter Amount To Deposit :");
            int d = s.nextInt();
            account.Deposit(d);
            break;
          }
        
          case 3 :{
            System.out.print("Enter Amount To Withdraw :");
            int w = s.nextInt();
            account.Withdraw(w);
            break;
          }

          case 4:{
            isRunning = false;
          } break; 

          default : System.out.println("Invalid Input!");
        }
      }
    }
    catch(Exception e){
      System.out.println(e);
    }
    finally{
      s.close();
      System.out.println("===== Thanks For Coming =====");
    }


  }
}
