import java.util.Arrays;
import java.util.Scanner;

public class anagram {
    static boolean isAnagram(String a, String b) {
        // Complete the function
        String str1 = a.replaceAll("//s", "").toLowerCase();
        String str2 = b.replaceAll("//s", "").toLowerCase();
//        System.out.println(str1);
//        System.out.println(str2);
        if (str1.length() != str2.length()) return false;

        int[] counter = new int[26];
        for (int i = 0; i < str1.length(); i++) {
            char current = str1.charAt(i);
            int index = current - 'a';
            counter[index]++;
        }

        for (int i = 0; i < str2.length(); i++) {
            char current = str2.charAt(i);
            int index = current - 'a';
            counter[index]--;
        }

        for (int i = 0; i < 26; i++){
            if (counter[i] != 0){
                return false;
            }
        }

        return true;
        /*boolean check = false;
        if (str1.length() != str2.length()){
            return check;
        } else {
            char[] s1 = str1.toCharArray();
            char[] s2 = str2.toCharArray();
            Arrays.sort(s1);
            Arrays.sort(s2);
            check = Arrays.equals(s1,s2);
            return check;
        }*/

    }

    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);
        String a = scan.next();
        String b = scan.next();
        scan.close();
        boolean ret = isAnagram(a, b);
        System.out.println( (ret) ? "Anagrams" : "Not Anagrams" );
    }
}
