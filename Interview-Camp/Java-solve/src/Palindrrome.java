import java.io.*;
import java.util.*;

public class Palindrrome {
    public static void main(String[] args) {

        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        /* Enter your code here. Print output to STDOUT. */
        boolean check = true;
        int i = 0;
        int j = A.length() - 1;
        while (i < j){
            if (A.charAt(i) != A.charAt(j)){
                check = false;
            }
            i++;
            j--;
        }
        //check = true;
        if (check){
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
    }

}
