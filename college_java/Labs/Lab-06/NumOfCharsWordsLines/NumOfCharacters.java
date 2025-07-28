import java.io.*;
class ClassFile{
    String fname;
    FileReader fr;
    BufferedReader br;
    ClassFile(String fname) throws IOException{
        this.fname = fname;
        this.fr = new FileReader(fname);
        this.br = new BufferedReader(fr);
    }

    int NumOfWords() throws IOException{
        int numOfWords = 0;
        int ch;
        fr = new FileReader(fname);
        br = new BufferedReader(fr);
        while((ch = br.read()) != -1){
            if((char)ch == ' ' || (char)ch == '\n' || (char)ch == '.'){
                numOfWords++;
            }
        }
        return numOfWords + 1;
    }

    int NumOfCharacters() throws IOException{
        int numOfChar = 0;
        int ch;
        fr = new FileReader(fname);
        br = new BufferedReader(fr);
        while((ch = br.read()) != -1){
            if((char)ch != ' ' && (char)ch != '\n' && (char)ch != '.'){
                numOfChar += 1;
            }
        }
        return numOfChar;
    }

    int NumOfLines() throws IOException{
        int numOfLines = 0;
        fr = new FileReader(fname);
        br = new BufferedReader(fr);
        while((br.readLine()) != null){
            numOfLines += 1;
        }
        return numOfLines;
    }



    int NumOfDigits() throws IOException{
        int numOfDigits = 0;
        int ch;
        fr = new FileReader(fname);
        br = new BufferedReader(fr);
        while((ch = br.read()) != -1){
            if((char)ch >= '0' && (char)ch <= '9'){
                numOfDigits +=1;
            }
        }
        return numOfDigits;
    }


}

class NumOfCharacters{
    public static void main(String[] args) throws IOException{
        ClassFile f = new ClassFile(args[0]);
        System.out.println("Number of Words :" + f.NumOfWords());
        System.out.println("Number of Characters :" + f.NumOfCharacters());
        System.out.println("Numbers of Lines :" + f.NumOfLines());
        System.out.println("Numbers of Digits :" + f.NumOfDigits());
    }
}
