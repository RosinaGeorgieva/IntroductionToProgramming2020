#include <iostream>
#include <cstring>

// reutrns number^power
int powerOf(int number, int power)
{
    int result = 1;
    while (power)
    {
        result *= number;
        power--;
    }
    return result;
}

// returns number^2
int powerTwo(int number)
{
    return powerOf(number, 2);
}

template <typename T>
void printArr(T *arr, int size)
{
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i])
        {
            std::cout << arr[i] << " ";
        }
    }
    std::cout << std::endl;
}

void printWords(char **words, int size)
{
    for (size_t i = 0; i < size; i++)
    {
        std::cout << words[i] << " ";
    }
    std::cout << std::endl;
}

char *makeEmoji(const char emoj[5])
{
    char *result = new char[strlen(emoj)];
    strcpy(result, emoj);
    return result;
}

bool vegitarian(char *emoji)
{
    return !(strcmp(emoji, "🐔") == 0 || strcmp(emoji, "🐮") == 0);
}

char *cook(char *emoji)
{
    if (strcmp(emoji, "🐔") == 0)
    {
        return makeEmoji("🍗");
    }
    if (strcmp(emoji, "🐮") == 0)
    {
        return makeEmoji("🍔");
    }
    if (strcmp(emoji, "🍠") == 0)
    {
        return makeEmoji("🍟");
    }
    if (strcmp(emoji, "🌽") == 0)
    {
        return makeEmoji("🍿");
    }
    if (strcmp(emoji, "🥚") == 0)
    {
        return makeEmoji("🍳");
    }
    return nullptr;
}

template <typename T>
T *map(T *arr, int size, T (*op)(T))
{
    T *newArr = new T[size];
    for (size_t i = 0; i < size; i++)
    {
        newArr[i] = op(arr[i]);
    }
    return newArr;
}

template <typename T>
T *filter(T *arr, int size, bool (*pred)(T))
{
    T *newArr = new T[size];
    int index = 0;
    for (size_t i = 0; i < size; i++)
    {
        if (pred(arr[i]))
        {
            newArr[index++] = arr[i];
        }
    }
    for (size_t i = index; i < size; i++)
    {
        newArr[i] = nullptr;
    }

    return newArr;
}

template <typename T>
T reduce(T *arr, int size, T (*op)(T, T), T initial)
{
    T result = initial;
    for (size_t i = 0; i < size; ++i)
    {
        result = op(result, arr[i]);
    }

    return result;
}

template <typename T>
void deleteMatrix(T **m, int size)
{
    for (size_t i = 0; i < size; i++)
    {
        if (m[i])
        {
            delete[] m[i];
        }
    }
    delete[] m;
}

namespace CoolCPP
{
    const char emojis[5][5] = {"🐮", "🍠", "🐔", "🌽", "🥚"};
    const int size = sizeof(emojis) / sizeof(emojis[0]);
} // namespace CoolCPP

int sum(int a, int b)
{
    return a + b;
}

char *eat(char *first, char *)
{
    return first;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int *powerTwoMapping = map(arr, size, powerTwo);
    printArr(powerTwoMapping, size);
    std::cout << reduce(arr, size, sum, 0) << std::endl;

    char **emojis;
    size = CoolCPP::size;
    emojis = new char *[size];
    for (size_t i = 0; i < size; i++)
    {
        emojis[i] = makeEmoji(CoolCPP::emojis[i]);
    }

    printArr(emojis, size);
    char **cookMapping = map(emojis, size, cook);
    printArr(cookMapping, size);

    char **filtered = filter(emojis, size, vegitarian);
    printArr(filtered, size);

    char *poop = makeEmoji("💩");
    std::cout << reduce(emojis, size, eat, poop) << std::endl;

    deleteMatrix(emojis, size);
    deleteMatrix(cookMapping, size);
    // shallow copy
    // deleteMatrix(filtered, size);
    delete[] poop;

    return 0;
}