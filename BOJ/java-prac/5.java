import java.util.*;

// lt와 rt를 활용한 문자열에서 한번에 탐색하는 방법
public class code05{
    public static void solution(String str){
        char [] list = str.toCharArray();
        int lt = 0, rt = str.length()-1;
        while(lt < rt){
            if(!Character.isAlphabetic(list[lt])) lt++;
            else if(!Character.isAlphabetic(list[rt])) rt--;
            else{   // 둘 다 알파벳일 경우에는 교환한다
                char t = list[lt];
                list[lt] = list[rt];
                list[rt] = t;
                lt++;
                rt--;
            }
        }
        System.out.print(String.valueOf(list));
    }
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String str = scan.next();
        solution(str);
    }
}


//public class code05 {
//    public static void solution(String str){
//        char [] list = str.toCharArray();
//        StringBuilder temp = new StringBuilder();
//        for(int i =0; i < str.length(); i++){
//            if((list[i] >= 'a' && list[i] <= 'z') || (list[i] >= 'A' && list[i] <= 'Z')) {
//                temp.append(list[i]);
//                list[i] = '0';
//            }
//        }
//        int j = 0;
//        for(int i = str.length()-1; i >= 0; i--){
//            if(list[i] == '0'){
//                list[i] = temp.charAt(j);
//                j++;
//            }
//        }
//
//        System.out.print(String.valueOf(list));
//    }
//
//    public static void main(String[] args) {
//        Scanner scan = new Scanner(System.in);
//        String str = scan.next();
//        solution(str);
//    }
//}
