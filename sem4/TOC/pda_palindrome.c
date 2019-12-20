// Write a program that implements PDA to accept a language L(wwr) = {wwr | wr is the reverse of w}

#include<stdio.h>
#include<string.h>
int accepted = 0;
int currentIndex = 0;// Indicates the current variable pointing in input
int mid;
void isInputWWR(int currentState, char input[], char Stack[], int stackTop)
{

    if(stackTop == 0)
    {
        if(currentState == 0 && input[currentIndex] == '\0' && Stack[stackTop] == 'Z')
        {
            currentState = 1;
            isInputWWR(currentState, input, Stack, stackTop);
        }
        if(currentState == 1 && input[currentIndex] == '\0' && Stack[stackTop] == 'Z')
        {
            currentState = 2;
            isInputWWR(currentState, input, Stack, stackTop);
        }
        if(currentState == 2)
        {
            accepted = 1;
            return ;
        }
    }
    if(currentIndex < mid)
    {
        if(currentState == 0 && input[currentIndex] == '0' && Stack[stackTop] == 'Z')
        {
            Stack[++stackTop] = '0';
            currentIndex++;
            isInputWWR(currentState, input, Stack, stackTop);
        }
        if(currentState == 0 && input[currentIndex] == '1' && Stack[stackTop] == 'Z')
        {
            Stack[++stackTop] = '1';
            currentIndex++;
            isInputWWR(currentState, input, Stack, stackTop);
        }
        if(currentState == 0 && input[currentIndex] == '0' && Stack[stackTop] == '0')
        {
            Stack[++stackTop] = '0';
            currentIndex++;
            isInputWWR(currentState, input, Stack, stackTop);
        }
        if(currentState == 0 && input[currentIndex] == '0' && Stack[stackTop] == '1')
        {
            Stack[++stackTop] = '0';
            currentIndex++;
            isInputWWR(currentState, input, Stack, stackTop);
        }
        if(currentState == 0 && input[currentIndex] == '1' && Stack[stackTop] == '0')
        {
            Stack[++stackTop] = '1';
            currentIndex++;
            isInputWWR(currentState, input, Stack, stackTop);
        }
        if(currentState == 0 && input[currentIndex] == '1' && Stack[stackTop] == '1')
        {
            Stack[++stackTop] = '1';
            currentIndex++;
            isInputWWR(currentState, input, Stack, stackTop);
        }
    }
    if(currentState == 0 && currentIndex == mid)
    {
        currentState = 1;
        isInputWWR(currentState, input, Stack, stackTop);
    }
    if(currentIndex >= mid)
    {
        if(currentState == 1 && input[currentIndex] == '0' && Stack[stackTop] == '0')
        {
            stackTop--;
            currentIndex++;
            isInputWWR(currentState, input, Stack, stackTop);
        }
        if(currentState == 1 && input[currentIndex] == '1' && Stack[stackTop] == '1')
        {
            stackTop--;
            currentIndex++;
            isInputWWR(currentState, input, Stack, stackTop);
        }
    }


}

int main()
{
    char input[] = "0110";
    int currentState = 0;
    char Stack[50] = "Z";
    int stackTop = 0;
    mid = strlen(input) / 2;
    isInputWWR(currentState, input, Stack, stackTop);
    if(accepted == 1)
        printf("Accepted");
    else
        printf("Rejected");
    return 0;

}

