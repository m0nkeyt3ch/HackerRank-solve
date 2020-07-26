import java.io.*;
import java.util.*;

public class stringTokens {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine();
        // Write your code here.
//        String test = s.replaceAll(" ", "");
//        System.out.println(test);
        s = s.trim();
        if (s.length() == 0){
            System.out.println(0);
            return;
        }
        String[] str = s.split("[^a-zA-Z]+");
        System.out.println(str.length);
        for (String res : str){
            System.out.println(res);
        }
        scan.close();
    }
}
