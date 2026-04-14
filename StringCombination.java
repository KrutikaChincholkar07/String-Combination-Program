import java.util.Scanner;

public class StringCombination {

    static void combination(String str, String result, int index) {

        if(index == str.length()) {
            if(!result.equals(""))
                System.out.println(result);
            return;
        }

        // Include character
        combination(str, result + str.charAt(index), index + 1);

        // Exclude character
        combination(str, result, index + 1);
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a string: ");
        String str = sc.nextLine();

        System.out.println("String combinations are:");

        combination(str, "", 0);
    }
}
