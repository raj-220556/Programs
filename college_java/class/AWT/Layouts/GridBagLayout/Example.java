import java.awt.*;

class AWTComponents extends Frame{
    AWTComponents(){
        setTitle("Eample");
        setVisible(true);
        setSize(450,450);
        GridBagLayout gbl = new GridBagLayout();
        setLayout(gbl);

        Label l = new Label("Label");
        GridBagConstraints gbc = new GridBagConstraints();
        l.setBackground(Color.green);
        l.setForeground(Color.yellow);
        // ;
        // 
        // gbc.gridy = 10;
        // gbc.gridheight = 100;
        // gbc.gridwidth = 100;

        gbc.weightx = 1.0; // use a column weight of 1
        // size
        gbc.ipady = 75;
        gbc.ipadx = 450; // label will be 450 pixels wide
        // padding around label
        gbc.insets = new Insets(0, 0, 0, 0); //insert spaces of sides top,left,bottom,right
        
        gbc.anchor = GridBagConstraints.NORTH;
        gbc.gridx = 0;
        gbc.gridy = 0;
        gbc.fill = GridBagConstraints.FIRST_LINE_START;

        gbl.setConstraints(l, gbc);
        add(l);
        pack();
        // add(l, gbc);
    }
}

public class Example {
    public static void main(String[] args) {
        new AWTComponents();
    }
}
