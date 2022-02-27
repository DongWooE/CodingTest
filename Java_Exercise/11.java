import java.util.*;

public class code11 {
    // i, i+1을 비교하면서 초기에 str + " " 하는 풀이
    public static void solution(String str){
        str += " ";
        int cnt = 1;
        StringBuilder result = new StringBuilder();
        for(int i =0; i < str.length()-1; i++){
            if(str.charAt(i) == str.charAt(i+1)) cnt++;
            else{
                result.append(str.charAt(i));
                if(cnt > 1) result.append(cnt);
                cnt = 1;
            }
        }
        System.out.print(result.toString());
        //        int cnt = 1;
//        char last = str.charAt(0);
//        StringBuilder result = new StringBuilder();
//        for(int i = 1; i < str.length(); i++){
//            if(last == str.charAt(i)) cnt++;
//            else{
//                result.append(last);
//                if(cnt > 1)     result.append(cnt);
//                last = str.charAt(i);
//                cnt = 1;
//            }
//        }
//        result.append(last);
//        if(cnt > 1) result.append(cnt);
//        System.out.print(result);
    }
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String str = scan.next();
        solution(str);
    }
}
