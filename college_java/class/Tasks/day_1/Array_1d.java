// cretaing array taking element and size from the user
import java.util.Scanner;


public class Array_1d {
    public static void main(String[] arg){
        Scanner scanner = new Scanner(System.in);
        int size;
        System.out.print("enter size of array :");
        size = scanner.nextInt();
        // System.out.println(size);
        int[] arr = new int[size];

        for(int i = 0;i<size;i++){
            System.out.print("enter array["+(i+1)+"] element :");
            arr[i] = scanner.nextInt();
        }
        for(int i= 0;i < size; i++){
            System.out.print(arr[i]+" ");
        }

        scanner.close();
    }
    
}
