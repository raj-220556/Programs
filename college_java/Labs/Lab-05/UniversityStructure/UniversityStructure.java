interface University{ //we can't extend abstract class to interface
  void hacktons();
  void fest(String type);
}

interface Government extends University{  //one interface to another we use "extends"
  void region(String state);
  void fees();
}

interface Private extends University{
  void fees(int amount);
  void organisedBy(String name);
}

interface Tier1 extends Private,Government{
  // final String name = "Tier1";   //this is constant variable
  void lpa(int amount);
  //void level(){ //concrete method
   //  System.out.println("This is "+this.name+" University**");
  //}
  
}

interface Tier2 extends Private,Government{
  //String name = "Tier2";  //this constant variable
  void lpa(int amount);
  //void level();
}

interface Tier3 extends Private,Government{
  //String name = "Tier3"; // can't allow override
  void lpa(int amount);
  //void level();
}

abstract class Chancellor implements Tier1,Tier2, Tier3{
  abstract void show();
  void chancellorOffice(){
    System.out.println("This is Chancellor Office");
  }
}

abstract class ViceChancellor extends Chancellor{
  abstract void show();
  void viceChancellorOffice(){
    System.out.println("This is Vice Chancellor Office");
  }
}
abstract class Director extends ViceChancellor{
  abstract void show();
  void directorOffice(){
    System.out.println("This is Director Office");
  }
}

 class Management extends Director{
  public void hacktons(){
    System.out.println("* University Hackton *");
  }
  public void fest(String type){
    System.out.println("*This is a University "+type+" Festival*");
  }
  public void region(String state){
    System.out.println(state+" Government college!");
  }
  public void fees(){
    System.out.println("*This is Government University NO FEES!*");
  }
  public void fees(int amount){
    System.out.println("*This is Private University FEES is : $"+amount);
  }
  public void organisedBy(String name){
    System.out.println("This Private University Organise By :"+name);
  }
  public void lpa(int amount){
    System.out.println("You got $"+amount+" package in Univerity!" );
  }
  //public void level(){  //this is  interface can't allow overriding
   // System.out.println("This is "+this.name+" University");
  //}

  public void show(){
    System.out.println("This is Abstract Method");
  }
  
  //instances methods 
  void cse(){
    System.out.println("This is CSE Office!");
  }
  void ece(){
    System.out.println("This is ECE Office!");
  }
  void mechanical(){
    System.out.println("This is Mechanical Office!");
  }

}

public class UniversityStructure{
  public static void main(String[] args){
    Management mang = new Management();
    
    mang.mechanical();
    mang.ece();
    mang.cse();
    
    mang.directorOffice();

    mang.viceChancellorOffice();

    mang.chancellorOffice();
    mang.show();

    mang.lpa(1200000); // we can't able to find lap() method which tier
    
    mang.organisedBy("Narendra Modi");
    mang.fees(50000);
    
    mang.fees();
    mang.region("AP");
    
    mang.fest("cutural");
    mang.hacktons();
    
    
    

    //University u = mang;
    //Chancellor c = (Chancellor) u;
    
    //c.office();

    // Director d1=new Director();
    // d1.show();
   
   
    
    

    //less no.of abstract classes
    //sol: use in middle of abstarct and interface normal class "WRONG"
    
  }
}

