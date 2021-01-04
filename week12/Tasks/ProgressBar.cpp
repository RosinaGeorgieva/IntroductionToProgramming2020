#include <iostream>
using namespace std;
#include <thread>
#include <chrono>
#include <cmath>

#if defined(_WIN32) || defined(WIN32) || defined(__CYGWIN__) || defined(__MINGW32__) || defined(__BORLANDC__)
#define OS_WIN
#else
#define OS_LINUX
#endif

#ifdef OS_WIN
#define CLEAR system("cls")
#else
#define CLEAR system("clear")
#endif

char integerToChar(int num)
{
    char numAsChar;
    numAsChar = (char)(num + '0');

    return numAsChar;
}

void progresBar(int currentPercent, char left, char right, char fill, char empty, bool showPercent, int barSize, char *bar)
{
    bar[0] = left;
    bar[barSize - 1] = right;
    int fillSize = round((float)currentPercent * (float)(barSize - 2) / 100);
    for (int i = 1; i < fillSize + 1; i++)
    {
        bar[i] = fill;
    }
    for (int i = fillSize + 1; i < barSize - 1; i++)
    {
        bar[i] = empty;
    }
    if (showPercent)
    {
        int middle = barSize / 2 - 1;
        bar[middle + 1] = '%';
        while (currentPercent != 0)
        {
            bar[middle] = integerToChar(currentPercent % 10);
            currentPercent /= 10;
            middle--;
        }
    }

    cout << bar << "\n";
}

int main()
{
    float time = 10.4f, fPercentAlreadyCompleted = 0.0f;
    int sizeInCharacters = 60;
    const int MAX_PERCENT = 100;
    //cin >> time; //5.8
    //cin >> fPercentAlreadyCompleted;
    int timeMs = time * 1000.0f;
    int iPercentAlreadyCompleted = fPercentAlreadyCompleted * 100.0f;
    int iLeft = MAX_PERCENT - iPercentAlreadyCompleted;
    float sleepPerFrame = round(timeMs / iLeft);
    char *lProgressBar = new char[sizeInCharacters + 1];
    lProgressBar[sizeInCharacters] = '\0';
    auto start = std::chrono::steady_clock::now();
    for (int i = iPercentAlreadyCompleted; i <= MAX_PERCENT; i++)
    {
        // system independent clear
        CLEAR;
        progresBar(i, '[', ']', '-', '.', true, sizeInCharacters, lProgressBar);
        std::this_thread::sleep_for(std::chrono::milliseconds((int)sleepPerFrame));
    }
    auto end = std::chrono::steady_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::cout << "elapsed time: " << elapsed_seconds.count() << "s\n";
    delete[] lProgressBar;

    return 0;
}
