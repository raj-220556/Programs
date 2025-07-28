interface Vehicle{
  String millage = "CONSTANST VARIBLES";
  void start(); //Abstract Method
  //Interface do not have Constructer
}

interface TwoWheeler implements Vehicle{
  int noWheels = 2;
  void showNoWheels(); //Abstract Method
}

class Bike implements TwoWheeler{
  String name = "Bike";
  public void start(){
    System.out.println("Bike is Started");
  }
  public void showNoWheels(){
    System.out.println("Wheels");
  }
}
class main{
  public static void main(String[] args){
    Bike b1 = new Bike();
    b1.start();
    System.out.println(b1.noWheels+ b1.millage + b1.name);
  }
}
