import java.util.*;


class Grocery{
  static int NumProducts;
  static double TotalRevenue;
  static LinkedList <Product> inventory = new LinkedList<Product>();
  
  // adding product to inventory
  int addProduct(Product p){
    if(check(p.name)){
      Product in = new Product();
      for(Product s:inventory){
        if(s.name.equals(p.name)){ //if name adding product is same as existing product
          in = s;
          break;
        }
      }
      if(p.price == in.price){ //if price is same as existing product then adding quantity
        in.quantity += p.quantity;
      }else{
        inventory.add(p); //price is different simpily adding new one
      }
    }else{
      inventory.add(p); 
    }
    NumProducts += 1;  
    return 1;
  }
  void numProducts(){
    System.out.println("\n Total no.of Products : "+NumProducts+"/-");
  }
  void totalRevenue(){
    System.out.println("\n Total Revenue : "+TotalRevenue);
  }
  int sellProduct(Product p,int quantity){
    if(Grocery.check(p.name)){
      for(Product pr:inventory){
        if(pr.name.equals(p.name)){
          if(pr.quantity - quantity <= 0){
            if(pr.quantity == 0 ){
              System.out.println(pr.name +" is Out of Stock");
              return 0;
            }else{
              Scanner s = new Scanner(System.in);
              System.out.println("Sorry we don't such quantity.we have "+pr.quantity+"\n enter how much u want :");
              int q = s.nextInt();
              TotalRevenue += q*pr.price;
              pr.quantity -= q;
              s.close();
              System.out.println(pr.name+" is "+(q*pr.price));
              return 1;
            }
          }else{
            pr.quantity -= quantity;
            TotalRevenue += quantity*pr.price;
            System.out.println(pr.name+" is "+(quantity*pr.price));
            return 1;
          }      
        }else{
          System.out.println("No such item in Grocery");
          return 0;
        }
      }
    }
    return 1;
  }
  void displayStatus(){
    System.out.println("===== Welcome to Inventory ====");
    int i = 1;
    if(inventory == null){
      System.out.println("\n No item in Inventory");
    }
    for(Product p:inventory){    
      System.out.println("Product ("+i +") Name :" + p.name+",Price : "+p.price+",Quantity : "+p.quantity);
      i++;
    }
    System.out.println("\n  Total Revenue :"+ TotalRevenue);
  }
  static boolean check(String checking){
    for(Product p:inventory){
      if(p.name.equals(checking)){
        return true;
      }
    }
    return false;
  }

}
class Product{
  String name = new String();
  double price;
  int quantity;

}


public class GroceryStore{
  public static void main(String args[]){
    Scanner scanner = new Scanner(System.in);
    Grocery shop = new Grocery();

    while(true){
      System.out.println("  ==== Welcome to Groceroy Shop ====");
      System.out.print("1.Add Product\n2.Sell Product\n3.Inventory Status\n4.Total Revenue\n5.No of Products\n0.exist \nenter :");
      int c = scanner.nextInt();
      if(c == 1){
        Product padd = new Product();
        System.out.print("-Product\nName : ");
        padd.name= scanner.next();
        System.out.print("Price : ");
        padd.price = scanner.nextDouble();
        System.out.print("Quantity : ");
        padd.quantity = scanner.nextInt();
        shop.addProduct(padd);
      }else if(c == 2){
        Product pSell = new Product();
        System.out.println("enter product\nName :");
        pSell.name = scanner.next();
        System.out.print("quantity :");
        int sellQuantity = scanner.nextInt();
        pSell.quantity = sellQuantity;
        shop.sellProduct(pSell, sellQuantity);
      }else if(c == 3){
        shop.displayStatus();
      }else if(c == 4){
        shop.totalRevenue();      
      }else if(c == 5){
        shop.numProducts();
      }else{
        System.out.println("==== Thank u for Coming ====");
        break;
      }
    }
    scanner.close();
  }


}
