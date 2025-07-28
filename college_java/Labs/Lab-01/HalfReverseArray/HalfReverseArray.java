import java.util.Scanner;
class Array{
int n;
int[] arr;

  void display(){
      for(int i = 0;i < n; i++){
      System.out.print(arr[i] + " ");
      }
      System.out.print("\n");
  }
    
  void half_reverse_array(int side){
      int start,end;

      if (side == 0){
        start = n/2;
        end = n-1;
        while(start < end){
          int temp = arr[start];
          arr[start] = arr[end];
          arr[end] = temp;
          start++;
          end--;
        }
      }else{
        start = 0;
        end = n/2 -1;
        while(start < end){
          int temp = arr[start];
          arr[start] = arr[end];
          arr[end] = temp;
          start++;
          end--;
        }   
      }
        
  }
}

class HalfReverseArray{
  public static void main(String[] args){
    
    int n;
    Scanner sc = new Scanner(System.in);
    System.out.print("enter size of array : ");
    n = sc.nextInt();
    int[] arr = new int[n];
    Array array1 = new Array();
    array1.n = n;
    array1.arr = arr;
    for(int i = 0;i < n; i++){     
      System.out.print("enter "+ (i+1) + " element : ");
      array1.arr[i] = sc.nextInt();
    }
    
    
    System.out.println("Entered Array:");
    array1.display();

    System.out.print("enter which side to reverse Right(0) or Left(1) :");
    int side = sc.nextInt();
 
    System.out.println("Half Reversed Array:");
    array1.half_reverse_array(side);
    array1.display();
    sc.close();
  }
}
