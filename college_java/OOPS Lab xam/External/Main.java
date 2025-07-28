import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
 

class SwingComponents extends JFrame{
    JTextField tf;
    SwingComponents(){
        setTitle("Lab External");
        setSize(600,600);
        setVisible(true);
        GridBagLayout gbl = new GridBagLayout();
        setLayout(gbl);

        // Add TextField
        tf = new JTextField("TextField",6);
        GridBagConstraints gbc = new GridBagConstraints();
        gbc.fill = GridBagConstraints.BOTH;
        gbc.gridx = 0;
        gbc.gridy = 0;
        gbc.weightx = 0.5;
        gbc.gridwidth = 2;
        add(tf, gbc);
        
        //Rectangle and Oval
        gbc.gridwidth = 1;
        gbc = new GridBagConstraints();
        JButton rect = new JButton();
        rect.setBackground(Color.red);
        gbc.gridx = 0;
        gbc.gridy = 1;
        addRectangleEvent(rect);
        add(rect, gbc);
        
        JButton oval = new JButton();
        gbc = new GridBagConstraints();
        oval.setBackground(Color.green);
        gbc.gridx = 1;
        gbc.gridy = 1;

        //oval.setBorderRadius(20,20);




        addOvalEvent(oval);
        add(oval,gbc);
        //pack();
    }
    
    void addRectangleEvent(JButton l){
      l.addMouseListener(new MouseAdapter(){
          public void mouseClicked(MouseEvent me){
            tf.setBackground(Color.red);
          }
        });
    }
    
    void addOvalEvent(JButton l){
      l.addMouseListener(new MouseAdapter(){
        public void mouseEntered(MouseEvent me){
          tf.setBackground(Color.green);
        }
      });
    }
}

class Main{
 public static void main(String[] args){
   new SwingComponents();
 }
}
