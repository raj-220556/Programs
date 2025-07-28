import java.io.*;

class ClassFile{
  File f;
  ClassFile(String fileName){
    this.f = new File(fileName);
  }
  void DirectoryContent(){
    if(f.isDirectory()){
      p("Provided Director Name : " + f.getName());
      //File[] arr = f.listFiles(); returns File[]
      String[] arr = f.list();
      for(String a : arr){
        File s = new File(f+"/"+a);
        if(s.isDirectory()){
          p(s.getName() + " Directory");
        }else{
          p(s.getName() + " File");
        }
      }
    }else{
      p("It is Not a Directory");
    }
  }
  void p(String s){
    System.out.println(s);
  }
  
}

class DirectoryConent{
  public static void main(String[] args){
    String dir = "Directory";
    ClassFile f = new ClassFile(dir);
    f.DirectoryContent();
    
  }

}
