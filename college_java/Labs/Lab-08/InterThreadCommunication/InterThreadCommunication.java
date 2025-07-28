import java.util.*;

class Business{
  private Queue<Integer> q;
  private static int capacity;
  private volatile int i;

  public Business(int capacity){
    Business.capacity = capacity;
    this.q = new LinkedList<>();
    i = 1;
  }

  public synchronized int Producer(){
    while(isFull()){
      try{
        this.wait();
      }
      catch(InterruptedException e){
      }
    }
    int m = i;
    i++;
    System.out.printf("%d is added Producer \n", m);
    q.add(m);
    this.notifyAll();
    return m;
  }

  public synchronized int Consumer(){
    while(isEmpty()){
      try{
        this.wait();
      }
      catch(InterruptedException e){
      }
    }
    int element = q.poll();
    System.out.println(element + " is Consumer Removed..");
    this.notifyAll();
    return element;
  }

  private boolean isFull(){
    return q.size() >= capacity;
  }

  private boolean isEmpty(){
    return q.size() == 0;
  }
}


public class InterThreadCommunication extends Thread{
  public static void main(String[] args){
    System.out.println("Main is started..");
    
    Business b = new Business(5);

  
    for(int i = 0; i< 10; i++){
      new Thread(()->{  //Anonmous Thread we can call Ulimited times
        b.Consumer();
      },"Consumer").start();
    }

    for(int i = 0; i< 10; i++){
      new Thread(()->{
        b.Producer();
      },"Producer").start();
    }
  
  
    // consumer.start();
    // producer.start();


    
    System.out.println("Main is Exit...");
    // System.exit(0);
  }
}
