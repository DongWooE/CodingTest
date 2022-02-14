import java.util.*;

public class code41 {
    public static void solution(String str){
        int answer = 0;
        char last = ' ';
        Stack<Character> stack = new Stack<>();
        for(char c : str.toCharArray()){
            if(c == '(')    stack.push(c);
            else{                   // ')'
                if(last == '('){    // '()'
                    stack.pop();
                    answer += stack.size();
                }
                else{               // '))'
                    stack.pop();
                    answer += 1;
                }
            }
            last = c;
        }
        System.out.println(answer);
    }
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        String str = s.next();
        solution(str);
    }
}
