package string;

import java.util.*;

// indexOf와 substring을 활용한 토큰 분리
public class code03{
    public static void solution(String str) {
        String result = "";
        int cnt = 0, pos = 0;
        while ((pos = str.indexOf(" ")) != -1) {
            String t = str.substring(0, pos);
            int len = t.length();
            if (len > cnt) {
                cnt = len;
                result = t;
            }
            str = str.substring(pos + 1);
        }
        if(str.length() > cnt) result = str;
        System.out.print(result);
    }
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine();
        solution(s);
    }
}

//public class code03 {
//    public static void solution(String str){
//        String[] s = str.split(" ");
//        int cnt = 0;
//        String result = "";
//        for(String t : s){
//            int len = t.length();
//            if(cnt < len) {
//                cnt = len;
//                result = t;
//            }
//        }
//        System.out.print(result);
//    }
//    public static void main(String[] args) {
//        Scanner scan = new Scanner(System.in);
//        String s = scan.nextLine();
//        solution(s);
//    }
//}

