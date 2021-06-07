#include <stdio.h>
#define X 5

struct bankAccount
{
    int id;
    char name[10];
    int balance;
};

void deposit(struct bankAccount *);
void withdraw(struct bankAccount *);
void print(struct bankAccount *);
int request(void);

int main()
{
    struct bankAccount account[X];
    int i;
    for (i = 0; i < X; i++)
    {
        printf("Please enter user %d's id , name and its balance\n", i + 1);
        scanf("%d %s %d", &account[i].id, account[i].name, &account[i].balance);
    }
    int test;
    print(account);
    do
    {
        switch (test = request())
        {
        case 1:
            deposit(account);
            break;
        case 2:
            withdraw(account);
            break;
        case 3:
            print(account);
            break;
        }
    } while (test != 3);
}
void deposit(struct bankAccount *account)
{
    int ID;
    int amount;
    printf("Enter the user's id and the amount you want to deposit.\n");
    scanf("%d %d", &ID, &amount);
    int i;
    for (i = 0; i < 5; i++)
    {
        if (account[i].id == ID)
        {
            account[i].balance += amount;
        }
    }
}

void withdraw(struct bankAccount *account)
{
    int ID;
    int amount;
    printf("Enter the user's id and the amount you want to withdraw.\n");
    scanf("%d %d", &ID, &amount);
    int i;
    for (i = 0; i < 5; i++)
    {
        if (account[i].id == ID)
        {
            if (account[i].balance - amount < 0)
            {
                printf("Warning : %s's balance is not enough!\n", account[i].name);
            }
            else
            {
                account[i].balance -= amount;
            }
        }
    }
}

void print(struct bankAccount *account)
{
    int i;
    printf("There are 5 users in our bank.\n");
    printf("ID   User_name   balance\n");
    for (i = 0; i < X; i++)
    {
        printf("%-5d%-12s%-5d\n", account[i].id, account[i].name, account[i].balance);
    }
}
int request(void)
{
    int re;
    printf("\nEnter request:\n");
    printf("1 --- to deposite.\n2 --- to withdraw.\n3 --- show users in our bank.\n");
    scanf("%d", &re);
    return re;
}