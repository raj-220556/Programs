

public class Methods_of_Strings{

	public static void main(String args[]){
	  String str1 = "Raj Kumar";
	  String str = new String(str1);
	  System.out.println(str1);

	  
	  // charAt()
	  System.out.println("charachter at index '2' is "+ str.charAt(2) );
	  
	  //startsWith
	  System.out.println("String starts with 'a' : " + str.startsWith("a") );
	  
	  //endsWith 
	  System.out.println("String Ends with 'r': " + str.endsWith("r") );
	  
	  //compareTo(str2)
	  String str2 = "hello";
	  System.out.println("String1 compares to String2 is : " + str.compareTo(str2) );
	  
	  //concat
	  System.out.println("String concat :" + str.concat(str2));

	  //contains
	  System.out.println("String contains 'a' :" + str.contains("a"));

	  //equals
	  System.out.println("String1 is equal to String2 :" + str.equals(str2));
	  //equalsIgnoreCase
	  //format
	  //getBytes
	  //getChars
	  //IndexOf
	  //Intern
	  //isEmpty
	  //join
	  //lastIndex
	  //length
	  //replace
	  //replaceAll
	  //split
	  
	
	
	
	
	
	
	}

}
