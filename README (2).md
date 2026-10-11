# Домашнее задание к работе 6

## Условие задачи
 Написать программу, которая переводит время из секунд в целое
значение часов, минут, секунд (если значение часов равно 0, то слово час не
выводится.
---
## 1. Алгоритм и блок схема

### Алгоритм
1. **Начало**
2. Объявить переменные:
   - `seconds` - кол-во секунд
   - `minutes` - кол-во минут
   - `hours` - кол-во часов
   - `oldSeconds` - входное кол-во секунд
3. Вычислим кол-во минут, как частное от целочисленного деления `oldSeconds` на `60`. Запишем остаток от деления в `seconds`
4. Вычислим кол-во часов, как частное от целочисленного деления `minutes` на `60`. Запишем остаток от деления в `minutes`
5. Выведем результат в формате `... часов ... минут ... секунд`. Если hours = 0 `... минут ... секунд`, если hourd = 0 и minutes = 0 `... секунд`.
6. **Конец**

### Блок-схема
![Блок-схема алгоритма](Lab6_schema.png)

 [Ссылка на блок-схему](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&title=lab6.drawio&dark=auto#Uhttps%3A%2F%2Fdrive.google.com%2Fuc%3Fid%3D14DW8TfcOfxX7nZv20SZZd6B2Tx6qvCSh%26export%3Ddownload)

 ## 2. Реализация программы

```c
#include <stdio.h>
int main()
{
	int hours;
	int minutes;
	long seconds;

	scanf("%ld", &seconds);

	long oldSeconds = seconds;

	minutes = seconds / 60;
	seconds = seconds % 60;
	hours = minutes / 60;
	minutes = minutes % 60;

	if (hours)
		printf("%ld seconds = %d hours %d minutes %d seconds", oldSeconds, hours, minutes, seconds);
	else if (minutes)
		printf("%ld seconds = %d minutes %d seconds", oldSeconds, minutes, seconds);
	else printf("%ld seconds = %d seconds", oldSeconds, seconds);
	return 0;
}
```
# 3. Результаты работы программы
61 seconds = 1 minutes 1 seconds
# 4. Информация о разработчике
Авраменко Дмитрий бИПТ-251
