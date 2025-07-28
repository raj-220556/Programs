class parent{
	int i;
	int j;
	void showij(){
		System.out.println("i = " + i +"\nj = " + j);
	}
	
}

class child extends parent{
	int k;
	void showk(){
		System.out.println("k = " + k);
	}
	void sum(){
		System.out.println("i + j + k = " + (i+j+k));
		
	}
}

class SimpleInheritance{
	public static void main(String arg[]){
		parent a = new parent();
		child b = new child();
		a.i = 10;
		a.j = 20;
		a.showij();
		
		b.i = 5;
		b.j = 10;
		b.k = 15;
		b.showij();
		b.showk();
		b.sum();
	}

}
