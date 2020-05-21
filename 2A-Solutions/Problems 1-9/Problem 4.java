//Petya and Strings
import java.util.*;

public class Main {
  public static void main(String[] args){
	    Scanner sc = new Scanner(System.in);
	    String a = sc.next();
	    String b = sc.next();
	    
	    String a_l = a.toLowerCase();
	    String b_l = b.toLowerCase();
	    if(a_l.compareTo(b_l) > 0){
	        System.out.println("1");
	    }else if(a_l.compareTo(b_l) < 0){
	        System.out.println("-1");
	    }else{
	        System.out.println("0");
	    }


}
}
