package string;

import java.util.*;

public class code08 {
    public static void solution(String str){
        // regex 사용 풀이
        String answer = "NO";
        str = str.toUpperCase().replaceAll("[^A-Z]", "");
        StringBuilder t = new StringBuilder(str);
        if(str.equals(t.reverse().toString())) answer = "YES";
        System.out.print(answer);

//        StringBuilder s = new StringBuilder();
//        for(char x : str.toCharArray()){
//            if(Character.isAlphabetic(x)) s.append(Character.toUpperCase(x));
//        }
//        String temp = s.toString();
//        if(temp.equals(s.reverse().toString())) System.out.print("YES");
//        else System.out.print("NO");
    }
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String str = scan.nextLine();
        solution(str);
    }
}
