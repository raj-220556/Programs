import java.util.*;

class StringClass{
    String str;
    int len;
    StringClass(String str){
        this.str = str;
        this.len = str.length();
    }
    
    int isPresent(String check){
        //converting string into array
        char arrStr[] = new char[len+1];
        str.getChars(0,len,arrStr,0);
        //converting substring into array
        int checklen = check.length();
        char arrCheck[] = new char[checklen];
        check.getChars(0,checklen,arrCheck,0);
        int isPresent = -1;
        for(int i = 0; i < len; i++){
            if(arrStr[i] == arrCheck[0]){
                for(int j = 1; j < checklen; j++){
                    if(arrStr[i+j] == arrCheck[j]){
                        isPresent = i;
                    }else{
                        isPresent = -1;
                        break;
                    }
                }  
            }      
        }
   
        return isPresent;
    } 
}

public class SubstringCheck{

  public static void main(String[] args){
    Scanner scanner = new Scanner(System.in);
    System.out.print("enter the string :");
    String str = scanner.nextLine();
    StringClass obj = new StringClass(str);
    System.out.print("enter the substring to find :");
    String subString = scanner.nextLine();
    
    int index = obj.isPresent(subString);
    
    if(index == -1){
        System.out.println(subString + " not present in the entered string");
    }else{
        System.out.println(subString + " present in the entered string at starts index is " + index);
    }
    scanner.close();
  }

}
