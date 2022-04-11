#include <windows.h>
#include <stdio.h>
void music()
{ int rep;
    printf("quel genre musicale ecoutez vous? \n 1-soolking\n 2-kendji girac \n 3-annee marie \n 4-david guetta \n 5-dance monkey \n 6-hamza namira \n 7-maher zain \n 8- maron 5 \n");
    scanf("%i",&rep);
    switch(rep)
    {
    case 1:
         system("start C:\\Users\\21626\\Desktop\\MPC\\soolking.mp3");
         break;
    case 2:
         system("start C:\\Users\\21626\\Desktop\\MPC\\kendji.mp3");
         break;
    case 3:
        system("start C:\\Users\\21626\\Desktop\\MPC\\anne.mp3");
        break;
    case 4:
        system("start C:\\Users\\21626\\Desktop\\MPC\\david.mp3");
        break;
    case 5:
        system("start C:\\Users\\21626\\Desktop\\MPC\\dance.mp3");
        break;
    case 6:
        system("start C:\\Users\\21626\\Desktop\\MPC\\hamza.mp3");
        break;
    case 7:
        system("start C:\\Users\\21626\\Desktop\\MPC\\maher.mp3");
        break;
    case 8:
        system("start C:\\Users\\21626\\Desktop\\MPC\\maron.mp3");
        break;
    }
}
