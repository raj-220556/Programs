import java.io.*;
import java.util.Scanner;

class FileClass{
  File f;
  FileReader fr;
  int fileNumber;
  FileClass(String fname) throws IOException{
    this.f = new File(fname);
    this.fr = new FileReader(f);
  }
  
  int DivideFileNumber(int a) throws IOException,ArithmeticException{
    int  num;
    int number = 0;
    boolean isFound = false;
    if(a == 0){
      throw new ArithmeticException("Number Not Divisible By Zero!");
    }
    while((num = fr.read()) != -1 && !isFound){
      if(num >= 48 && num <= 57){  
        number  = (number * 10) + (num - 48);
      }else{
        if(number !=  0){
          isFound = true;
        }
      }
    }
    if(number == 0){
        throw new IOException("File Doesn't Contain any Number");
    }
    this.fileNumber = (int)number;
    return number / a;  
  }
  
}

class NumberFileInput{
  public static void main(String[] args){
    Scanner s = new Scanner(System.in);
    try{
      FileClass f = new FileClass("Number.txt");
      System.out.print("Enter Number To Divide : ");
      int a = s.nextInt();
      System.out.println(f.fileNumber + "/" + a + " = " + f.DivideFileNumber(a));
    }
    catch(Exception e){
      System.out.println(e);
    }
    finally{
      s.close();
    }
  }
  
}
