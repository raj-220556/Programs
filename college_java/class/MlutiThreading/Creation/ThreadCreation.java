

class Thread1 implements Runnable{ //Mostly we use Runnable because extends not 
    @Override
    public void run(){
        for(int i = 0; i < 5; i++){
            System.out.println("Thread1");
        }
    }
}

class Thread2 extends Thread{
    @Override
    public void run() {
        for(int i = 0; i < 5; i++){
            System.out.println("Thread2");
        }
    }
}

public class ThreadCreation {
    public static void main(String[] args) {
        
        System.out.println("Program Started....");

        // //Runnable decleration
        // Thread t1 = new Thread(new Thread1());
        // t1.start();
        // //Thread Class Decleration
        // Thread t2  = new Thread2();
        // t2.start();

        // Creating Runnable interface Thread With lamda function
        Thread t3 = new Thread(()->{//We are writing code here which is writing in run();
            for(int i = 0; i < 5; i++){
                System.out.println("Thread3..");
            }
        });

        t3.start();

        System.out.println("Program Exist...");

    }
}

//Main Thread
//Child Threads Thread1, Thread2

//Thread Share memory space and they can share resources