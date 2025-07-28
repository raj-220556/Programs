import java.io.*;
class DataInputStreamClass{
  public static void main(String[] args) throws IOException{
    //FileOutputStream out = new FileOutputStream("filename", true); // here true means append data into th exsting file by default it have false
    // BufferedOuputStream bout = new BufferedOutputStream(out, 1024);
    String fname = args[0]; 
    
    DataInputStream fin = new DataInputStream(System.in);
    FileOutputStream fout = new FileOutputStream(fname,true); // if file doesn't exsit then it create new file
    
    
    //By Using Buffer class
    
    BufferedOutputStream bout = new BufferedOutputStream(fout,1024);
    
    
    System.out.println("Enter ($ at the End file)");
    
    char ch;
    while((ch = (char)fin.read()) != '$'){
      bout.write(ch);
    }
    bout.close();
    
    //System.out.println(fname + " Has Stored data You Entered");
    System.out.println(fname + "Data has been appended to the existing file");
    
    
    
  }
  
}
