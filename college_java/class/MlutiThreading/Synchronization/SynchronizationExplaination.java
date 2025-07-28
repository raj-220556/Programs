
// ->Threads share the same memory space, i.e. they can share resources(objects)
// ->However, there are critical situations where it is desirable it is desirable
// that only one thread at a time has access to shared resource


public class SynchronizationExplaination {
    public static void main(String[] args) {
        
        stack s = new stack(5);

        s.push(100);
    }
}
