import java.util.Scanner;
class Array{
  int n;
  int[] arr = new int[n];
  void display(){
    for(int i = 0;i < n; i++){
    System.out.print(arr[i] + " ");
    }
    System.out.print("\n");
  }
  
  void sortEvenOddIndexMethod(){
      for(int i = 0; i < n-1; i++){
          for(int j = 0; j < n-3-i; j++){
              //sorting of even index
              if(arr[j] > arr[j+2]){
              int temp = arr[j];
              arr[j] = arr[j+2];
              arr[j+2] = temp;
              }
              //sorting of odd index
              if(arr[j+1] > arr[j+3]){
                int temp = arr[j+1];
               arr[j+1] = arr[j+3];
               arr[j+3] = temp;
              }
          }
      }
  }

}



class SortEvenOddIndex{
  public static void main(String[] args){
      Array array1 = new Array();
      int n;
      Scanner sc = new Scanner(System.in);
      System.out.print("enter size of array : ");
      n = sc.nextInt();
      int[] arr = new int[n];
      for(int i = 0;i < n; i++){     
        System.out.print("enter "+ (i+1) + " element : ");
        arr[i] = sc.nextInt();
      }
      array1.n = n;
      array1.arr = arr;
      System.out.println("Entered Array:");
      array1.display();
      System.out.println("Sorted Array:");
      array1.sortEvenOddIndexMethod();
      array1.display(); 
      sc.close();
    }
    
}
