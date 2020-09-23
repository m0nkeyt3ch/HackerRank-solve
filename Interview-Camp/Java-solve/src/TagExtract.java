import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class TagExtract {
    public static void main(String[] args){

        Scanner in = new Scanner(System.in);
        int testCases = Integer.parseInt(in.nextLine());
        //String html = "<(.+)>([^<]+)</\\1>";

        while(testCases>0){
            String line = in.nextLine();
            boolean found = false;
            Pattern pattern =  Pattern.compile("<(.+)>([^<]+)</\\1>");
            Matcher match = pattern.matcher(line);
            while (match.find()){
                System.out.println(match.group(2));
                found = true;
            }
            if (!found){
                System.out.println("None");
            }
            //Write your code here
            testCases--;
        }
    }
}
