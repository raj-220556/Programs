import java.util.Scanner;

public class Sorting_array{
    public static void main(String[] arg){
        Scanner scanner = new Scanner(System.in);
        int size;
        System.out.print("enter size of array :");
        size = scanner.nextInt();
        int[] array = new int[size];
        for(int i = 0;i < size; i++){
            System.out.print("enter array["+(i+1)+"] element :");
            array[i] = scanner.nextInt();
        }
        // entered array
        System.out.println("entered array :");
        for(int i = 0;i < size; i++){
            System.out.print(array[i] + " ");
        }
        // Sorting array
        int temp;
        for(int i = 0; i < size-1; i++){
            for(int j = 0; j<size-i-1; j++){
                if(array[j] > array[j+1]){
                    temp = array[j];
                    array[j] = array[j+1];
                    array[j+1] = temp;
                }
            }
        }
        System.out.println("\nsorted array :");
        for(int i = 0;i < size; i++){
            System.out.print(array[i]+" ");
        }


        scanner.close();
    }
}
