import java.io.*;
class FileClass{
  static void p(String s){
    System.out.println(s);
  }
  public static void main(String[] args){
    //File text = new File("textfile.txt");
    //System.out.println(text.getName());
    
    String fname = args[0];  // It is useful to send any file from Command Line Arguments
    // By Running java IO textfile.txt
    File f = new File(fname);
    
    p("File Name : " + f.getName());
    p("Get Path : " + f.getPath());
    p("Get Absolute Path : " + f.getAbsolutePath());
    p("Can I write Method : " + f.canWrite());
    p("Can I Read Method : " + f.canRead());
    p("Directory : " + f.isDirectory());
    p("Length of a File : " + f.length());
    p("Exists file : " + f.exists());
    p("get Parent : " + f.getParent());
    p(f.isFile() ? "Is Normal File " : " Might be a named pipe");
    p("File last Modified : " + f.lastModified());
  }
}
