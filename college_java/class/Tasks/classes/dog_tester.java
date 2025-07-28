class dog{
	int size ;
	String breed;
	String name;
	void bark(){
		System.out.println("Bow Bow");
	}
}

class dog_tester{
	public static void main(String[] args){
		dog dog1 = new dog();
		dog1.name = "puppy";
		dog1.breed = "pug";
		dog1.bark();
	}
}
		
