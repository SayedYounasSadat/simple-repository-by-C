#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <cs50.h>

int main(void)

{
    float x = get_float("Type the value for X: ");
    float y = get_float("Type the value for Y: ");

    while (true)
    {
        string operation = get_string("Which operation do you want to perfom on the values? Choose from these: \n Sum | Minus | Multiply | Divide | Update the Values | Exit program\n");

        if (strcasecmp(operation, "sum") == 0)
        {
            printf("Result: %.2f + %.2f = %.2f\n", x, y, x + y);
        }
        else if (strcasecmp(operation, "minus") == 0)
        {
            printf("Results: %.2f - %.2f = %.2f\n", x, y, x - y);
        }
        else if (strcasecmp(operation, "multiply") == 0)
        {
            printf("Results: %.2f * %.2f = %.2f\n", x, y, x * y);
        }
        else if (strcasecmp(operation, "divide") == 0)
        {
            if (y != 0)
            {
                printf("Results: %.2f / %.2f = %.2f\n", x, y, x / y);
            }

            else
            {
                printf("Error: can not divide by zero");
            }
        }
        else if (strcasecmp(operation, "update") == 0)
        {
            x = get_float("Type the value for X: ");
            y = get_float("Type the value for Y: ");
        }
        else if (strcasecmp(operation, "exit") == 0)
        {
            printf("Exiting now... Thank you for using our services!");
            break;
        }

        else
        {
            printf("invlaid operation: Try again.\n");
        }
    }
}
