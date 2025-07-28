import java.io.*;

class ClassFile{
    // File f;
    FileInputStream fis;
    ClassFile(String fname) throws IOException{
        // this.f = new File(fname);
        this.fis = new FileInputStream(fname);
    }
    void PrintCode() throws IOException{
        int ch;
        while((ch = fis.read()) != -1){
            System.out.print((char)ch);
        }
    }

}

class PrintOwnCode{
    public static void main(String[] args) throws IOException{
        ClassFile f = new ClassFile("PrintOwnCode.java");
        f.PrintCode();
    }
}