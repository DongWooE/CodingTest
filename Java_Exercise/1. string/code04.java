package string;

import java.util.*;

public class code04 {
    public void solution(ArrayList<String> s) {
        for(String x : s){
            StringBuilder sb = new StringBuilder(x);
            System.out.println(sb.reverse().toString());
        }
    }
    public static void main(String[] args) {
        code04 main = new code04();
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        ArrayList<String> l = new ArrayList<String>();
        while(t > 0){
            String s = scan.next();
            l.add(s);
            t--;
        }
        main.solution(l);
    }
}
//public class Main {
//    public void solution(String s) {
//        int t = s.length();
//        while(t > 0){
//            System.out.print(s.charAt(t-1));
//            t--;
//        }
//        System.out.println();
//    }
//    public static void main(String[] args) {
//        Main main = new Main();
//        Scanner scan = new Scanner(System.in);
//        int t = scan.nextInt();
//        while(t > 0){
//            String s = scan.next();
//            main.solution(s);
//            t--;
//        }
//    }
//}
