class Server extends Thread{
  // public volatile boolean isRunning;
  
  // Server(){
  //   this.isRunning = true;
  // }

  public void serverMoniter(){
      try {
        Thread.sleep(500);
      } catch (InterruptedException e) {
        System.out.println(e);
      }
      System.out.println("Monitoring server...");
    
  }

  public void workerTask(){
    try{
      Thread.sleep(5000);
    } catch(InterruptedException e){
      System.out.println(e);
    }
    System.out.println("Worker Task Completed...");
  }
}

// class test extends Thread{

//   public void run() {
//     System.out.println("Testing...");
//   }
// }
class DaemonThread {
  public static void main(String[] args){
    System.out.println("Main Started ...");


    Server s = new Server();
 
    // Thread deamon = new Server();
    Thread daemon = new Thread(()->{
      while(true){
        s.serverMoniter();
      }
    });

    Thread worker = new Thread(()->{
      s.workerTask();
    });
    
    // Thread t = new test();
    // t.start();
   
    daemon.setDaemon(true);
    daemon.start();
    worker.start();

    try{
      worker.join(); // join makes stops mains excution until is complition
    }
    catch(InterruptedException e){
      System.out.println(e);
    }

    System.out.println("Main Exited...");
  }
}
