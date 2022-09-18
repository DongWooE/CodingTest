import java.util.*;
class Solution {
    boolean solution(String s) {
        if(s.charAt(0) == ')' || s.charAt(s.length()-1) == '(') return false;

        Stack<Character> stack = new Stack<Character>();
        for(char c : s.toCharArray()){
            if(c == '(') stack.push(c);
            else{
                if(stack.isEmpty()) return false;
                stack.pop();
            }
        }
        if(!stack.isEmpty()) return false;
        return true;
    }
}