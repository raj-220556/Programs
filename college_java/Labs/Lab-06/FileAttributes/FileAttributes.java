//Display all the File attributes of a File(Attributes means details of a File)

import java.io.*;

class ClassFile{
  File f;
  ClassFile(String fileName){
    this.f = new File(fileName);
  }
  void showAttributes(){
    p("File Name : " + f.getName());
    p("File Path : " + f.getPath());
    p("File Absolute Path : " + f.getAbsolutePath());
    p("File Parent : " + f.getParent()); //send a file name with folder then folder is parent
    p("File is Exists : " + f.exists());
    p("File Can be Read : " + f.canRead());
    p("File Can be Write : " + f.canWrite());
    p("File Can be Execute : " + f.canExecute());
    p("Input file name is Directory : " + f.isDirectory());
    // p("It is Normal file(T) or Might be Named Pipe: " + f.isFile());
    // p("File is Absolute : " + f.isAbsolute());
    p("File Size : " + f.length() + " Bytes");
    // p("File Last Modified : " + f.lastModified());
    
    //p("Create New File : " + f.createNewFile());
    
    // p("toPath() : " + f.toPath());
    // p("toURI() : " + f.toURI());
    // p("listFiles() : " + f.listFiles());  //returns File[] f is directory only make array of files
    // p("list() : " + f.list());  //returns File[] f is directory makes both files and folders
  }
  void p(String s){
    System.out.println(s);
  }
}

class FileAttributes{
  public static void main(String[] args) throws IOException{
    // String fname = args[0];
    ClassFile fileobj = new ClassFile("attributesfile.txt");
    fileobj.showAttributes();
  }

}

