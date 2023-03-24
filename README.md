# Labka2.1
Approximate function calculation(version 1)
Версія 1
Функцію f(x), визначену на інтервалі (a; b), задано аналітичною формулою та нескінченною сумою (див. варіанти 1–33 нижче). Програма має отримувати від користувача дійсні значення аргументу x із інтервалу й у відповідь виводити:
– значення f(x), обчислене за формулою,
– значення f(x), обчислене за розкладом у суму степенів x,
– різницю між цими значеннями,
– кількість доданків у обчисленій скінченній сумі.
Значення x задає користувач за допомогою клавіатури. Програма має ігнорувати значення за межами інтервалу (a; b), повідомляти про недопустимість і запрошувати до введення, поки не отримає допустиме значення.
Запрошення до кожного введення повинно містити межі інтервалу (a; b), якому має належати аргумент.
У відповідь на допустиме значення аргументу треба вивести два рядки. Перший рядок – це заголовок з назвами величин. Другий – це числові значення величин, які необхідно розташувати під відповідними назвами та вирівняти з ними за правим краєм. У варіантах 1-33 заголовок містить назви x, f_lib(x), f_sum(x), difference, N_adds. Про варіанти 34–51 див. нижче.
Робота закінчується, коли користувач набере символи, які не зображують дійсне число, і натисне на Enter. Перед закінченням виводиться повідомлення <<<END OF WORK>>>.
Вимоги до виконання
1. У супроводі до роботи записати розклад у суму степенів і систему рекурентних співвідношень, які виражають послідовні значення сум і доданків (можливо, їх чисельників, знаменників тощо). Система співвідношень має бути такою, щоб у програмі не було зайвих повторних обчислень тих самих величин. Якщо в співвідношеннях є дроби, чисельники й знаменники яких мають спільні множники, то їх необхідно скоротити.
2. На початку програми записати прототипи всіх функцій, окрім головної, далі головну функцію, далі – решту функцій. Функція aboutA (без параметрів) виводить англійською мовою в першому рядку назву роботи, у другому номер групи, прізвище та ім’я автора програми через пробіл.
Функція getArg має отримати допустимий аргумент x та повертає ознаку успішності отримання аргументу. Отримання неуспішне, якщо користувач набрав символи, , які не зображують дійсне число, і натисне на Enter.
Функція calcLib обчислює f(x) за аналітичним виразом, використовуючи бібліотечні математичні функції.
Функція calcSum обчислює f(x) за рекурентними співвідношеннями.
Функція putHeader виводить рядок із заголовком.
Функція putResult виводить рядок із числами, які є значеннями аргументів у виклику.
3. Обчислити f(x) за рекурентними співвідношеннями як скінченну суму, утворену початковими доданками, модулі яких не менш ніж 10–8. Функція calcSum повертає суму, а кількість доданків присвоюється її додатковому параметру-посиланню. У цій функції заборонені виклики бібліотечних математичних функцій, окрім abs().
Варіанти 1-33: аналітична формула та нескінченна сума функції f(x), інтервал (a, b)
