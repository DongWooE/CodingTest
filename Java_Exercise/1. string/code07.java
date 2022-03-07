package string;

import java.util.*;


// 다른 모범 답안들
public class code07{
    public static void solution(String str){

        // 풀이1 : 한번 탐색을 통한 비교
        //int len = str.length();
        //String answer = "YES";
        //str = str.toLowerCase();
        //for(int i =0; i < len/2; i++){
        //    if(str.charAt(i) != str.charAt(len-i-1)){
        //        answer = "NO";
        //        break;
        //    }
        //}
        //System.out.print(answer);

        // 풀이 2 : StringBuilder의 reverse를 통한 비교
        String answer = "NO";
        StringBuilder t = new StringBuilder(str).reverse();
        if(str.equalsIgnoreCase(t.toString())) answer = "YES";
        System.out.print(answer);

    }
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String str = scan.next();
        solution(str);
    }
}

//public class code07 {
//    public static void solution(String s){
//        String t1 = "", t2 = "", str = "";
//        StringBuilder t;
//        for(char x : s.toCharArray()){
//            str += Character.toLowerCase(x);
//        }
//
//        if(str.length()%2 == 0){    // 짝수이면
//            t1 = str.substring(0, str.length()/2);
//            t2 = str.substring(str.length()/2);
//            t = new StringBuilder(t2).reverse();
//        }
//        else{
//            t1 = str.substring(0, str.length()/2);
//            t2 = str.substring(str.length()/2+1);
//            t = new StringBuilder(t2).reverse();
//        }
//        if(t1.equals(t.toString())) System.out.print("YES");
//        else System.out.print("NO");
//    }
//    public static void main(String[] args) {
//        Scanner scan = new Scanner(System.in);
//        String str = scan.next();
//        solution(str);
//    }
//}
