import java.io.*;

class ClassFile{
  
  FileReader fr;
  ClassFile(String filename)throws IOException{
    this.fr = new FileReader(new File(filename));
  }
  
  String LongestWord() throws IOException{
    int ch;
    StringBuffer lword = new StringBuffer();
    StringBuffer word = new StringBuffer();
    int len = 0;
    int maxlen = 0;
    while((ch = fr.read()) != -1){
      if((char)ch == ' '){
        if(len > maxlen){
          lword = word;
          maxlen = len;
        }
        len = 0;
        word = new StringBuffer();
      }else{
        word.append((char)ch);
        len++;
      }
    }
    String str = lword.toString();
    return str;
  }
  
  

  
}

class LongestWord{
  public static void main(String[] args) throws IOException{
    // ClassFile fobj = new ClassFile(args[0]);
    ClassFile fobj = new ClassFile("longestwordfile.txt");
    String word = fobj.LongestWord();
    System.out.println("Longest Word In File : " + word);
    System.out.println("Length of Longest Word : " + word.length());
  }

}
