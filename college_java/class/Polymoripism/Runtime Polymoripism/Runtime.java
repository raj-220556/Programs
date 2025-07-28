class Parent{
    int x;
    void sameMethod(){
        System.out.println("Parent class");
    }
}
class Child extends Parent{
    int x;
    void sameMethod(){
        System.out.println("Child class");
    }
}

class Runtime {
    public static void main(String[] args) {
    // dynamic Method overriding
    
        Parent p = new Parent();
        Child c = new Child();

        Parent reference = new Parent();

        // calling parent method
        reference = p;
        reference.sameMethod();

        // calling child method
        reference = c;
        reference.sameMethod();

        // variables we cant override
        // polymoripism only associated with methods and dont on datamembers


    }
}
