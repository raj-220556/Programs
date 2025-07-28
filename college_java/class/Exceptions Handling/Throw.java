
class Throw{
  public static void main(String[] args){
    try{
      int age = 13;
      if(age < 18){
        throw new ArithmeticException("Your age Must be 18+");  //We can't use our 
      }else{
        System.out.println("Congrats!");
      }
    }catch(ArithmeticException e){
      System.out.println(e);
    }
    finally{
      System.out.println("this is END");
    }
    System.out.println("Complete");
    
  }
}
