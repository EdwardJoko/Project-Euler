// Project Euler
// Problem 6: The difference between the sum of the squares of the
//            first one hundred natural limitbers and the square of
//            the sum

public class P006 {
  public static void main(String[] args) {
      int limit = 100;

      System.out.println(compute(limit));
  }

  public static String compute(int limit) {
      int sum_of_squares = (limit * (limit+1) * (2*limit+1)) / 6;
      int square_of_sum  = ((limit * (limit+1)) / 2) * ((limit * (limit+1)) / 2);

      return Integer.toString(square_of_sum - sum_of_squares);
  }
}
