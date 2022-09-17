#include <stdio.h>
#include <cs50.h>

// functions declaration
int add(int num1, int num2);
int substract(int num1, int num2);
int multiply(int num1, int num2);
float devide(float num1, float num2);

// Main Function
int main(void)
{
    // Variables Declaration
    int addition;int substraction;int multiplying;float dividing;int operation;int fnum;int snum;

    // Inputs & Conditions
    do
    {
        fnum = get_int("\n[*] Enter The First Number: ");
    }while(fnum < 1);

    do
    {
        snum = get_int("\n[*] Enter The Second Number: ");

    }while(snum < 1);

    do
    {
        operation = get_int("\n[*] Choose Operation Number: \n(1) +\n(2) -\n(3) *\n(4) /\n: ");
    }while(operation < 1 || operation > 4);

    // Conditions
    if(operation == 1)
    {
        addition = add(fnum,snum);
        printf("\n[+] Result: %i\n\n",addition);
    }
    else if(operation == 2)
    {
        substraction = substract(fnum,snum);
        printf("\n[-] Result: %i\n\n",substraction);
    }
    else if(operation == 3)
    {
        multiplying = multiply(fnum,snum);
        printf("\n[*] Result: %i\n\n",multiplying);
    }
    else if(operation == 4)
    {
        dividing = devide(fnum,snum);
        printf("\n[/] Result: %f\n\n",dividing);
    }
}
    // Operations Functions
    int add(int num1, int num2)
    {
        return num1 + num2;
    }

    int substract(int num1, int num2)
    {
        return num1 - num2;
    }

    int multiply(int num1, int num2)
    {
        return num1 * num2;
    }

    float devide(float num1, float num2)
    {
        return num1 / num2;
    }

