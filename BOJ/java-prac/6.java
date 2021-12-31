import java.util.*;

public class Main{
    public static void solution(String str){
        HashSet<Character> hs = new HashSet<Character>();
        String result = "";
        for(char x : str.toCharArray()){
            if(hs.contains(Character.valueOf(x))) continue;
            else{
                result += x;
                hs.add(Character.valueOf(x));
            }
        }
        System.out.print(result);
    }
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.next();
        solution(s);
    }
}