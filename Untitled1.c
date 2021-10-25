#include <stdio.h>
  main(){
      int order, payment, c=0;
      int vape= 1500;
      int vapejuice = 150;
      int cottonbacon = 70;

printf("Available\n");
printf("[1] Vape\n");
printf("[2] VapeJuice\n");
printf("[3] Cottonbacon\n");
scanf("%d", &order);

      switch (order){
        case 1:
            printf(" Vape = 1500\n", vape);
             printf("Please enter your payment:\n");
            scanf("%d", &payment);

          if (payment >= vape){
            printf("You have purchase Vape!\n");
          }
          else{
            printf("not accepted\n");
          }

          c = payment - vape;

            printf("Change: %d", c);


            break;
        case 2:
            printf("VApejuice = 150\n", vapejuice);
             printf("Please enter your payment:\n");
            scanf("%d", &payment);

          if (payment >= vapejuice){
            printf("You have purchase Vapejuice!\n");
          }
          else
            printf("not accepted\n");

          c = payment - vapejuice;

            printf("Change: %d", c);

            break;
        case 3:
            printf("Cottonbacon = 70\n", cottonbacon);
             printf("Please enter your payment:\n");
            scanf("%d", &payment);

          if (payment >= cottonbacon){
            printf("You have purchase Cottonbacon!\n");
          }
          else
            printf("not accepted\n");

          c = payment - cottonbacon;

            printf("Change: %d", c);


            break;
        default:
            printf("invalid input\n");
            break;
      }



        return 0;
  }

