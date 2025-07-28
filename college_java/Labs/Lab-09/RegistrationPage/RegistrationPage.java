import java.awt.*;
import java.awt.event.*;

class AWTComponents extends Frame{
    AWTComponents(){
        setTitle("Registration Page");
        setVisible(true);
        // setBackground(new Color(255, 255, 255));
        setBackground(Color.WHITE);
        setSize(500, 1000); 
        addWindowListener(new WindowAdapter(){
            public void windowClosing(WindowEvent e){
                System.exit(0);
            }
        });
        setFont(new Font("all", Font.ITALIC, 20));

        GridBagLayout gbl = new GridBagLayout();
        setLayout(gbl);
        GridBagConstraints gbc = new GridBagConstraints();
        gbc.fill = GridBagConstraints.BOTH;

        //Heading
        Label heading = new Label("Student Registration Form",1);
        heading.setForeground(Color.orange);
        heading.setFont(new Font("name", Font.BOLD, 30));
        gbc.gridx = 0;
        gbc.gridy = 0;
        gbc.gridwidth = 2;
        add(heading, gbc);

        // Name
        Label l = new Label("Name : ");
        gbc.gridx = 0;
        gbc.gridy = 1;
        gbc.gridwidth = 1;
        add(l, gbc);
        TextField name = new TextField("Full Name");
        name.setBackground(Color.gray);
        gbc.gridx = 1;
        gbc.gridy = 1;
        add(name, gbc);
        //ID Number
        l = new Label("ID Number : ");
        TextField id = new TextField("N22****",7);
        id.setBackground(Color.gray);
        gbc.gridx = 0;
        gbc.gridy = 2;
        add(l, gbc);
        gbc.gridx = 1;
        gbc.gridy = 2;
        // gbc.gridwidth = 1;
        add(id, gbc);

        // Password
        l = new Label("SMS Password : ");
        TextField pwd = new TextField("*****",5);
        pwd.setEchoChar('*');
        pwd.setBackground(Color.gray);
        gbc.gridx = 0;
        gbc.gridy = 3;
        // gbc.gridwidth = 1;
        add(l, gbc);
        gbc.gridx = 1;
        gbc.gridy = 3;
        // gbc.gridwidth = 2;
        add(pwd, gbc);

        //Gender
        l = new Label("Gender : ");
        gbc.gridx = 0;
        gbc.gridy = 4;
        // gbc.gridwidth = 1;
        add(l,gbc);
        // Radio button is one option in multiplie options for create use check box group
        CheckboxGroup group = new CheckboxGroup();
        Checkbox cb1 = new Checkbox("Male",true,group);
        Checkbox cb2 = new Checkbox("Female",true,group);
        gbc.gridx = 0;
        gbc.gridy = 5;
        add(cb1,gbc);
        gbc.gridx = 1;
        gbc.gridy = 5;
        add(cb2, gbc);
        //Branch
        l = new Label("Branch :");
        gbc.gridx = 0;
        gbc.gridy = 6;
        add(l, gbc);
        Choice c = new Choice();
        c.setBackground(Color.lightGray);
        c.add("CSE");
        c.add("ECE");
        c.add("MME");
        c.add("MECH");
        c.add("CIVIL");
        c.add("EEE");
        gbc.gridx = 1;
        gbc.gridy = 6;
        add(c, gbc);

        //Address
        l = new Label("Address :");
        gbc.gridx = 0;
        gbc.gridy = 7;
        // gbc.gridwidth = 1;
        add(l,gbc);
        TextArea ta = new TextArea("Village, Pincode",3,5);
        ta.setBackground(Color.gray);
        gbc.gridx = 0;
        gbc.gridy = 8;
        gbc.gridwidth = 2;
        add(ta,gbc);

        //Submit
        l = new Label();
        gbc.gridx = 0;
        gbc.gridy = 9;
        add(l,gbc);

        Button b = new Button("Submit");
        b.setBackground(Color.orange);
        gbc.gridx = 0;
        gbc.gridy = 10;
        // gbc.gridwidth = 2;
        gbc.fill = GridBagConstraints.CENTER;
        add(b, gbc);


    }

    // public void paint(Graphics g){
    //     Font f = new Font("Name", Font.BOLD, 30);
    //     g.setFont(f);
    //     setForeground(Color.WHITE);
    //     g.drawString("---- Registration From ----", 75, 50); // x, y

    // }
}


public class RegistrationPage {
    public static void main(String[] args){
        // Page p = new Page();
        new AWTComponents();

        // Label h = new Label("---- Registration From ----",1); //0,1,2 anyother gives Error IllegalArgument

    }
    
}

//1.label
//2.Button
//3.Text Field
//4.Text Area
//5.Choice
//6.List
//7.CheckBox
//8.Radio Buttons
//9.Scroll Bar