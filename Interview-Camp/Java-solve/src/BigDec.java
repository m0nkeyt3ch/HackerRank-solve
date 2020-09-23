import java.math.BigDecimal;
import java.util.*;

public class BigDec {
    public static void main(String []args){
        //Input
        Scanner sc= new Scanner(System.in);
        int n=sc.nextInt();
        String []s=new String[n+2];
        for(int i=0;i<n;i++){
            s[i]=sc.next();
        }
        sc.close();
        Comparator<String> compareList = new Comparator<String>() {
            @Override
            public int compare(String s1, String s2) {
                BigDecimal dec1 = new BigDecimal(s1);
                BigDecimal dec2 = new BigDecimal(s2);
                return dec2.compareTo(dec1);
            }
        };

        Arrays.sort(s,0,n,compareList);
        //Write your code here

        //Output
        for(int i=0;i<n;i++)
        {
            System.out.println(s[i]);
        }
    }
}
