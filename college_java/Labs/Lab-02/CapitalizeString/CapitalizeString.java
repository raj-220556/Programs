import java.util.Scanner;

class StringClass {
    String str;
    int len;
    StringClass(String str){
        this.str = str;
        this.len = str.length();
    }
    String capitalizeString(){
        StringBuffer b = new StringBuffer(str);
        int length = b.length();
        char arr_string[] = new char[length+1];
        //copies string into array
        // String.getChars(startOfString, String.length, ArrayName, StartOfArray)
        b.getChars(0,length, arr_string, 0);
        for(int i = 0; i < length; i++){
          if(i == 0 && arr_string[0] >= 'a' && arr_string[0] <= 'z'){
            // s[i] = (char)((int)s[i] + 32);
            arr_string[0] = (char)((int)arr_string[0] - 32);                      
            //int c = int.valueOf(arr_string[0]);
            //c = c+32;
            //arr_string[0] = char.valueOf(c);   //gives error
          }
          if(arr_string[i] == ' ' && arr_string[i+1] >= 'a' && arr_string[i+1] <= 'z'){
            arr_string[(i+1)] = (char)((int)arr_string[(i+1)] - 32);
            //int c = int.valueOf(arr_string[i]);
            //c = c+32;
            //arr_string[i] = char.valueOf(c);
          }
        }
        //converting array into string
        String cap_str = String.valueOf(arr_string);

        return cap_str;
    }
}
class CapitalizeString{
  public static void main(String[] args){
    Scanner scanner = new Scanner(System.in);
    System.out.print("enter the string to capitalize :" );
    String str = scanner.nextLine();  
    StringClass obj = new StringClass(str);
    System.out.print("Capitalized String is :" );
    String capStr = obj.capitalizeString();
    System.out.println(capStr);
    scanner.close();
  }
}
