#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, ".UTF8");
	int hours, minutes ,seconds;

	scanf_s("%d", &seconds);

	long oldSeconds = seconds;

	minutes = seconds / 60;
	seconds = seconds % 60;
	hours = minutes / 60;
	minutes = minutes % 60;

	if (hours)
		printf("%d секунд = %d часов %d минут %d секунд", oldSeconds, hours, minutes, seconds);
	else if (minutes)
		printf("%d секунд = %d минут %d секунд", oldSeconds, minutes, seconds);
	else printf("%d секунд = %d секунд", oldSeconds, seconds);
	return 0;
}