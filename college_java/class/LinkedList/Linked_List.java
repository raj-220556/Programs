import java.util.*;

public class Linked_List {
    public static void main(String args[]){
        // Creating Single Linked List
        LinkedList<Integer> obj_int = new LinkedList<Integer>();
        // Insertion of a Linked list
        obj_int.add(2);
        obj_int.add(1);
        obj_int.add(3);
        obj_int.addFirst(4);
        obj_int.addLast(5);
        obj_int.add(2,5);
        // Traversing of Linked list
        System.out.println("Created Linked List : "+ obj_int );
        // Deletion of a Linked List
        obj_int.remove(1);  // It is taking as like index not removing element
        obj_int.remove(3);

        System.out.println("Deleted Linked List : " + obj_int);
        boolean status = obj_int.contains(2);

    }
}
