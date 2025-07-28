// write a code to crate a object and with predefined value and print it
class Object_predefined{
    String name; //instance variables
    int age;
  public Object_predefined (){
    name = "raj"; //this.name use for separate methods
    age = 20;
    
   } 
  
  public static void main(String[] args){
    Object_predefined  raj = new Object_predefined ();
    
    System.out.println("your name is "+raj.name);
    System.out.println("your age is "+raj.age);

  }
}
