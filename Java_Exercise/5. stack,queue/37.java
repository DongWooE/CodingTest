import java.util.*;

public class code38 {
    public static void solution(String str){
        Stack<Character> stack = new Stack<>();

        for(char c : str.toCharArray()){
            if(c == ')'){
                while(stack.peek() != '(')  stack.pop();
                stack.pop();
            }
            else    stack.add(c);
        }

        for(char c : stack)
            System.out.print(c);
    }
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        String str = s.next();
        solution(str);
    }
}
