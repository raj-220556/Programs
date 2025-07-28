// Remove Duplicates in the Array
import java.util.Scanner;
class Array{
    int n;
    int[] array = new int[n];
    
    void display(){
        for(int v : array){
            System.out.print(v + " ");
        }System.out.println("");
    }
      
    int[] removeDuplicates(){
        int maxelement = array[0];
        int minelement = array[0];
        for(int i = 0; i < n; i++){
            if(array[i] > maxelement){
                maxelement = array[i];
            }
            if(array[i] < minelement){
                minelement = array[i];
            }
        }
        int[] elementscount = new int[maxelement - minelement + 1];
        int index = 0;
        int[] newArray = new int[n];
        for(int i = 0; i < n; i++){
            elementscount[array[i] - minelement]++;
            if(elementscount[array[i] - minelement] == 1){
                newArray[index] = array[i];
                index++;
            }
        }
        return newArray;
    }
    

}
public class RemoveDuplicates{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the size of array :");
        int size = scanner.nextInt();
        int[] arr = new int[size];
        for(int i = 0; i < size;i++ ){
            System.out.print("enter "+(i+1)+" element :");
            arr[i] = scanner.nextInt();
        }
        Array array1 = new Array();
        array1.n = size;
        array1.array = arr;
        
        System.out.println("Entered Array:");
        array1.display();

        System.out.println("Without Duplicates Array:");
        int[] noDupArray = array1.removeDuplicates();
        for(int i = 0; i < noDupArray.length; i++){
            if(noDupArray[i] == 0){
                break;
            }
            System.out.print(noDupArray[i]+" ");
            
        }
       scanner.close();

    }
}
