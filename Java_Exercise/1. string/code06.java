package string;

import java.util.*;

// charAt과 indexOf를 사용
public class code06 {
    public static void solution(String str){
        String t = "";
        for(int i =0;i < str.length(); i++){
            if(str.indexOf(str.charAt(i)) == i){    // 인덱스 번호와 해당 문자가 처음에 나온 인덱스 번호가 같다면 중복 x이다
                t += str.charAt(i);
            }
        }
        System.out.print(t);
    }
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String str = scan.next();
        solution(str);
    }
}

// HashSet을 사용
//public class Main{
//    public static void solution(String str){
//        HashSet<Character> hs = new HashSet<Character>();
//        String result = "";
//        for(char x : str.toCharArray()){
//            if(hs.contains(Character.valueOf(x))) continue;
//            else{
//                result += x;
//                hs.add(Character.valueOf(x));
//            }
//        }
//        System.out.print(result);
//    }
//    public static void main(String[] args) {
//        Scanner scan = new Scanner(System.in);
//        String s = scan.next();
//        solution(s);
//    }
//}