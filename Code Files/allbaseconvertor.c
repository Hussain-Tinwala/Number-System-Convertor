/*
                        Number System Convertor
Convert decimal to binary,hexadecimal to octal, or any other combination, this system 
provides a user-friendly interface to meet your conversion needs.Convert between decimal, 
binary, octal, and hexadecimal number systems effortlessly, Convert from one base to 
another and vice versa and instantly see the results.

Project By - Tinwala Hussain S.

*/

#include <stdio.h>
#include <windows.h>

void clearInputBuffer();
void changeTextColor(int textColor);
void clrscr();
int bintodec(int binary);
int bintohexa(int binary);
int bintooctal(int binary);
int dectohexa(int decimal);
int dectooctal(int decimal);
int dectobin(int decimal);
int octaltobin(int octal);
int octaltohexa(int octal);
int octaltodec(int octal);
int hexatobin(int hexa);
int hexatooctal(int hexa);
int hexatodec(int hexa);

void welcomescreen()
{
    changeTextColor(4);
    printf("\n\n\n\n\n");
    printf("\n\n\n\t    _  _               _                ___            _                  ___                            _             ");
    printf("\n\t   | \\| | _  _  _ __  | |__  ___  _ _  / __| _  _  ___| |_  ___  _ __    / __| ___  _ _  __ __ ___  _ _ | |_  ___  _ _ ");
    printf("\n\t   | .` || || || '  \\ | '_ \\/ -_)| '_| \\__ \\| || |(_-<|  _|/ -_)| '  \\  | (__ / _ \\| ' \\ \\ V // -_)| '_||  _|/ _ \\| '_|");
    printf("\n\t   |_|\\_| \\_,_||_|_|_||_.__/\\___||_|   |___/ \\_, |/__/ \\__|\\___||_|_|_|  \\___|\\___/|_||_| \\_/ \\___||_|   \\__|\\___/|_|  ");
    printf("\n\t                                             |__/                                                                                               ");
    printf("\n\n\t\t\t\t\t\t");
    changeTextColor(0);
    for (int i = 0; i < 10; i++)
    {
        printf("%c ", 220);
        Sleep(200);
    }
    clrscr();
}
void exitscreen()
{
    clrscr();
    changeTextColor(0);
    // printf("\n\n\n\n\n\n\t\t\t\t\t-------------------------------------------");
    changeTextColor(4);
    printf("\n\n\n\n\t\t\t\t\tThanks For using the Number System Convertor");
    changeTextColor(0);
    printf("\n\t\t\t\t\t-------------------------------------------");
    printf("\n\n\t\t\t\t\t\tDeveloped By : Hussain Tinwala");
    changeTextColor(4);
    printf("\n\n\t\t\t\t\tFollow for more on -");
    changeTextColor(0);
    printf("\n\t\t\t\t\t-------------------------------------------");
    changeTextColor(4);
    printf("\n\n\t\t\t\t\tLinkedin: ");
    changeTextColor(0);
    printf("https://www.linkedin.com/in/hussaintin");
    changeTextColor(4);
    printf("\n\t\t\t\t\tGithub: ");
    changeTextColor(0);
    printf("https://github.com/Hussain-Tinwala");
    printf("\n\t\t\t\t\t-------------------------------------------");
    printf("\n\n\t\t\t\t\tPlease wait a second....");
    printf("\n\n\t\t\t\t\t\t\t");
    for (int i = 0; i < 5; i++)
    {
        printf("%c ", 248);
        Sleep(500);
    }
}

int main()
{
    clrscr();
    system("color F9");
    int choice, choicesuccess = 1;
    welcomescreen();
    changeTextColor(0);

    printf("\n\n\n\t _  _               _                ___            _                  ___                            _             ");
    printf("\n\t| \\| | _  _  _ __  | |__  ___  _ _  / __| _  _  ___| |_  ___  _ __    / __| ___  _ _  __ __ ___  _ _ | |_  ___  _ _ ");
    printf("\n\t| .` || || || '  \\ | '_ \\/ -_)| '_| \\__ \\| || |(_-<|  _|/ -_)| '  \\  | (__ / _ \\| ' \\ \\ V // -_)| '_||  _|/ _ \\| '_|");
    printf("\n\t|_|\\_| \\_,_||_|_|_||_.__/\\___||_|   |___/ \\_, |/__/ \\__|\\___||_|_|_|  \\___|\\___/|_||_| \\_/ \\___||_|   \\__|\\___/|_|  ");
    printf("\n\t                                          |__/                                                                                               ");
    char info[] = "The Number System Conversion System is a tool which is designed to facilitate seamless conversion between different bases.Whether you need to convert decimal to binary, hexadecimal to octal, or any other combination, this system provides a user-           friendly interface to meet your conversion needs.Convert between decimal, binary, octal, and hexadecimal number systems effortlessly.Convert from one base to another and vice versa.Instantly see the results as you input the numbers, making it easy to verify correctness if necessary.";
    printf("\n\n\n -> ");
    for (int i = 0; i < 533; i++)
    {
        changeTextColor(4);
        printf("%c", info[i]);
        Sleep(2);

        if (info[i] == '.' && i < 532)
        {
            changeTextColor(0);
            printf("\n\n -> ");
        }
    }
    changeTextColor(0);
    printf("\n\n\n\n\n\n  Press any key to continue...");
    getchar();
    clrscr();
    do
    {
        changeTextColor(0);
        printf("\n\n\n\n\t\t\t\t\t--------------------------------------------");
        printf("\n\t\t\t\t\t|\t  Number System Conversion         |");
        printf("\n\t\t\t\t\t--------------------------------------------");
        changeTextColor(4);
        printf("\n\t\t\t\t\t|\t1.Binary Conversion\t\t   |\n");
        printf("\t\t\t\t\t|\t2.Decimal Conversion\t\t   |\n");
        printf("\t\t\t\t\t|\t3.Octal Conversion\t\t   |\n");
        printf("\t\t\t\t\t|\t4.Hexa-Decimal Conversion\t   |\n");
        printf("\t\t\t\t\t|\t5.Exit\t\t\t\t   |");
        changeTextColor(0);
        printf("\n\t\t\t\t\t--------------------------------------------");
        printf("\n\t\t\t\t\t\tEnter your choice: ");

        if (scanf("%d", &choice) != 1)
        {
            changeTextColor(1);
            printf("\n\n\n\t\t\t\t\t\tEnter Valid Choice");
            getchar();
            clearInputBuffer();
            clrscr();
            continue;
        }
        clearInputBuffer();
        changeTextColor(0);
        switch (choice)
        {
        case 1:
        {
            int choice, i, binary = 0, rem, oldbin, isbinary = 1;
            changeTextColor(6);
            printf("\n\t\t\t\t\t\tEnter Binary number: ");
            if (scanf("%d", &binary) != 1)
            {
                changeTextColor(1);
                printf("\n\t\t\t\t    Invalid Binary number(Binary Contans only 0's & 1's)!");
                clearInputBuffer();
                break;
            }
            oldbin = binary;
            if (binary < 0)
            {
                changeTextColor(1);
                printf("\n\t\t\t\t    Invalid Binary number(Binary Contans only 0's & 1's)!");
                clearInputBuffer();
                break;
            }
            while (oldbin != 0)
            {
                rem = oldbin % 10;
                if (rem != 0 && rem != 1)
                {
                    changeTextColor(1);
                    printf("\n\t\t\t\t    Invalid Binary number(Binary Contans only 0's & 1's)!");
                    isbinary = 0;
                    clearInputBuffer();
                    break;
                }
                oldbin /= 10;
            }
        start:
            if (isbinary)
            {
                clrscr();
                changeTextColor(0);
                printf("\n\n\n\n\t\t\t\t\t--------------------------------------------");
                printf("\n\t\t\t\t\t| \t>>>>> Binary Conversion <<<<<      |");
                printf("\n\t\t\t\t\t--------------------------------------------");
                changeTextColor(6);
                printf("\n\t\t\t\t\t\t1.Binary to Decimal\n");
                printf("\t\t\t\t\t\t2.Binary to Octal\n");
                printf("\t\t\t\t\t\t3.Binary to Hexa-Decimal\n");
                printf("\t\t\t\t\t\t4.Exit");
                changeTextColor(0);
                printf("\n\n\t\t\t\t\t\tEnter your choice: ");
                scanf("%d", &choice);

                switch (choice)
                {
                case 1:
                {
                    i = bintodec(binary);
                    printf("\n\t\t\t\t\t\t     Decimal: %d", i);
                    getchar();

                    break;
                }
                case 2:
                {
                    i = bintooctal(binary);
                    printf("\n\t\t\t\t\t\t     Octal: %d", i);
                    getchar();

                    break;
                }
                case 3:
                {
                    i = bintohexa(binary);
                    if (i > 0)
                    {
                        printf("\n\t\t\t\t\t\t  Hexa-Decimal: %d", i);
                        getchar();
                    }

                    break;
                }
                case 4:
                {
                    exitscreen();
                    clrscr();
                    return 0;
                    break;
                }
                default:
                {
                    changeTextColor(1);
                    printf("\n   \t\t\t\t\t\tEnter Valid Choice!");
                    getchar();
                    clearInputBuffer();
                    goto start;
                    break;
                }
                }
            }
            break;
        }

        case 2:
        {
            int decimal, choiceindec, binary = 0, rem, i = 1;
            changeTextColor(6);
            printf("\n\t\t\t\t\t\tEnter Decimal number: ");
            if (scanf("%d", &decimal) != 1)
            {
                changeTextColor(1);
                printf("\n\t\t\t\t\t\t  Invalid Decimal number!");
                clearInputBuffer();
                break;
            }
            if (decimal < 0)
            {

                printf("\n\t\t\t\t\t\t  Invalid Decimal number!");
                clearInputBuffer();
                break;
            }
        start1:
            clrscr();
            changeTextColor(0);
            printf("\n\n\n\n\t\t\t\t\t--------------------------------------------");
            printf("\n\t\t\t\t\t| \t>>>>> Decimal Conversion <<<<<      |");
            printf("\n\t\t\t\t\t--------------------------------------------");
            changeTextColor(6);
            printf("\n\t\t\t\t\t\t1.Decimal to Binary\n");
            printf("\t\t\t\t\t\t2.Decimal to Octal\n");
            printf("\t\t\t\t\t\t3.Decimal to Hexa-Decimal\n");
            printf("\t\t\t\t\t\t4.Exit");
            changeTextColor(0);
            printf("\n\n\t\t\t\t\t\tEnter your choice: ");
            scanf("%d", &choiceindec);

            switch (choiceindec)
            {
            case 1:
            {
                i = dectobin(decimal);

                printf("\n\t\t\t\t\t\t     Binary: %d", i);
                getchar();

                break;
            }
            case 2:
            {
                i = dectooctal(decimal);

                printf("\n\t\t\t\t\t\t     Octal: %d", i);
                getchar();

                break;
            }
            case 3:
            {

                i = dectohexa(decimal);
                if (i > 0)
                {
                    printf("\n\t\t\t\t\t\t   Hexa-Decimal: %d", i);
                    getchar();
                }
                break;
            }
            case 4:
            {
                exitscreen();
                clrscr();
                return 0;
                break;
            }
            default:
            {
                changeTextColor(1);
                printf("\n   \t\t\t\t\t\tEnter Valid Choice!");
                getchar();
                clearInputBuffer();
                goto start1;
                break;
            }
            }
            break;
        }

        case 3:
        {
            int choiceinoctal, i, octal = 0, rem, oldoctal, isoctal = 1;
            changeTextColor(6);
            printf("\n\t\t\t\t\t\tEnter Octal number: ");
            if (scanf("%d", &octal) != 1)
            {
                changeTextColor(1);
                printf("\n\t\t\t\t\t\t  Invalid Octal number!");
                clearInputBuffer();
                break;
            }
            oldoctal = octal;
            if (oldoctal < 0)
            {
                changeTextColor(1);
                printf("\n\t\t\t\t\t\t  Invalid Octal number!");
                clearInputBuffer();
                break;
            }
            while (oldoctal != 0)
            {
                rem = oldoctal % 10;
                if (rem >= 8)
                {
                    changeTextColor(1);
                    printf("\n\t\t\t\t\t\t  Invalid Octal number!");
                    isoctal = 0;
                    clearInputBuffer();
                    break;
                }
                oldoctal /= 10;
            }
        start2:
            if (isoctal)
            {
                clrscr();
                changeTextColor(0);
                printf("\n\n\n\n\t\t\t\t\t--------------------------------------------");
                printf("\n\t\t\t\t\t| \t>>>>> Octal Conversion <<<<<      |");
                printf("\n\t\t\t\t\t--------------------------------------------");
                changeTextColor(6);
                printf("\n\t\t\t\t\t\t1.Octal to Binary\n");
                printf("\t\t\t\t\t\t2.Octal to Decimal\n");
                printf("\t\t\t\t\t\t3.Octal to Hexa-Decimal\n");
                printf("\t\t\t\t\t\t4.Exit");
                changeTextColor(0);
                printf("\n\n\t\t\t\t\t\tEnter your choice: ");
                scanf("%d", &choiceinoctal);

                switch (choiceinoctal)
                {
                case 1:
                {
                    i = octaltobin(octal);

                    printf("\n\t\t\t\t\t\t     Binary: %d", i);
                    getchar();

                    break;
                }
                case 2:
                {
                    i = octaltodec(octal);

                    printf("\n\t\t\t\t\t\t     Decimal: %d", i);
                    getchar();

                    break;
                }
                case 3:
                {

                    i = octaltohexa(octal);
                    if (i > 0)
                    {
                        printf("\n\t\t\t\t\t\t  Hexa-Decimal: %d", i);
                        getchar();
                    }
                    break;
                }
                case 4:
                {
                    exitscreen();
                    clrscr();
                    return 0;
                    break;
                }
                default:
                {
                    changeTextColor(1);
                    printf("\n   \t\t\t\t\t\tEnter Valid Choice!");
                    getchar();
                    clearInputBuffer();
                    goto start2;
                    break;
                }
                }
            }
            break;
        }

        case 4:
        {
            int choiceofhexa, i, hexa = 0;
            changeTextColor(6);
            printf("\n\t\t\t\t\t    Enter Hexa-Decimal number: ");
            if (scanf("%x", &hexa) != 1)
            {
                changeTextColor(1);
                printf("\n\t\t\t\t\t\t  Invalid Hexa-Decimal number!");
                clearInputBuffer();
                break;
            }
            if (hexa < 0)
            {
                changeTextColor(1);
                printf("\n\t\t\t\t\t\t  Invalid Hexa-Decimal number!");
                clearInputBuffer();
                break;
            }

        start3:
            clrscr();
            changeTextColor(0);
            printf("\n\n\n\n\t\t\t\t\t--------------------------------------------");
            printf("\n\t\t\t\t\t|   >>>>> Hexa-Decimal Conversion <<<<<    |");
            printf("\n\t\t\t\t\t--------------------------------------------");
            changeTextColor(6);
            printf("\n\t\t\t\t\t\t1.Hexa-Decimal to Binary\n");
            printf("\t\t\t\t\t\t2.Hexa-Decimal to Decimal\n");
            printf("\t\t\t\t\t\t3.Hexa-Decimal to Octal\n");
            printf("\t\t\t\t\t\t4.Exit");
            changeTextColor(0);
            printf("\n\n\t\t\t\t\t\tEnter your choice: ");
            scanf("%d", &choiceofhexa);

            switch (choiceofhexa)
            {
            case 1:
            {
                i = hexatobin(hexa);

                printf("\n\t\t\t\t\t\t     Binary: %d", i);
                getchar();

                break;
            }
            case 2:
            {
                i = hexatodec(hexa);

                printf("\n\t\t\t\t\t\t     Decimal: %d", i);
                getchar();

                break;
            }
            case 3:
            {

                i = hexatooctal(hexa);

                printf("\n\t\t\t\t\t\t     Octal: %d", i);
                getchar();

                break;
            }
            case 4:
            {
                exitscreen();
                clrscr();
                return 0;
                break;
            }
            default:
            {
                changeTextColor(1);
                printf("\n   \t\t\t\t\t\tEnter Valid Choice!");
                getchar();
                clearInputBuffer();
                goto start3;
                break;
            }
            }

            break;
        }

        case 5:
        {
            exitscreen();
            clrscr();
            return 0;
        }
        default:
        {
            changeTextColor(1);
            printf("\n\t\t\t\t\t\t  Enter Valid Choice!");
            break;
        }
        }

        clearInputBuffer();
        clrscr();
    } while (1);

    return 0;
}

void changeTextColor(int textColor)
{
    printf("\x1b[38;5;%dm", textColor);
}

void clearInputBuffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
}

void clrscr()
{
    system("cls");
}

int bintodec(int binary)
{
    int decimal = 0, rem, i = 1;

    while (binary != 0)
    {
        rem = binary % 10;
        decimal += rem * i;
        i *= 2;
        binary /= 10;
    }
    return decimal;
}

int bintooctal(int binary)
{
    int decimal = bintodec(binary);
    int i, octal = 0, rem;
    i = 1;
    while (decimal != 0)
    {
        rem = decimal % 8;
        octal = octal + rem * i;
        i *= 10;
        decimal /= 8;
    }

    return octal;
}

int bintohexa(int binary)
{
    int decimal = bintodec(binary);
    int i, rem, hexa = 0;
    i = 1;

    if (decimal > 9)
    {
        printf("\n\t\t\t\t\t\t  Hexadecimal: %x", decimal);
        getchar();
        return -1;
    }
    else
    {
        while (decimal != 0)
        {
            rem = decimal % 16;
            hexa = hexa + rem * i;
            i *= 10;
            decimal /= 16;
        }
    }
    return hexa;
}

int dectobin(int decimal)
{
    int binary = 0, rem, i = 1;
    while (decimal != 0)
    {
        rem = decimal % 2;
        binary = binary + rem * i;
        i *= 10;
        decimal /= 2;
    }
    return binary;
}

int dectooctal(int decimal)
{
    int octal = 0, rem, i = 1;

    while (decimal != 0)
    {
        rem = decimal % 8;
        octal = octal + rem * i;
        i *= 10;
        decimal /= 8;
    }

    return octal;
}

int dectohexa(int decimal)
{
    int hexa = 0, rem, i = 1;

    if (decimal > 9)
    {
        printf("\n\t\t\t\t\t\t  Hexadecimal: %x", decimal);
        getchar();
        return -1;
    }

    else
    {
        while (decimal != 0)
        {
            rem = decimal % 16;
            hexa = hexa + rem * i;
            i *= 10;
            decimal /= 16;
        }
    }
    return hexa;
}

int octaltodec(int octal)
{
    int decimal = 0, rem, i = 1;

    while (octal != 0)
    {
        rem = octal % 10;
        decimal += rem * i;
        i *= 8;
        octal /= 10;
    }

    return decimal;
}

int octaltobin(int octal)
{
    int decimal = 0, binary = 0;
    decimal = octaltodec(octal);
    binary = dectobin(decimal);

    return binary;
}

int octaltohexa(int octal)
{
    int decimal = 0, rem, hexa = 0, i = 1;
    decimal = octaltodec(octal);
    hexa = dectohexa(decimal);

    return hexa;
}

int hexatodec(int hexa)
{

    int decimal = 0, rem, i = 1;

    while (hexa != 0)
    {
        rem = hexa % 16; // Use 16 for hexadecimal
        decimal += rem * i;
        i *= 16;
        hexa /= 16;
    }

    return decimal;
}

int hexatobin(int hexa)
{
    int decimal = 0, binary = 0;
    decimal = hexatodec(hexa);
    binary = dectobin(decimal);
    return binary;
}

int hexatooctal(int hexa)
{
    int decimal = 0, octal = 0;
    decimal = hexatodec(hexa);
    octal = dectooctal(decimal);
    return octal;
}

// changeTextColor();
// Black: 0
// Red: 1
// Green: 2
// Yellow: 3
// Blue: 4
// Magenta: 5
// Cyan: 6
// White: 7