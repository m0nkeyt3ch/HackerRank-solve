import java.util.*;
import java.lang.*;
import java.io.*;
import java.util.regex.*;
/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
    public static void main (String[] args) throws java.lang.Exception
    {
        String text = "plan plans lander planitia";
        String pattern = "\\w*(lan)\\w+";
        Pattern r = Pattern.compile(pattern);
        Matcher m = r.matcher(text);
        StringBuffer sb = new StringBuffer();
        while (m.find()) {
            System.out.println("Group 0");
            System.out.println(m.group(0));
            System.out.println("Group 1");
            System.out.println(m.group(1));
            m.appendReplacement(sb, m.group(0).replaceFirst(Pattern.quote(m.group(1)), ""));
        }
        m.appendTail(sb); // append the rest of the contents
        System.out.println(sb.toString());
    }
}