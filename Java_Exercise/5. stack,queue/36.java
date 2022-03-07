import java.util.*;

public class code37 {

    public static String solution(String str){
        Stack<Character> bracket = new Stack<>();

        for(char c : str.toCharArray()){
            if(c == '(') bracket.add(c);
            else{
                if(bracket.empty()) return "NO";
                else{
                    if(bracket.peek() == '(') bracket.pop();
                    else return "NO";
                }
            }
        }
        if(bracket.empty()) return "YES";
        else return "NO";
    }
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        String str = s.next();
        System.out.println(solution(str));
    }
}
