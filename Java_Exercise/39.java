import java.util.*;

public class code40 {
    public static int solution(String expr){
        Stack<Integer> stack = new Stack<>();

        for(char c : expr.toCharArray()){
            if(Character.isDigit(c)) stack.push(c -'0');
            else{
                int n1 = stack.pop();
                int n2 = stack.pop();
                switch (c) {
                    case '+':
                        n2 += n1;
                        break;
                    case '-':
                        n2 -= n1;
                        break;
                    case '*':
                        n2 *= n1;
                        break;
                    case '/':
                        n2 /= n1;
                        break;
                }
                stack.push(n2);
            }
        }

        return stack.peek();
    }
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        String expr = s.next();
        System.out.println(solution(expr));
    }
}
