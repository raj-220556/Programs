class trycatch{
  public static void main(String[] args){
  //try catch only catch RUNTIME Errors
  //It not catch syntax errors and compile time errors
    try{
      int a = 0, b = 1, c = 3;
      System.out.println(b+c/a);
    }
    catch(ArithimeticException e){
      System.out.println("IT is Arthimetic Exceptions :" + e);
    }
    catch(ArrayIndexOutOfBoundException e){
      System.out.println("ArrayIndexOutOfBoundException :" + e);
    }
    catch(Exception e){// It must last of all catch Exceptions
      System.out.println("ERROR : "+e);
    }
    finally{
      System.out.println("Try Block is Completed");
    }
    
    
  }

}
