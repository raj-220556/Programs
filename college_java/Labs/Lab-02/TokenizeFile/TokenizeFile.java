import java.io.*;
import java.util.*;


class StringClass{
    String str;

    String[] ReadFileConvertIntoTokens(String fname) throws IOException{
        FileReader fileReader = new FileReader(fname);
        BufferedReader f = new BufferedReader(fileReader);
        // BufferedReader take input as Reader Class only
        // File.length() gives file Length and It return type is Long converts into int
        char[] filedata = new char[(int)(new File(fname)).length()];
        StringBuffer str = new StringBuffer();
        int ch, i = 0;

        while((ch = f.read()) != -1){
            filedata[i] = (char) ch;
            i++;
        }

        LinkedList<String> tokens = new LinkedList<String>();
        for(char c : filedata){
            if(c == ' ' || c == '.' || c == '\n'){
                tokens.add(str.toString());
                str = new StringBuffer();
            }
            else{
                str.append(c);
            }
        }
        tokens.add(str.toString());
        String[] tokensArray = new String[(tokens).size()];
        i = 0;
        for(String s : tokens){
            tokensArray[i] = s;
            i++;
        }

        return tokensArray;
    }

}

class TokenizeFile{
    public static void main(String[] args) throws IOException {
        String FileName = "TokensString.txt";
        StringClass str = new StringClass();

        String[] tokens = str.ReadFileConvertIntoTokens(FileName);
        int i = 1;
        for(String token : tokens){
            System.out.printf("File Token %d : %s\n", i++, token);
        }
    }
}