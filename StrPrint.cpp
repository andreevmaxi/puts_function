/*!
* @mainpage
* This is function that prints your array of chars until it founds '\0'
*/

/*!
* \file StrPrint.cpp
*/

#include <cstdio>
#include <cassert>
const int Nchars = 1000;

/**
    \brief StrPrint
    \author andreevmaxi
	\version 1.0
	\date september 2019 year
	\copyright korobcom
    \details This is function that prints your array of chars until it founds '\0'
    \return Returns 1 if everything is okey
    \param[in] str your array of chars
*/

bool StrPrint(char* str);

int main()
{
    char String[Nchars] = {};
    int counter = 0;

    String[counter] = getchar();
    while(String[counter] != '\n')
    {
        ++counter;
        String[counter] = getchar();
    }

    StrPrint(String);
    return 0;
}

bool StrPrint(char* str)
{
    assert(str != NULL);

    int i = 0;
    while ( (i < Nchars) && (str[i] != '\0') )
    {
        printf("%c", str[i]);
        ++i;
    }
    return 1;
}
