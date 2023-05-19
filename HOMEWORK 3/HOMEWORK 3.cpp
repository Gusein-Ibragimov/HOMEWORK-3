#include <iostream>
using namespace std;
#include <cmath>

int main() {
    double distance, speed;
    cout << "Write the distance in km: ";
    cin >> distance;
    cout << "Write the speed in m/s: ";
    cin >> speed;

    double distance_meters = distance * 1000;

    double time_seconds = distance_meters / speed;

    int hours = static_cast<int>(time_seconds / 3600);
    int minutes = static_cast<int>((time_seconds - hours * 3600) / 60);
    int seconds = static_cast<int>(time_seconds - hours * 3600 - minutes * 60);

    cout << "Time of the way: " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds." << '\n';

    double number1, number2;
    cout << "Write first fractional number: ";
    cin >> number1;
    cout << "Write second fractional number: ";
    cin >> number2;

    int int1 = static_cast<int>(number1);
    int int2 = static_cast<int>(number2);

    double fract1 = abs(number1 - int1);
    double fract2 = abs(number2 - int2);

    int sum_integer = int1 + int2;

    double sum_fract = fract1 + fract2;

    cout << "Sum of integers: " << sum_integer << '\n';
    cout << "Sum of fractionals: " << sum_fract << '\n';

    double amount;
    cout << "Write the sum in uah: ";
    cin >> amount;

    int uah = static_cast<int>(amount);

    int kop = static_cast<int>(round((amount - uah) * 100));

    cout << "Uah: " << uah << '\n';
    cout << "Kopeek: " << kop << '\n';

    int totalSec;
    cout << "Write the time in seconds: ";
    cin >> totalSec;

    int days = totalSec / (24 * 3600);
    int remainingSeconds = totalSec % (24 * 3600);

    int hours1 = remainingSeconds / 3600;
    remainingSeconds %= 3600;

    int minutes1 = remainingSeconds / 60;
    int seconds1 = remainingSeconds % 60;

    cout << "Time: " << days << " days, " << hours1 << " hours, " << minutes1 << " minutes, " << seconds1 << " seconds." << '\n';

    double distance1;
    int time;

    cout << "Write the distance to airport (in km): ";
    cin >> distance1;

    cout << "Write the time, when you need to be there (in minutes): ";
    cin >> time;

    double timeHours = time / 60.0;

    double speed1 = distance1 / timeHours;

    cout << "You need to go with: " << speed1 << " km/h" << '\n';

    int startHours, startMinutes, startSeconds;
    int endHours, endMinutes, endSeconds;
    double minuteRate = 0.15;

    cout << "Write the time of speech start (hours minutes seconds): ";
    cin >> startHours >> startMinutes >> startSeconds;

    cout << "Write the time of speech finish (hours minutes seconds): ";
    cin >> endHours >> endMinutes >> endSeconds;

    int startTimeInSeconds = startHours * 3600 + startMinutes * 60 + startSeconds; 
    int endTimeInSeconds = endHours * 3600 + endMinutes * 60 + endSeconds;

    int durationInSeconds = endTimeInSeconds - startTimeInSeconds;

    double cost = (durationInSeconds / 60.0) * minuteRate;

    cout << "Price of the speech is: " << cost << " uah" << '\n';

    int secondsPassed; 
    int workDayHours = 8;

    cout << "How many seconds have already passed: ";
    cin >> secondsPassed;

    int remainingSeconds1 = workDayHours * 3600 - secondsPassed; 

    int remainingHours1 = remainingSeconds1 / 3600;

    cout << "You need to work: " << remainingHours1 << " hours more." << '\n'; 

    double laptopPrice; 
    int quantity; 
    double discount; 

    cout << "Write the price of 1 laptot: ";
    cin >> laptopPrice;

    cout << "Write the quantity of laptops: ";
    cin >> quantity;

    cout << "Write the % of discount: ";
    cin >> discount;

    double totalAmount = laptopPrice * quantity * (1 - discount / 100);

    cout << "Total amount: " << totalAmount << " uah" << '\n';

    return 0;
}
