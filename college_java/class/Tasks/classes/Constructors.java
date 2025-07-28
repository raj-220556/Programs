class Dog{
	 int size;
	 String breed;
	 String name; // name = null
	 boolean type;
	 Dog(int x){
	 	size = x;
	 	breed = "pug";
	 }
	 void bark(){
	 	System.out.println( "Bow Bow");
	 }
}

class Constructors{
	public static void main (String[] args){
		Dog d = new Dog(20);  
		d.bark();
		System.out.println(d.type);
	}
}
