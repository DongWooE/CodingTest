import java.util.*;

public class code02 {
    public static void solution(String s){
        String result = "";
        for(char c : s.toCharArray()){
            if(Character.isLowerCase(c)) result += Character.toUpperCase(c);
            else result += Character.toLowerCase(c);
        }
        System.out.println(result);
    }
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.next();
        solution(s);
    }
}
