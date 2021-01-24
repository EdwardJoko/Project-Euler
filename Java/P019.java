// Project Euler
// Problem 19: How many Sundays fell on the first of the month
//             during the twentieth century (1 Jan 1901 to 31 Dec 2000)?

public class P019 {
    public static void main(String[] args) {
        System.out.println(compute());
    }

    public static String compute() {
        // the length of each month
        int[] month_length = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        String[] days = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

        int sundays = 0;
        int day_index = 1;  // because January 1st is Tuesday
        for (int year = 1901; year <= 2000; year++) {
            for (int j = 0; j < 12; j++) {
                // in case of leap year and february
                if ((year % 4 == 0) && (j == 1) && (year % 100 != 0 || year % 400 == 0))
                    day_index += (month_length[j] + 1) % 7;
                else
                    day_index += month_length[j] % 7;

                day_index = day_index >= 7 ? day_index % 7 : day_index;

                if (days[day_index] == "Sun") sundays += 1;
            }
        }
        return Integer.toString(sundays);
    }
}
