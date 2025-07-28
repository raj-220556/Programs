import java.awt.*;
import java.awt.event.*;

class AWTComponents extends Frame implements ActionListener{
    Label output;
    String[][] icons = {
        {"AC", "C", "%", "/"},
        {"7", "8", "9", "*"},
        {"4", "5", "6", "-"},
        {"1", "2", "3", "+"},
        {"OFF", "0", ".", "="}
    };
    String outputmsg = new String("");
    Button[][]  buttons = new Button[5][4];
    AWTComponents(){
        setTitle("Caluculator");
        setVisible(true);
        setSize(400,600);
        setBackground(Color.BLACK);
        setFont(new Font("Bold",Font.BOLD,45));
        GridBagLayout gbl = new GridBagLayout(); 
        setLayout(gbl);
        addWindowListener(new WindowAdapter(){
            public void windowClosing(WindowEvent e){
                System.exit(0);
            }
        });
        
        //Adding Components
        output = new Label(outputmsg);
        output.setBackground(Color.WHITE);
        output.setForeground(Color.BLACK);
        GridBagConstraints gbc = new GridBagConstraints();
        gbc.gridx = 0;
        gbc.gridy = 0;
        gbc.gridwidth = 4;
        gbc.weightx = 0.5;
        gbc.weighty = 0.5;
        gbc.fill = GridBagConstraints.BOTH;
        add(output, gbc);

        

        // Adding buttons and registering action listeners
        for(int i = 0; i < 5; i++){
            for(int j = 0; j < 4; j++){
                buttons[i][j] = new Button(icons[i][j]);
                buttons[i][j].addActionListener(this);
                gridComponents(buttons[i][j],j, i+1);

            }
        }

    }

    void gridComponents(Button b, int x, int y){
        GridBagConstraints gbc = new GridBagConstraints();
        b.setBackground(Color.gray);
        //coordinates
        gbc.gridx = x;
        gbc.gridy = y;
        // //Merging of cells
        // gbc.gridwidth = 1;
        // gbc.gridheight = 1;
        //Spaces
        // gbc.weightx=1.0;
        // gbc.weighty=1.0;
        //heigth and width
        // gbc.ipadx=2;
        // gbc.ipady=2;
        //
        gbc.weightx = 0.5;
        gbc.weighty = 0.5;
        gbc.fill=GridBagConstraints.BOTH;
        add(b,gbc);
    }

    
    public void actionPerformed(ActionEvent ae) {
        String source = ((Button) ae.getSource()).getLabel();
       switch (source){
            case "AC":
                outputmsg = "";
                break;
            case "C":
                if(!outputmsg.isEmpty()){
                    outputmsg = outputmsg.substring(0, outputmsg.length()-1);
                }
                break;
            case "=":
                outputmsg = eval(outputmsg);
                break;
            case "OFF":
                System.exit(0);
                break;
            default:
                outputmsg += source; 
       }
       output.setText(outputmsg);
    }

    String eval(String str){
        Double f = 0.0;
        Double num = 0.0;
        String result = "";
        char op = ' ';
        boolean isFirstNumber = true;
        boolean isFirst = true;
        for(int i = 0; i < str.length(); i++){
            if(str.charAt(i) <= '9' && str.charAt(i) >= '0' || str.charAt(i)=='.'){
                result += str.charAt(i);
            }else{
                
                if(isFirstNumber){
                    // num = caluculate(num, Double.valueOf(result), op);
                    f = Double.valueOf(result);
                    isFirstNumber = false;
                }
                else{
                    if(isFirst){
                        if(Double.valueOf(result) == 0.0 && op == '/') return "Error";
                        num = caluculate(f, Double.valueOf(result), op);
                        isFirst = false;
                    }else{
                        if(Double.valueOf(result) == 0.0 && op == '/') return "Error";
                        num = caluculate(num, Double.valueOf(result), op);
                    }
                    
                }
                op = str.charAt(i);
                result = "";
            }
 
        }
        if(isFirst){
            if(Double.valueOf(result) == 0.0 && op == '/') return "Error";
            num = caluculate(f, Double.valueOf(result), op);
        }else{
            if(Double.valueOf(result) == 0.0 && op == '/') return "Error";
            num = caluculate(num, Double.valueOf(result), op);
        }

        return String.valueOf(num);
    }

    
        Double caluculate(Double num1, Double num2, char op){
            Double result = 0.0;
            switch(op){
                case '+':
                    result = num1 + num2;
                    break;
                case '*':
                    result = num1 * num2;
                break;
                case '-':
                    result = num1 - num2;
                    break;
                case '%':
                    result = num1 % num2;;
                    break;
                case '/': 
                    result = num1 / num2;;
                    break;
                default:
                    break;
            }
            return result;
        }
}


public class Caluculator {
    public static void main(String[] args) {
        new AWTComponents();
    }
    
}
