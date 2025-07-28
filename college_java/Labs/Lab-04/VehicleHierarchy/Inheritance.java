import java.util.*;
class Vehicle{
  String name;
  String colour;
  int cost;
  int wheels;
  String company;
  Vehicle(String name,String colour,int cost,String company, int wheels){
    this.name = name;
    this.colour = colour;
    this.cost = cost;
    this.company = company;
    this.wheels = wheels;
  }
}

class TwoWheeler extends Vehicle{
  
  boolean gearType;
  TwoWheeler(String name,String colour,int cost,String company,boolean gearType){
    super(name,colour,cost,company,2);
    
    this.gearType = gearType;
  }
}

class FourWheeler extends Vehicle{
  int millage;
  int vehicleNumber;
  int doors;
  FourWheeler(String name,String colour,int cost,String company,int millage,int vehicleNumber){
    super(name,colour,cost,company,4);
    this.millage = millage;
    this.vehicleNumber = vehicleNumber;
    this.doors = 4;
  }

}

class Bike extends TwoWheeler{
  int sitingCapacity;
  int tankCapacity;
  Bike(String colour,int cost,String company,boolean gearType,int sitingCapacity,int tankCapacity){
    super("Bike",colour,cost,company,gearType);
    this.sitingCapacity = sitingCapacity;
    this.tankCapacity = tankCapacity;
  }
}

class Cycle extends TwoWheeler{
  boolean backSeat;
  String model;
  Cycle(String colour,int cost,String company,boolean gearType,boolean backSeat, String model){
    super("Cycle",colour,cost,company,gearType);
    this.backSeat = backSeat;
    this.model = model;
  }
}

class Truck extends FourWheeler{
  int loadCapacity;
  int horsePower;
  Truck(String colour,int cost,String company,int millage,int vehicleNumber,int loadCapacity,int horsePower){
    super("Truck",colour,cost,company,millage,vehicleNumber);
    this.loadCapacity = loadCapacity;
    this.horsePower = horsePower;
    
  }

}
class Car extends FourWheeler{
 int noSeats;
 String type;
 Car(String colour,int cost,String company,int millage,int vehicleNumber,int noSeats,String type){
  super("Car",colour,cost,company,millage,vehicleNumber);   //Super must be first statement in a Constructer
  this.noSeats = noSeats;
  this.type = type;
 }

}

class Inheritance{
  public static void main(String[] arg){
    Scanner s = new Scanner(System.in);
    System.out.println("    ==== Vehicle shop ====");
    System.out.print("Enter no.of Vehicles you want : ");
    int n = s.nextInt();
    Vehicle[] buyingVehicles = new Vehicle[n];
    for(int i = 0; i < n; i++){
      
      System.out.print("which Vehicle you want (car,bike,cycle,truck) :");
      String v = s.next();

      // vehicle
      System.out.print("Enter Colour of a Vehicle :");
      String colour = s.next();
      System.out.print("Enter Cost of a Vehicle :");
      int cost = s.nextInt();
      System.out.print("Enter Company of a Vehicle :");
      String company = s.next();

      if(v.equalsIgnoreCase("car") || v.equalsIgnoreCase("truck")){
        // Four Wheeler
        System.out.print("How much millage you want :");
        int millage = s.nextInt();
        System.out.print("Enter Vehicle Number :");
        int vehicleNumber = s.nextInt();
        if(v.equalsIgnoreCase("car")){
          System.out.print("Enter No.of seats Require :");
          int noSeats = s.nextInt();
          System.out.print("Enter Type of a Car (Petrol/Diesel/Electric) :");
          String type = s.next();
          buyingVehicles[i] = new Car(colour,cost,company,millage,vehicleNumber,noSeats,type);
        }else{
          System.out.print("Enter Maximum Load Capacity of Truck :");
          int loadCapacity = s.nextInt();
          System.out.print("Enter require  Horse Power of a Truck : ");
          int horsePower = s.nextInt();
          buyingVehicles[i] = new Truck(colour,cost,company,millage,vehicleNumber,loadCapacity,horsePower);
        }

      }else if(v.equalsIgnoreCase("bike") || v.equalsIgnoreCase("cycle")){
        // Two Wheeler
        System.out.print("Do you want Gear type (true/false) :");
        boolean gearType = s.nextBoolean();

        if(v.equalsIgnoreCase("bike")){
          System.out.print("Enter require siting capcitiy :");
          int sitingCapacity = s.nextInt();
          System.out.print("Enter require petrol tank capcitiy :");
          int tankCapacity = s.nextInt();
          buyingVehicles[i] = new Bike(colour,cost,company,gearType,sitingCapacity,tankCapacity);
        }else{
          System.out.print("Do you want Back seat (true/false) :");
          boolean backSeat = s.nextBoolean();
          System.out.print("Enter Model (Sports/Normal) :");
          String model = s.next();
          buyingVehicles[i] = new Cycle(colour,cost,company,gearType,backSeat,model);
        }
      }else{
        System.out.println("Invalid Vehicle");
      }
      
    }
    System.out.println("Vehicles You have Been Purchased:");
    int total = 0;
    for(Vehicle p : buyingVehicles){
      System.out.printf("%s %s cost is %d /- \n",p.colour,p.name,p.cost);
      total += p.cost;
    }
    System.out.println("Total Cost of Vehicles : "+total+" /-");
    s.close();
  }

}
