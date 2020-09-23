import java.util.regex.Matcher;
import java.util.regex.Pattern;
import java.util.Scanner;

public class regexTester {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        String line = in.nextLine();

        String pattern = "(0)(\\d{2,3})?\\d{2,4}\\d{2,4}\\d{2,4}";
        String noProb = "([^0])(\\d{2,3})?\\d{2,4}\\d{2,4}\\d{2,4}";

        StringBuffer sb = new StringBuffer();

        if (line.matches(pattern)){
            Pattern r = Pattern.compile(pattern);
            Matcher match =  r.matcher(line);
            while (match.find()){
                match.appendReplacement(sb, match.group(0).replaceFirst(Pattern.quote(match.group(1)), ""));
//                System.out.println(match.group(0));
//                System.out.println(match.group(1));
                //System.out.println(match.group(2));
            }
            match.appendTail(sb);
            System.out.println(sb.toString());
        } else if (line.matches(noProb)){
            System.out.println(line);
        } else {
            System.out.println("Phone Number Invalid");
        }
    }
}
