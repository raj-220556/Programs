import java.util.Scanner;
class array{
 int n;
 int[] arr = new int[n];
    void display(){
      for(int i = 0;i < n; i++){
      System.out.print(arr[i] + " ");
      }
      System.out.print("\n");
    }
    
    void reverseArray(){
      for(int i = 0;i < (n/2); i++){
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
      }
    }
    

    
}

class ReverseArray{
  public static void main(String[] args){
    int n;
    Scanner sc = new Scanner(System.in);
    System.out.print("enter size of array : ");
    n = sc.nextInt();
    int[] arr = new int[n];
    for(int i = 0;i < n; i++){     
      System.out.print("enter "+ (i+1) + " element : ");
      arr[i] = sc.nextInt();
    }
    sc.close();
    array array1 = new array();
    array1.n = n;
    array1.arr = arr;
 
    System.out.println("Entered Array :");
    array1.display();

    System.out.println("Reverse of an Array :");
    array1.reverseArray();
    array1.display();
    
  }
  
}
