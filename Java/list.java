import java.util.*;

class List {
    public static void main(String[] args) {
        ArrayList<Integer> numbers = new ArrayList<>();
        numbers.add(30);
        numbers.add(50);
        numbers.add(60);
        numbers.add(40);
        numbers.add(10);
        numbers.add(20);
        numbers.sort(Comparator.naturalOrder());
        System.out.println(numbers.toString());
    }
}
