import java.util.*;

public class code09 {
    public static void solution(String str){
        int result = 0;
        for(char x : str.toCharArray()){
            if(x >= 48 && x <= 57){
                result = result * 10 + (x-48);
            }
        }
        System.out.print(result);
//        str = str.replaceAll("[^0-9]", "");
//        System.out.print(Integer.parseInt(str));
    }
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String str = scan.next();
        solution(str);
    }
}
