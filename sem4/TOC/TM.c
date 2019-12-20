// Design a Turing Machine that accepts the language
// L = { 0^n1^n | n >= 1}
#include<stdio.h>
#include<string.h>

int accepted = 0;
void TuringTransition(int currentState, char tape[], int tapeIndex)
{
    //printf("\nTape: %s", tape);
    //printf("\ncurrentState: %d", currentState);
    if(currentState == 4 )
        accepted = 1;

    else if(currentState == 0 && tape[tapeIndex] == '0')
    {
        currentState = 1;
        tape[tapeIndex] = 'X';
        tapeIndex++;
        TuringTransition(currentState, tape, tapeIndex);
    }
    else if(currentState == 0 && tape[tapeIndex] == 'B')
    {
        currentState = 4;
        tape[tapeIndex] = 'B';
        tapeIndex++;
        TuringTransition(currentState, tape, tapeIndex);
    }
    else if(currentState == 0 && tape[tapeIndex] == 'Y')
    {
        currentState = 4;
        tape[tapeIndex] = 'Y';
        tapeIndex++;
        TuringTransition(currentState, tape, tapeIndex);
    }
    else if(currentState == 1 && tape[tapeIndex] == '0')
    {
        currentState = 1;
        tape[tapeIndex] = '0';
        tapeIndex++;
        TuringTransition(currentState, tape, tapeIndex);
    }
    else if(currentState == 1 && tape[tapeIndex] == '1')
    {
        currentState = 1;
        tape[tapeIndex] = '1';
        tapeIndex++;
        TuringTransition(currentState, tape, tapeIndex);
    }
    else if(currentState == 1 && tape[tapeIndex] == 'B')
    {
        currentState = 2;
        tape[tapeIndex] = 'B';
        tapeIndex--;
        TuringTransition(currentState, tape, tapeIndex);
    }
    else if(currentState == 1 && tape[tapeIndex] == 'Y')
    {
        currentState = 2;
        tape[tapeIndex] = 'Y';
        tapeIndex--;
        TuringTransition(currentState, tape, tapeIndex);
    }
    else if(currentState == 2 && tape[tapeIndex] == '1')
    {
        currentState = 3;
        tape[tapeIndex] = 'Y';
        tapeIndex--;
        TuringTransition(currentState, tape, tapeIndex);
    }
    else if(currentState == 3 && tape[tapeIndex] == '0')
    {
        currentState = 3;
        tape[tapeIndex] = '0';
        tapeIndex--;
        TuringTransition(currentState, tape, tapeIndex);
    }
    else if(currentState == 3 && tape[tapeIndex] == '1')
    {
        currentState = 3;
        tape[tapeIndex] = '1';
        tapeIndex--;
        TuringTransition(currentState, tape, tapeIndex);
    }
    else if(currentState == 3 && tape[tapeIndex] == 'X')
    {
        currentState = 0;
        tape[tapeIndex] = 'X';
        tapeIndex++;
        TuringTransition(currentState, tape, tapeIndex);
    }
}
int main()
{
    char input[50];
    printf("Enter the string:\n");
    scanf("%s",input);
    int index = 0 ;
    char tape[100] = "B";
    int currentState = 0;
    while(input[index] != '\0')
    {
        tape[index + 1] = input[index];
        index++;
    }
    tape[index + 1] = 'B';
    printf("\nTape: %s", tape);
    int tapeIndex = 1;
    //printf("\nTape[%d]: %c", tapeIndex, tape[tapeIndex]);
    TuringTransition(currentState, tape, tapeIndex);
    if(accepted == 1)
        printf("\nInput string is accepted.");
    else
        printf("\nInput string is rejected.");
    return 0;
}
