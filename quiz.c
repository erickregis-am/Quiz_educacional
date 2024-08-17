// FUNDAÇÃO MATIAS MACHLINE
// PROF. SÉRGIO 
// ERICK REGINALDO DOS SANTOS SILVA // RA: 239436
// DATA: 08/06/23 // 17:31:38
// DATA DE FINALIZAÇÃO: 20/06/23 // 00:31:58  
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>
#include<windows.h>
#include<conio.c>
int main(){
   
          SetConsoleTitle("QUIZ EDUCACIONAL");
	 
    // Pré-tela inicial

    gotoxy(31,11);textcolor(YELLOW);printf("NAO DEIXE EM TELA CHEIA, O QUIZ NAO FUNCIONARA DIREITO!!!");

    
    
    gotoxy(31,14);textcolor(WHITE);printf("Pressione para continuar\.\.\.");getch();
    system("cls");
 

    // INTERFACE INICIAL
    int clod,clogo;
    char barra[50]="";

     
	// LOGICA DO QUIZ
  int ccarac,ccarac2,ccarac3, ccarac4, ccarac5, ccarac6, ccarac7, ccarac8, ccarac10; 
  int pontosbom = 0 ,pontosmal = 0, auxnumletra, controle = 0;
	int s; 
  int auxop;
  int controlpisc=0;
	int contquest = 1;
    char op;
    // INTERFACE INICIAL
    
    gotoxy(16,1);printf("\\\\AUTOR: ERICK REGINALDO");
    gotoxy(16,2);printf("\\\\QUIZ da materia de Biologia");
    gotoxy(16,3);printf("\\\\tendo como principal assunto bioquimica\n\n");
    
     
    for(clogo = 0; clogo < 1; clogo++){
    if(clogo == 0){
    system("color 0F");
    gotoxy(16,10);printf(":::::::::  :::::::::::  ::::::::  :::         ::::::::   ::::::::  :::::::::::     :::     \n"); 
    gotoxy(16,11);printf(":+:    :+:     :+:     :+:    :+: :+:        :+:    :+: :+:    :+:     :+:       :+: :+:   \n"); 
    gotoxy(16,12);printf("+:+    +:+     +:+     +:+    +:+ +:+        +:+    +:+ +:+            +:+      +:+   +:+  \n"); 
    gotoxy(16,13);printf("+#++:++#+      +#+     +#+    +:+ +#+        +#+    +:+ :#:            +#+     +#++:++#++: \n"); 
    gotoxy(16,14);printf("+#+    +#+     +#+     +#+    +#+ +#+        +#+    +#+ +#+   +#+#     +#+     +#+     +#+ \n"); 
    gotoxy(16,15);printf("#+#    #+#     #+#     #+#    #+# #+#        #+#    #+# #+#    #+#     #+#     #+#     #+# \n"); 
    gotoxy(16,16);printf("#########  ###########  ########  ##########  ########   ########  ########### ###     ### \n");
    gotoxy(16,18);printf("           _       _                           _               _                \n");
    gotoxy(16,19);printf("          | |__   (_)   ___     __ _   _   _  (_)  _ __ ___   (_)   ___    __ _ \n"); 
    gotoxy(16,20);printf("          | '_ \\  | |  / _ \\   / _` | | | | | | | | '_ ` _ \\  | |  / __|  / _` |\n"); 
    gotoxy(16,21);printf("          | |_) | | | | (_) | | (_| | | |_| | | | | | | | | | | | | (__  | (_| |\n"); 
    gotoxy(16,22);printf("          |_.__/  |_|  \\___/   \\__, |  \\__,_| |_| |_| |_| |_| |_|  \\___|  \\__,_|\n"); 
    gotoxy(16,23);printf("                                  |_|                                           \n"); 
    }
    textcolor(GREEN);
    Sleep(300);
    gotoxy(16,10);printf(":::::::::  :::::::::::  ::::::::  :::         ::::::::   ::::::::  :::::::::::     :::     \n"); 
    gotoxy(16,11);printf(":+:    :+:     :+:     :+:    :+: :+:        :+:    :+: :+:    :+:     :+:       :+: :+:   \n"); 
    textcolor(LIGHTGREEN);
    Sleep(300);
    gotoxy(16,12);printf("+:+    +:+     +:+     +:+    +:+ +:+        +:+    +:+ +:+            +:+      +:+   +:+  \n"); 
    gotoxy(16,13);printf("+#++:++#+      +#+     +#+    +:+ +#+        +#+    +:+ :#:            +#+     +#++:++#++: \n"); 
    textcolor(CYAN);
    Sleep(300);
    gotoxy(16,14);printf("+#+    +#+     +#+     +#+    +#+ +#+        +#+    +#+ +#+   +#+#     +#+     +#+     +#+ \n"); 
    gotoxy(16,15);printf("#+#    #+#     #+#     #+#    #+# #+#        #+#    #+# #+#    #+#     #+#     #+#     #+# \n"); 
    textcolor(LIGHTCYAN);
    Sleep(300);
    gotoxy(16,16);printf("#########  ###########  ########  ##########  ########   ########  ########### ###     ### \n");
    textcolor(BLUE);
    Sleep(300);
    gotoxy(16,18);printf("           _       _                           _               _                \n");
    gotoxy(16,19);printf("          | |__   (_)   ___     __ _   _   _  (_)  _ __ ___   (_)   ___    __ _ \n"); 
    textcolor(LIGHTBLUE);
    Sleep(300);
    gotoxy(16,20);printf("          | '_ \\  | |  / _ \\   / _` | | | | | | | | '_ ` _ \\  | |  / __|  / _` |\n"); 
    gotoxy(16,21);printf("          | |_) | | | | (_) | | (_| | | |_| | | | | | | | | | | | | (__  | (_| |\n"); 
    textcolor(LIGHTCYAN);
    Sleep(300);
    gotoxy(16,22);printf("          |_.__/  |_|  \\___/   \\__, |  \\__,_| |_| |_| |_| |_| |_|  \\___|  \\__,_|\n"); 
    gotoxy(16,23);printf("                                  |_|                                           \n"); 
    textcolor(WHITE);
    }
    
    printf("Pressione qualquer tecla para continuar\.\.\.");getch();
 
    
    
    system("cls");
    system("color 0F");
     

    // BARRA DE CARREGAMENTO
 
    strcpy(barra,"\xDB");
    strcpy(barra,"\xB3");
    for(clod = 0; clod <= 100; clod+=5){
        gotoxy(40,10); printf("Carregando\.\.\.\n");
        gotoxy(40,12); printf("%s",barra);
        gotoxy(41,12); printf("%d%%", clod);
        Sleep(100);
        strcat(barra,"\xDB");                                       
        strcat(barra,"\xB3");
        if(clod == 25){Sleep(3000);}
        if(clod == 85){Sleep(2000);}
        if(clod == 95){Sleep(5000);}
        if(clod == 100){system("color 02");gotoxy(48,14); printf("Carregamento concluido!\n\n");gotoxy(40,16); printf("Pressione qualquer tecla para continuar\.\.\."); getch();}
        system("cls");
        }
        system("color 0F");
        system("cls");

        // TELA DE APRESENTAÇÂO DO QUIZ
 
    char nickname[30];
    int cn, tamnick;
    int auxnick,auxnick2;
    do{
     
    textbackground(BLACK);
    textcolor(LIGHTBLUE);gotoxy(23,1);printf(" ******                                      **               **               ");
    gotoxy(23,2);printf("/*////**                                    //               /**               ");
    gotoxy(23,4);printf("/*   /**   *****  **********        **    ** ** *******      /**  ******       ");
    gotoxy(23,5);printf("/******   **///**//**//**//**      /**   /**/**//**///**  ****** **////**      ");
    gotoxy(23,6);printf("/*//// **/******* /** /** /**      //** /** /** /**  /** **///**/**   /**      ");
    gotoxy(23,6);printf("/*    /**/**////  /** /** /**       //****  /** /**  /**/**  /**/**   /**      ");
    gotoxy(23,7);printf("/******* //****** *** /** /**        //**   /** ***  /**//******//******       ");
    gotoxy(23,8);printf("///////   ////// ///  //  //          //    // ///   //  //////  //////        ");
    gotoxy(23,9);printf("                                                                               ");
    gotoxy(23,10);printf("                                                                               ");
    textcolor(CYAN);gotoxy(23,11);printf("                                ******    ******                               ");
    gotoxy(23,12);printf("                               //////**  **////**                              ");
    gotoxy(23,13);printf("                                ******* /**   /**                              ");
    gotoxy(23,14);printf("                               **////** /**   /**                              ");
    gotoxy(23,15);printf("                              //********//******                               ");
    gotoxy(23,16);printf("                               ////////  //////                                ");
    gotoxy(23,17);printf("                                         **        **                          ");
    textcolor(LIGHTCYAN);gotoxy(23,18);printf("                          ****          //        /**                          ");
    gotoxy(23,19);printf("                         **//**  **   ** ** ******/**                          ");
    gotoxy(23,20);printf("                        /** /** /**  /**/**////** /**                          ");
    gotoxy(23,21);printf("                        //***** /**  /**/**   **  /**                          ");
    gotoxy(23,22);printf("                         ////** /**  /**/**  **   //                           ");
    gotoxy(23,23);printf("                            /***//******/** ****** **                          ");
    gotoxy(23,24);printf("                            ///  ////// // ////// //                           ");
    textcolor(WHITE);printf("\n\n\t\t Este e um quiz sobre Bioquimica, onde voce tera que responder algumas questoes.\n");
    printf("\t\t  Antes de qualquer coisa. Insira seu nickname:  ");
    textcolor(YELLOW);
    gotoxy(36,27);printf("OBS - Nao e permitido espacos ou enters!\n\n\t\t\t\t");
    textcolor(WHITE);
    gets(nickname);
    tamnick = strlen(nickname); // sistema de nickname invalido e valido
    auxnick2 = nickname[0];for(cn = -1; cn < tamnick; cn++){auxnick = nickname[cn];
    if(auxnick == 32 || auxnick2 == 0){textcolor(RED);printf("Nickname invalido!!!");getch();system("cls");system("color 0F");break;}
    }} while(auxnick == 32 || auxnick2 == 0);
    textcolor(GREEN);printf("nickname valido!!!");Sleep(1000);system("cls");
    textbackground(BLACK);
    textcolor(WHITE);
    Sleep(30);printf("\n\n\n\n\t\t\tA seguir, tera algumas das regras do QUIZ e seus comandos.\n\n");
    Sleep(30);printf("\t- 1\. Esse quiz possuira 10 questoes, divididas em 3 niveis: ");
    Sleep(30);textcolor(GREEN);printf("FACIL - ");
    Sleep(30);textcolor(YELLOW);printf("MEDIO - ");
    Sleep(30);textcolor(RED); printf("DIFICIL\n");
    Sleep(30);textcolor(WHITE);
    Sleep(30);printf("\t- 2\. O numero de questao de cada dificuldade sera: ");
    Sleep(30);textcolor(GREEN);printf("FACIL (04) - ");
    Sleep(30);textcolor(YELLOW);printf("MEDIO (03) - ");
    Sleep(30);textcolor(RED); printf("DIFICIL (03)\n");
    Sleep(30);textcolor(WHITE);
    Sleep(30);printf("\t- 3\. Existira um temporizador na tela, que se ao nao ser respondido a tempo, sera contado a resposta\n\tcomo errada. Entao fique atento!\n\n");
    Sleep(30);printf("\t\t\t\t    Agora vou explicar como interagir!!!\n\n");
    Sleep(30);printf("\tE bem simples, ao se encontrar com a questao, apenas tera que digitar a letra correspondente a uma das opcoes.\n");
    Sleep(30);printf("\tAo digitar uma opcao invalida (letras que nao estao indicadas como resposta ou numeros),\n\tsera contabilizado como resposta errada.\n\n");
    Sleep(30);textcolor(YELLOW);printf("\tOBS: Letras maiusculas serao validas!!!\n\n");
    Sleep(30);textcolor(WHITE);
    Sleep(30);printf("\tCom isso, agora teste suas capacidades!!!\n\n");
    Sleep(30);printf("\tPressione qualquer tecla para continuar\.\.\.");getch();
    system("cls");
    
    // Cronômetro de começo
    
    textcolor(GREEN);
  gotoxy(53,12);printf("  _____      ");
  gotoxy(53,13);printf(" / __  \\     ");
  gotoxy(53,14);printf("|\\/_|\\  \\    ");
  gotoxy(53,15);printf("\\|/ \\ \\  \\   ");
  gotoxy(53,16);printf("     \\ \\  \\  ");
  gotoxy(53,17);printf("      \\ \\__\\ ");
  gotoxy(53,18);printf("       \\|__| ");
  Sleep(1000);
  textcolor(YELLOW);
  gotoxy(53,12);printf("  _______      ");
  gotoxy(53,13);printf(" /  ___  \\     ");
  gotoxy(53,14);printf("/__/|_/  /|    ");
  gotoxy(53,15);printf("|__|//  / /    ");
  gotoxy(53,16);printf("    /  /_/__   ");
  gotoxy(53,17);printf("   |\\________\\ ");
  gotoxy(53,18);printf("    \\|_______| ");
  Sleep(1000);
  textcolor(RED);
  gotoxy(53,12);printf(" ________      ");
  gotoxy(53,13);printf("|\\_____  \\     ");
  gotoxy(53,14);printf("\\|____|\\ /_    ");
  gotoxy(53,15);printf("      \\|\\  \\   ");
  gotoxy(53,16);printf("     __\\_\\  \\  ");
  gotoxy(53,17);printf("    |\\_______\\ ");
  gotoxy(53,18);printf("    \\|_______| ");
  Sleep(1000);


  system("cls");
  system("color 0F");

      for (s =30; s>=0;s--){
                textcolor(LIGHTBLUE);
                gotoxy(8, 1);printf("         *******    **     ** ********  ******** **********     **       *******                   ");
                gotoxy(8, 2);printf("        **/////**  /**    /**/**/////  **////// /////**///     ****     **/////**                    ***    ");
                gotoxy(8, 3);printf("       **     //** /**    /**/**      /**           /**       **//**   **     //**                  //**    ");
                textcolor(CYAN);
                gotoxy(8, 4);printf("      /**      /** /**    /**/******* /*********    /**      **  //** /**      /**                   /**    ");
                gotoxy(8, 5);printf("      /**    **/** /**    /**/**////  ////////**    /**     **********/**      /**                   /**    ");
                gotoxy(8, 6);printf("      //**  // **  /**    /**/**             /**    /**    /**//////**//**     **                    /**  **");
                textcolor(LIGHTBLUE);
                gotoxy(8, 7);printf("       //******* **//******* /******** ********     /**    /**     /** //*******                     ****/**");
                gotoxy(8, 8);printf("        /////// //  ///////  //////// ////////      //     //      //   ///////                     //// // ");
                textcolor(GREEN);
                gotoxy(80, 25);printf("DIFICULDADE  FACIL");textcolor(WHITE);
                gotoxy(55,25);printf("TEMPO");gotoxy(52,26);printf("|");gotoxy(51,27);printf("%02d",s);
                gotoxy(10,24);printf("Acertos -----> %02d", pontosbom);
                gotoxy(10,25);printf("Erros -------> %02d",pontosmal); 
                gotoxy(30, 11);printf("\"Qual o nome do tipo de lipidio que e associado a gordura?\"");
                gotoxy(30,13);printf("a) Glicerol");
                gotoxy(30,14);printf("b) Fosfolipidios");
                gotoxy(30,15);printf("c) Hormonios");
                gotoxy(30,16);printf("d) Ceras");
                gotoxy(30,17);printf("e) Carotenoides\n\n\t\t\t    ");
                Sleep(1000);
                if(kbhit()){fflush(stdin);op = getch();toupper(op);break;Sleep(500);}}


                if(s == 0){pontosmal++;system("cls");
                 while(controlpisc<=6){
                    if(controlpisc==0){textcolor(8);Sleep(50);}
                    if(controlpisc==1){textcolor(LIGHTBLUE);Sleep(50);}
                    if(controlpisc==2){textcolor(8);Sleep(50);}
                    if(controlpisc==3){textcolor(LIGHTBLUE);Sleep(50);}
                    if(controlpisc==4){textcolor(8);Sleep(50);}
                    if(controlpisc==5){textcolor(LIGHTBLUE);Sleep(50);}
                    if(controlpisc==6){textcolor(8);Sleep(50);}
                    gotoxy(20,5); printf("                    .-') _     ('-.  _   .-')      _ (`-.                           ");
                    gotoxy(20,6); printf("                   (  OO) )  _(  OO)( '.( OO )_   ( (OO  )                          ");
                    gotoxy(20,7); printf(" .-'),-----.       /     '._(,------.,--.   ,--.)_.`     \\ .-'),-----.              ");
                    gotoxy(20,8); printf("( OO'  .-.  '      |'--...__)|  .---'|   `.'   |(__...--''( OO'  .-.  '             ");
                    gotoxy(20,9); printf("/   |  | |  |      '--.  .--'|  |    |         | |  /  | |/   |  | |  |             ");
                    gotoxy(20,10); printf("\\_) |  |\\|  |         |  |  (|  '--. |  |'.'|  | |  |_.' |\\_) |  |\\|  |             ");
                    gotoxy(20,11); printf("  \\ |  | |  |         |  |   |  .--' |  |   |  | |  .___.'  \\ |  | |  |             ");
                    gotoxy(20,12); printf("   `'  '-'  '         |  |   |  `---.|  |   |  | |  |        `'  '-'  '             ");
                    gotoxy(20,13); printf("     `-----'          `--'   `------'`--'   `--' `--'          `-----'              ");
                    gotoxy(20,14); printf("   ('-.                 ('-.    .-. .-')                            ,---.,---.,---. ");
                    gotoxy(20,15); printf("  ( OO ).-.            ( OO ).-.\\  ( OO )                           |   ||   ||   | ");
                    gotoxy(20,16); printf("  / . --. /   .-----.  / . --. / ;-----.\\  .-'),-----.  ,--. ,--.   |   ||   ||   | ");
                    gotoxy(20,17); printf("  | \\-.  \\   '  .--./  | \\-.  \\  | .-.  | ( OO'  .-.  ' |  | |  |   |   ||   ||   | ");
                    gotoxy(20,18); printf(".-'-'  |  |  |  |('-..-'-'  |  | | '-' /_)/   |  | |  | |  | | .-') |   ||   ||   | ");
                    gotoxy(20,19); printf(".-'-'  |  |  |  |('-..-'-'  |  | | '-' /_)/   |  | |  | |  | | .-') |   ||   ||   | ");
                    gotoxy(20,20); printf(" \\| |_.'  | /_) |OO  )\\| |_.'  | | .-. `. \\_) |  |\\|  | |  |_|( OO )|  .'|  .'|  .' ");
                    gotoxy(20,21); printf("  |  .-.  | ||  |`-'|  |  .-.  | | |  \\  |  \\ |  | |  | |  | | `-' /`--' `--' `--'  ");
                    gotoxy(20,22); printf("  |  | |  |(_'  '--'\\  |  | |  | | '--'  /   `'  '-'  '('  '-'(_.-' .--. .--. .--.  ");
                    gotoxy(20,23); printf("  `--' `--'   `-----'  `--' `--' `------'      `-----'   `-----'    '--' '--' '--'  ");
                    controlpisc++;
                    Sleep(500);
                    }
                       
                        Sleep(1000);
                       
                        system("cls");
                        textcolor(WHITE);}  

      if(tolower(op) == 'a'){
        pontosbom++;system("cls");controlpisc=0;
          while(controlpisc<=5){
                    if(controlpisc==0){textcolor(8);Sleep(50);}
                    if(controlpisc==1){textcolor(LIGHTGREEN);Sleep(50);}
                    if(controlpisc==2){textcolor(8);Sleep(50);}
                    if(controlpisc==3){textcolor(LIGHTGREEN);Sleep(50);}
                    if(controlpisc==4){textcolor(8);Sleep(50);}
                    if(controlpisc==5){textcolor(LIGHTGREEN);Sleep(50);}
                     
                    gotoxy(22,5); printf("      (`-.                              ('-.                                                ");
                    gotoxy(22,6); printf("    _(OO  )_                          _(  OO)                                               ");
                    gotoxy(22,7); printf(",--(_/   ,. \\ .-'),-----.    .-----. (,------.                                              ");
                    gotoxy(22,8); printf("\\   \\   /(__/( OO'  .-.  '  '  .--./  |  .---'                                              ");
                    gotoxy(22,9); printf(" \\   \\ /   / /   |  | |  |  |  |('-.  |  |                                                  ");
                    gotoxy(22,10); printf("  \\   '   /, \\_) |  |\\|  | /_) |OO  )(|  '--.                                               ");
                    gotoxy(22,11); printf("   \\     /__)  \\ |  | |  | ||  |`-'|  |  .--'                                               ");
                    gotoxy(22,12); printf("    \\   /       `'  '-'  '(_'  '--'\\  |  `---.                                              ");
                    gotoxy(22,13); printf("     `-'          `-----'    `-----'  `------'                                              ");
                    gotoxy(22,14); printf("   ('-.                  ('-.  _  .-')   .-') _                             ,---.,---.,---. ");
                    gotoxy(22,15); printf("  ( OO ).-.            _(  OO)( \\( -O ) (  OO) )                            |   ||   ||   | ");
                    gotoxy(22,16); printf("  / . --. /   .-----. (,------.,------. /     '._  .-'),-----.  ,--. ,--.   |   ||   ||   | ");
                    gotoxy(22,17); printf("  | \\-.  \\   '  .--./  |  .---'|   /`. '|'--...__)( OO'  .-.  ' |  | |  |   |   ||   ||   | ");
                    gotoxy(22,18); printf(".-'-'  |  |  |  |('-.  |  |    |  /  | |'--.  .--'/   |  | |  | |  | | .-') |   ||   ||   | ");
                    gotoxy(22,19); printf(" \\| |_.'  | /_) |OO  )(|  '--. |  |_.' |   |  |   \\_) |  |\\|  | |  |_|( OO )|  .'|  .'|  .' ");
                    gotoxy(22,20); printf("  |  .-.  | ||  |`-'|  |  .--' |  .  '.'   |  |     \\ |  | |  | |  | | `-' /`--' `--' `--'  ");
                    gotoxy(22,21); printf("  |  | |  |(_'  '--'\\  |  `---.|  |\\  \\    |  |      `'  '-'  '('  '-'(_.-' .--. .--. .--.  ");
                    gotoxy(22,22); printf(" `--' `--'   `-----'  `------'`--' '--'   `--'        `-----'   `-----'    '--' '--' '--'  ");
                    controlpisc++;
                    Sleep(500);
                  } 
                    
                    Sleep(1000);

                    system("cls");
                textcolor(WHITE);}
            else {
              pontosmal++;system("cls");controlpisc=0;
              while(controlpisc<=5){
                    if(controlpisc==0){textcolor(8);Sleep(50);}
                    if(controlpisc==1){textcolor(LIGHTRED);Sleep(50);}
                    if(controlpisc==2){textcolor(8);Sleep(50);}
                    if(controlpisc==3){textcolor(LIGHTRED);Sleep(50);}
                    if(controlpisc==4){textcolor(8);Sleep(50);}
                    if(controlpisc==5){textcolor(LIGHTRED);Sleep(50);}
                     
                     gotoxy(24,5);printf("      (`-.                              ('-.                         ");
                     gotoxy(24,6);printf("    _(OO  )_                          _(  OO)                        ");
                     gotoxy(24,7);printf(",--(_/   ,. \\ .-'),-----.    .-----. (,------.                       ");
                     gotoxy(24,8);printf("\\   \\   /(__/( OO'  .-.  '  '  .--./  |  .---'                       ");
                     gotoxy(24,9);printf(" \\   \\ /   / /   |  | |  |  |  |('-.  |  |                           ");
                     gotoxy(24,10);printf("  \\   '   /, \\_) |  |\\|  | /_) |OO  )(|  '--.                        ");
                     gotoxy(24,11);printf("   \\     /__)  \\ |  | |  | ||  |`-'|  |  .--'                        ");
                     gotoxy(24,12);printf("    \\   /       `'  '-'  '(_'  '--'\\  |  `---.                       ");
                     gotoxy(24,13);printf("     `-'          `-----'    `-----'  `------'                       ");
                     gotoxy(24,14);printf("   ('-.  _  .-')  _  .-')                            ,---.,---.,---. ");
                     gotoxy(24,15);printf(" _(  OO)( \\( -O )( \\( -O )                           |   ||   ||   | ");
                     gotoxy(24,16);printf("(,------.,------. ,------.  .-'),-----.  ,--. ,--.   |   ||   ||   | ");
                     gotoxy(24,17);printf(" |  .---'|   /`. '|   /`. '( OO'  .-.  ' |  | |  |   |   ||   ||   | ");
                     gotoxy(24,18);printf(" |  |    |  /  | ||  /  | |/   |  | |  | |  | | .-') |   ||   ||   | ");
                     gotoxy(24,19);printf("(|  '--. |  |_.' ||  |_.' |\\_) |  |\\|  | |  |_|( OO )|  .'|  .'|  .' ");
                     gotoxy(24,20);printf(" |  .--' |  .  '.'|  .  '.'  \\ |  | |  | |  | | `-' /`--' `--' `--'  ");
                     gotoxy(24,21);printf(" |  `---.|  |\\  \\ |  |\\  \\    `'  '-'  '('  '-'(_.-' .--. .--. .--.  ");
                     gotoxy(24,22);printf(" `------'`--' '--'`--' '--'     `-----'   `-----'    '--' '--' '--'  ");
                     controlpisc++;
                     Sleep(500);
                  }
                     
                     Sleep(1000);

                     system("cls");
                     textcolor(WHITE);}
      // QUESTÃO 2
          for (s =30; s>=0;s--){
                textcolor(LIGHTBLUE);
                gotoxy(8, 1);printf("         *******    **     ** ********  ******** **********     **       *******                      ****    ");
                gotoxy(8, 2);printf("        **/////**  /**    /**/**/////  **////// /////**///     ****     **/////**                    */// *   ");
                gotoxy(8, 3);printf("       **     //** /**    /**/**      /**           /**       **//**   **     //**                  /    /*   ");
                textcolor(CYAN);
                gotoxy(8, 4);printf("      /**      /** /**    /**/******* /*********    /**      **  //** /**      /**                     ***    ");
                gotoxy(8, 5);printf("      /**    **/** /**    /**/**////  ////////**    /**     **********/**      /**                    *//     ");
                gotoxy(8, 6);printf("      //**  // **  /**    /**/**             /**    /**    /**//////**//**     **                    *      **");
                textcolor(LIGHTBLUE);
                gotoxy(8, 7);printf("       //******* **//******* /******** ********     /**    /**     /** //*******                    /******/**");
                gotoxy(8, 8);printf("        /////// //  ///////  //////// ////////      //     //      //   ///////                     ////// // ");
                textcolor(GREEN);
                gotoxy(80, 25);printf("DIFICULDADE  FACIL");textcolor(WHITE);
                gotoxy(55,25);printf("TEMPO");gotoxy(52,26);printf("|");gotoxy(51,27);printf("%02d",s);
                gotoxy(10,24);printf("Acertos -----> %02d", pontosbom);
                gotoxy(10,25);printf("Erros -------> %02d",pontosmal); 
                gotoxy(30, 11);printf("\"A que classe pertence o termo \"Glicidio\"? \"");
                gotoxy(30,13);printf("a) Carboidratos");
                gotoxy(30,14);printf("b) Proteinas");
                gotoxy(30,15);printf("c) Fibras");
                gotoxy(30,16);printf("d) Sais Minerais");
                gotoxy(30,17);printf("e) Lipidios\n\n\t\t\t    ");
                Sleep(1000);
                if(kbhit()){fflush(stdin);op = getch();toupper(op);break;Sleep(500);}} 


                if(s == 0){pontosmal++;system("cls");
                 while(controlpisc<=5){
                    if(controlpisc==0){textcolor(8);Sleep(50);}
                    if(controlpisc==1){textcolor(LIGHTBLUE);Sleep(50);}
                    if(controlpisc==2){textcolor(8);Sleep(50);}
                    if(controlpisc==3){textcolor(LIGHTBLUE);Sleep(50);}
                    if(controlpisc==4){textcolor(8);Sleep(50);}
                    if(controlpisc==5){textcolor(LIGHTBLUE);Sleep(50);}
                    
                    gotoxy(20,5); printf("                    .-') _     ('-.  _   .-')      _ (`-.                           ");
                    gotoxy(20,6); printf("                   (  OO) )  _(  OO)( '.( OO )_   ( (OO  )                          ");
                    gotoxy(20,7); printf(" .-'),-----.       /     '._(,------.,--.   ,--.)_.`     \\ .-'),-----.              ");
                    gotoxy(20,8); printf("( OO'  .-.  '      |'--...__)|  .---'|   `.'   |(__...--''( OO'  .-.  '             ");
                    gotoxy(20,9); printf("/   |  | |  |      '--.  .--'|  |    |         | |  /  | |/   |  | |  |             ");
                    gotoxy(20,10); printf("\\_) |  |\\|  |         |  |  (|  '--. |  |'.'|  | |  |_.' |\\_) |  |\\|  |             ");
                    gotoxy(20,11); printf("  \\ |  | |  |         |  |   |  .--' |  |   |  | |  .___.'  \\ |  | |  |             ");
                    gotoxy(20,12); printf("   `'  '-'  '         |  |   |  `---.|  |   |  | |  |        `'  '-'  '             ");
                    gotoxy(20,13); printf("     `-----'          `--'   `------'`--'   `--' `--'          `-----'              ");
                    gotoxy(20,14); printf("   ('-.                 ('-.    .-. .-')                            ,---.,---.,---. ");
                    gotoxy(20,15); printf("  ( OO ).-.            ( OO ).-.\\  ( OO )                           |   ||   ||   | ");
                    gotoxy(20,16); printf("  / . --. /   .-----.  / . --. / ;-----.\\  .-'),-----.  ,--. ,--.   |   ||   ||   | ");
                    gotoxy(20,17); printf("  | \\-.  \\   '  .--./  | \\-.  \\  | .-.  | ( OO'  .-.  ' |  | |  |   |   ||   ||   | ");
                    gotoxy(20,18); printf(".-'-'  |  |  |  |('-..-'-'  |  | | '-' /_)/   |  | |  | |  | | .-') |   ||   ||   | ");
                    gotoxy(20,19); printf(".-'-'  |  |  |  |('-..-'-'  |  | | '-' /_)/   |  | |  | |  | | .-') |   ||   ||   | ");
                    gotoxy(20,20); printf(" \\| |_.'  | /_) |OO  )\\| |_.'  | | .-. `. \\_) |  |\\|  | |  |_|( OO )|  .'|  .'|  .' ");
                    gotoxy(20,21); printf("  |  .-.  | ||  |`-'|  |  .-.  | | |  \\  |  \\ |  | |  | |  | | `-' /`--' `--' `--'  ");
                    gotoxy(20,22); printf("  |  | |  |(_'  '--'\\  |  | |  | | '--'  /   `'  '-'  '('  '-'(_.-' .--. .--. .--.  ");
                    gotoxy(20,23); printf("  `--' `--'   `-----'  `--' `--' `------'      `-----'   `-----'    '--' '--' '--'  ");
                    controlpisc++;
                    Sleep(500);
                    }
                    Sleep(1000);
                       
                    system("cls");
                    textcolor(WHITE);} 

      if(tolower(op) == 'a'){
        pontosbom++;system("cls");controlpisc=0;
          while(controlpisc<=5){
                    if(controlpisc==0){textcolor(8);Sleep(50);}
                    if(controlpisc==1){textcolor(LIGHTGREEN);Sleep(50);}
                    if(controlpisc==2){textcolor(8);Sleep(50);}
                    if(controlpisc==3){textcolor(LIGHTGREEN);Sleep(50);}
                    if(controlpisc==4){textcolor(8);Sleep(50);}
                    if(controlpisc==5){textcolor(LIGHTGREEN);Sleep(50);}
                     
                    gotoxy(22,5); printf("      (`-.                              ('-.                                                ");
                    gotoxy(22,6); printf("    _(OO  )_                          _(  OO)                                               ");
                    gotoxy(22,7); printf(",--(_/   ,. \\ .-'),-----.    .-----. (,------.                                              ");
                    gotoxy(22,8); printf("\\   \\   /(__/( OO'  .-.  '  '  .--./  |  .---'                                              ");
                    gotoxy(22,9); printf(" \\   \\ /   / /   |  | |  |  |  |('-.  |  |                                                  ");
                    gotoxy(22,10); printf("  \\   '   /, \\_) |  |\\|  | /_) |OO  )(|  '--.                                               ");
                    gotoxy(22,11); printf("   \\     /__)  \\ |  | |  | ||  |`-'|  |  .--'                                               ");
                    gotoxy(22,12); printf("    \\   /       `'  '-'  '(_'  '--'\\  |  `---.                                              ");
                    gotoxy(22,13); printf("     `-'          `-----'    `-----'  `------'                                              ");
                    gotoxy(22,14); printf("   ('-.                  ('-.  _  .-')   .-') _                             ,---.,---.,---. ");
                    gotoxy(22,15); printf("  ( OO ).-.            _(  OO)( \\( -O ) (  OO) )                            |   ||   ||   | ");
                    gotoxy(22,16); printf("  / . --. /   .-----. (,------.,------. /     '._  .-'),-----.  ,--. ,--.   |   ||   ||   | ");
                    gotoxy(22,17); printf("  | \\-.  \\   '  .--./  |  .---'|   /`. '|'--...__)( OO'  .-.  ' |  | |  |   |   ||   ||   | ");
                    gotoxy(22,18); printf(".-'-'  |  |  |  |('-.  |  |    |  /  | |'--.  .--'/   |  | |  | |  | | .-') |   ||   ||   | ");
                    gotoxy(22,19); printf(" \\| |_.'  | /_) |OO  )(|  '--. |  |_.' |   |  |   \\_) |  |\\|  | |  |_|( OO )|  .'|  .'|  .' ");
                    gotoxy(22,20); printf("  |  .-.  | ||  |`-'|  |  .--' |  .  '.'   |  |     \\ |  | |  | |  | | `-' /`--' `--' `--'  ");
                    gotoxy(22,21); printf("  |  | |  |(_'  '--'\\  |  `---.|  |\\  \\    |  |      `'  '-'  '('  '-'(_.-' .--. .--. .--.  ");
                    gotoxy(22,22); printf(" `--' `--'   `-----'  `------'`--' '--'   `--'        `-----'   `-----'    '--' '--' '--'  ");
                    controlpisc++;
                    Sleep(500);
                  } 
                    Sleep(1000);
                    system("cls");
                    textcolor(WHITE);}
             else {
              pontosmal++;system("cls");controlpisc=0;
              while(controlpisc<=5){
                    if(controlpisc==0){textcolor(8);Sleep(50);}
                    if(controlpisc==1){textcolor(LIGHTRED);Sleep(50);}
                    if(controlpisc==2){textcolor(8);Sleep(50);}
                    if(controlpisc==3){textcolor(LIGHTRED);Sleep(50);}
                    if(controlpisc==4){textcolor(8);Sleep(50);}
                    if(controlpisc==5){textcolor(LIGHTRED);Sleep(50);}
                    
                     gotoxy(24,5);printf("      (`-.                              ('-.                         ");
                     gotoxy(24,6);printf("    _(OO  )_                          _(  OO)                        ");
                     gotoxy(24,7);printf(",--(_/   ,. \\ .-'),-----.    .-----. (,------.                       ");
                     gotoxy(24,8);printf("\\   \\   /(__/( OO'  .-.  '  '  .--./  |  .---'                       ");
                     gotoxy(24,9);printf(" \\   \\ /   / /   |  | |  |  |  |('-.  |  |                           ");
                     gotoxy(24,10);printf("  \\   '   /, \\_) |  |\\|  | /_) |OO  )(|  '--.                        ");
                     gotoxy(24,11);printf("   \\     /__)  \\ |  | |  | ||  |`-'|  |  .--'                        ");
                     gotoxy(24,12);printf("    \\   /       `'  '-'  '(_'  '--'\\  |  `---.                       ");
                     gotoxy(24,13);printf("     `-'          `-----'    `-----'  `------'                       ");
                     gotoxy(24,14);printf("   ('-.  _  .-')  _  .-')                            ,---.,---.,---. ");
                     gotoxy(24,15);printf(" _(  OO)( \\( -O )( \\( -O )                           |   ||   ||   | ");
                     gotoxy(24,16);printf("(,------.,------. ,------.  .-'),-----.  ,--. ,--.   |   ||   ||   | ");
                     gotoxy(24,17);printf(" |  .---'|   /`. '|   /`. '( OO'  .-.  ' |  | |  |   |   ||   ||   | ");
                     gotoxy(24,18);printf(" |  |    |  /  | ||  /  | |/   |  | |  | |  | | .-') |   ||   ||   | ");
                     gotoxy(24,19);printf("(|  '--. |  |_.' ||  |_.' |\\_) |  |\\|  | |  |_|( OO )|  .'|  .'|  .' ");
                     gotoxy(24,20);printf(" |  .--' |  .  '.'|  .  '.'  \\ |  | |  | |  | | `-' /`--' `--' `--'  ");
                     gotoxy(24,21);printf(" |  `---.|  |\\  \\ |  |\\  \\    `'  '-'  '('  '-'(_.-' .--. .--. .--.  ");
                     gotoxy(24,22);printf(" `------'`--' '--'`--' '--'     `-----'   `-----'    '--' '--' '--'  ");
                     controlpisc++;
                     Sleep(500);
                  }
                     
                     Sleep(1000);
                     system("cls");textcolor(WHITE);}
        // QUESTÃO 3
              for (s =30; s>=0;s--){
                textcolor(LIGHTBLUE);
                gotoxy(8, 1);printf("         *******    **     ** ********  ******** **********     **       *******                      ****    ");
                gotoxy(8, 2);printf("        **/////**  /**    /**/**/////  **////// /////**///     ****     **/////**                    */// *   ");
                gotoxy(8, 3);printf("       **     //** /**    /**/**      /**           /**       **//**   **     //**                  /    /*   ");
                textcolor(CYAN);
                gotoxy(8, 4);printf("      /**      /** /**    /**/******* /*********    /**      **  //** /**      /**                     ***    ");
                gotoxy(8, 5);printf("      /**    **/** /**    /**/**////  ////////**    /**     **********/**      /**                    /// *   ");
                gotoxy(8, 6);printf("      //**  // **  /**    /**/**             /**    /**    /**//////**//**     **                    *   /* **");
                textcolor(LIGHTBLUE);
                gotoxy(8, 7);printf("       //******* **//******* /******** ********     /**    /**     /** //*******                    / **** /**");
                gotoxy(8, 8);printf("        /////// //  ///////  //////// ////////      //     //      //   ///////                      ////  // ");
                textcolor(GREEN);
                gotoxy(80, 25);printf("DIFICULDADE  FACIL");textcolor(WHITE);
                gotoxy(55,25);printf("TEMPO");gotoxy(52,26);printf("|");gotoxy(51,27);printf("%02d",s);
                gotoxy(10,24);printf("Acertos -----> %02d", pontosbom);
                gotoxy(10,25);printf("Erros -------> %02d",pontosmal); 
                gotoxy(18, 11);printf("\"As substancias usadas pelos organismos vivos, como fonte de energia e como reserva energetica");
                gotoxy(18,12);printf(",sao, respectivamente: \"");
                gotoxy(18,14);printf("a) agua e glicidios.");
                gotoxy(18,15);printf("b) agua e sais minerais.");
                gotoxy(18,16);printf("c) lipidios e sais minerais.");
                gotoxy(18,17);printf("d) glicidios e sais minerais.");
                gotoxy(18,18);printf("e) glicidios e lipidios.\n\n\t\t    ");
                Sleep(1000);
                if(kbhit()){fflush(stdin);op = getch();toupper(op);break;Sleep(500);}} 


                if(s == 0){pontosmal++;system("cls");
                 while(controlpisc<=5){
                    if(controlpisc==0){textcolor(8);Sleep(50);}
                    if(controlpisc==1){textcolor(LIGHTBLUE);Sleep(50);}
                    if(controlpisc==2){textcolor(8);Sleep(50);}
                    if(controlpisc==3){textcolor(LIGHTBLUE);Sleep(50);}
                    if(controlpisc==4){textcolor(8);Sleep(50);}
                    if(controlpisc==5){textcolor(LIGHTBLUE);Sleep(50);}
                    
                    gotoxy(20,5); printf("                    .-') _     ('-.  _   .-')      _ (`-.                           ");
                    gotoxy(20,6); printf("                   (  OO) )  _(  OO)( '.( OO )_   ( (OO  )                          ");
                    gotoxy(20,7); printf(" .-'),-----.       /     '._(,------.,--.   ,--.)_.`     \\ .-'),-----.              ");
                    gotoxy(20,8); printf("( OO'  .-.  '      |'--...__)|  .---'|   `.'   |(__...--''( OO'  .-.  '             ");
                    gotoxy(20,9); printf("/   |  | |  |      '--.  .--'|  |    |         | |  /  | |/   |  | |  |             ");
                    gotoxy(20,10); printf("\\_) |  |\\|  |         |  |  (|  '--. |  |'.'|  | |  |_.' |\\_) |  |\\|  |             ");
                    gotoxy(20,11); printf("  \\ |  | |  |         |  |   |  .--' |  |   |  | |  .___.'  \\ |  | |  |             ");
                    gotoxy(20,12); printf("   `'  '-'  '         |  |   |  `---.|  |   |  | |  |        `'  '-'  '             ");
                    gotoxy(20,13); printf("     `-----'          `--'   `------'`--'   `--' `--'          `-----'              ");
                    gotoxy(20,14); printf("   ('-.                 ('-.    .-. .-')                            ,---.,---.,---. ");
                    gotoxy(20,15); printf("  ( OO ).-.            ( OO ).-.\\  ( OO )                           |   ||   ||   | ");
                    gotoxy(20,16); printf("  / . --. /   .-----.  / . --. / ;-----.\\  .-'),-----.  ,--. ,--.   |   ||   ||   | ");
                    gotoxy(20,17); printf("  | \\-.  \\   '  .--./  | \\-.  \\  | .-.  | ( OO'  .-.  ' |  | |  |   |   ||   ||   | ");
                    gotoxy(20,18); printf(".-'-'  |  |  |  |('-..-'-'  |  | | '-' /_)/   |  | |  | |  | | .-') |   ||   ||   | ");
                    gotoxy(20,19); printf(".-'-'  |  |  |  |('-..-'-'  |  | | '-' /_)/   |  | |  | |  | | .-') |   ||   ||   | ");
                    gotoxy(20,20); printf(" \\| |_.'  | /_) |OO  )\\| |_.'  | | .-. `. \\_) |  |\\|  | |  |_|( OO )|  .'|  .'|  .' ");
                    gotoxy(20,21); printf("  |  .-.  | ||  |`-'|  |  .-.  | | |  \\  |  \\ |  | |  | |  | | `-' /`--' `--' `--'  ");
                    gotoxy(20,22); printf("  |  | |  |(_'  '--'\\  |  | |  | | '--'  /   `'  '-'  '('  '-'(_.-' .--. .--. .--.  ");
                    gotoxy(20,23); printf("  `--' `--'   `-----'  `--' `--' `------'      `-----'   `-----'    '--' '--' '--'  ");
                    controlpisc++;
                    Sleep(500);
                    }
                    Sleep(1000);
                       
                    system("cls");
                    textcolor(WHITE);} 

      if(tolower(op) == 'e'){
        pontosbom++;system("cls");controlpisc=0;
          while(controlpisc<=5){
                    if(controlpisc==0){textcolor(8);Sleep(50);}
                    if(controlpisc==1){textcolor(LIGHTGREEN);Sleep(50);}
                    if(controlpisc==2){textcolor(8);Sleep(50);}
                    if(controlpisc==3){textcolor(LIGHTGREEN);Sleep(50);}
                    if(controlpisc==4){textcolor(8);Sleep(50);}
                    if(controlpisc==5){textcolor(LIGHTGREEN);Sleep(50);}
                     
                    gotoxy(22,5); printf("      (`-.                              ('-.                                                ");
                    gotoxy(22,6); printf("    _(OO  )_                          _(  OO)                                               ");
                    gotoxy(22,7); printf(",--(_/   ,. \\ .-'),-----.    .-----. (,------.                                              ");
                    gotoxy(22,8); printf("\\   \\   /(__/( OO'  .-.  '  '  .--./  |  .---'                                              ");
                    gotoxy(22,9); printf(" \\   \\ /   / /   |  | |  |  |  |('-.  |  |                                                  ");
                    gotoxy(22,10); printf("  \\   '   /, \\_) |  |\\|  | /_) |OO  )(|  '--.                                               ");
                    gotoxy(22,11); printf("   \\     /__)  \\ |  | |  | ||  |`-'|  |  .--'                                               ");
                    gotoxy(22,12); printf("    \\   /       `'  '-'  '(_'  '--'\\  |  `---.                                              ");
                    gotoxy(22,13); printf("     `-'          `-----'    `-----'  `------'                                              ");
                    gotoxy(22,14); printf("   ('-.                  ('-.  _  .-')   .-') _                             ,---.,---.,---. ");
                    gotoxy(22,15); printf("  ( OO ).-.            _(  OO)( \\( -O ) (  OO) )                            |   ||   ||   | ");
                    gotoxy(22,16); printf("  / . --. /   .-----. (,------.,------. /     '._  .-'),-----.  ,--. ,--.   |   ||   ||   | ");
                    gotoxy(22,17); printf("  | \\-.  \\   '  .--./  |  .---'|   /`. '|'--...__)( OO'  .-.  ' |  | |  |   |   ||   ||   | ");
                    gotoxy(22,18); printf(".-'-'  |  |  |  |('-.  |  |    |  /  | |'--.  .--'/   |  | |  | |  | | .-') |   ||   ||   | ");
                    gotoxy(22,19); printf(" \\| |_.'  | /_) |OO  )(|  '--. |  |_.' |   |  |   \\_) |  |\\|  | |  |_|( OO )|  .'|  .'|  .' ");
                    gotoxy(22,20); printf("  |  .-.  | ||  |`-'|  |  .--' |  .  '.'   |  |     \\ |  | |  | |  | | `-' /`--' `--' `--'  ");
                    gotoxy(22,21); printf("  |  | |  |(_'  '--'\\  |  `---.|  |\\  \\    |  |      `'  '-'  '('  '-'(_.-' .--. .--. .--.  ");
                    gotoxy(22,22); printf(" `--' `--'   `-----'  `------'`--' '--'   `--'        `-----'   `-----'    '--' '--' '--'  ");
                    controlpisc++;
                    Sleep(500);
                  } 
                    Sleep(1000);
                    system("cls");
                    textcolor(WHITE);}
             else {
              pontosmal++;system("cls");controlpisc=0;
              while(controlpisc<=5){
                    if(controlpisc==0){textcolor(8);Sleep(50);}
                    if(controlpisc==1){textcolor(LIGHTRED);Sleep(50);}
                    if(controlpisc==2){textcolor(8);Sleep(50);}
                    if(controlpisc==3){textcolor(LIGHTRED);Sleep(50);}
                    if(controlpisc==4){textcolor(8);Sleep(50);}
                    if(controlpisc==5){textcolor(LIGHTRED);Sleep(50);}
                    
                     gotoxy(24,5);printf("      (`-.                              ('-.                         ");
                     gotoxy(24,6);printf("    _(OO  )_                          _(  OO)                        ");
                     gotoxy(24,7);printf(",--(_/   ,. \\ .-'),-----.    .-----. (,------.                       ");
                     gotoxy(24,8);printf("\\   \\   /(__/( OO'  .-.  '  '  .--./  |  .---'                       ");
                     gotoxy(24,9);printf(" \\   \\ /   / /   |  | |  |  |  |('-.  |  |                           ");
                     gotoxy(24,10);printf("  \\   '   /, \\_) |  |\\|  | /_) |OO  )(|  '--.                        ");
                     gotoxy(24,11);printf("   \\     /__)  \\ |  | |  | ||  |`-'|  |  .--'                        ");
                     gotoxy(24,12);printf("    \\   /       `'  '-'  '(_'  '--'\\  |  `---.                       ");
                     gotoxy(24,13);printf("     `-'          `-----'    `-----'  `------'                       ");
                     gotoxy(24,14);printf("   ('-.  _  .-')  _  .-')                            ,---.,---.,---. ");
                     gotoxy(24,15);printf(" _(  OO)( \\( -O )( \\( -O )                           |   ||   ||   | ");
                     gotoxy(24,16);printf("(,------.,------. ,------.  .-'),-----.  ,--. ,--.   |   ||   ||   | ");
                     gotoxy(24,17);printf(" |  .---'|   /`. '|   /`. '( OO'  .-.  ' |  | |  |   |   ||   ||   | ");
                     gotoxy(24,18);printf(" |  |    |  /  | ||  /  | |/   |  | |  | |  | | .-') |   ||   ||   | ");
                     gotoxy(24,19);printf("(|  '--. |  |_.' ||  |_.' |\\_) |  |\\|  | |  |_|( OO )|  .'|  .'|  .' ");
                     gotoxy(24,20);printf(" |  .--' |  .  '.'|  .  '.'  \\ |  | |  | |  | | `-' /`--' `--' `--'  ");
                     gotoxy(24,21);printf(" |  `---.|  |\\  \\ |  |\\  \\    `'  '-'  '('  '-'(_.-' .--. .--. .--.  ");
                     gotoxy(24,22);printf(" `------'`--' '--'`--' '--'     `-----'   `-----'    '--' '--' '--'  ");
                     controlpisc++;
                     Sleep(500);
                  }
                     
                     Sleep(1000);
                     system("cls");textcolor(WHITE);}

      // QUESTÃO 4
          for (s =30; s>=0;s--){
                textcolor(LIGHTBLUE);
                gotoxy(8, 1);printf("         *******    **     ** ********  ******** **********     **       *******                        **    ");
                gotoxy(8, 2);printf("        **/////**  /**    /**/**/////  **////// /////**///     ****     **/////**                      */*    ");
                gotoxy(8, 3);printf("       **     //** /**    /**/**      /**           /**       **//**   **     //**                    * /*    ");
                textcolor(CYAN);
                gotoxy(8, 4);printf("      /**      /** /**    /**/******* /*********    /**      **  //** /**      /**                   ******   ");
                gotoxy(8, 5);printf("      /**    **/** /**    /**/**////  ////////**    /**     **********/**      /**                  /////*    ");
                gotoxy(8, 6);printf("      //**  // **  /**    /**/**             /**    /**    /**//////**//**     **                       /*  **");
                textcolor(LIGHTBLUE);
                gotoxy(8, 7);printf("       //******* **//******* /******** ********     /**    /**     /** //*******                        /* /**");
                gotoxy(8, 8);printf("        /////// //  ///////  //////// ////////      //     //      //   ///////                         /  // ");
                textcolor(GREEN);
                gotoxy(80, 25);printf("DIFICULDADE  FACIL");textcolor(WHITE);
                gotoxy(55,25);printf("TEMPO");gotoxy(52,26);printf("|");gotoxy(51,27);printf("%02d",s);
                gotoxy(10,24);printf("Acertos -----> %02d", pontosbom);
                gotoxy(10,25);printf("Erros -------> %02d",pontosmal); 
                gotoxy(26, 11);printf("\"A(s) principal(is) substancia(s) organica(s) que encontramos nas ");
                gotoxy(26,12);printf("celulas dos seres vivos animais e (sao): \"");
                gotoxy(26,14);printf("a) gorduras.");
                gotoxy(26,15);printf("b) sais.");
                gotoxy(26,16);printf("c) agua.");
                gotoxy(26,17);printf("d) proteinas.");
                gotoxy(26,18);printf("e) vitaminas.\n\n\t\t    ");
                Sleep(1000);
                if(kbhit()){fflush(stdin);op = getch();toupper(op);break;Sleep(500);}} 


                if(s == 0){pontosmal++;system("cls");
                 while(controlpisc<=5){
                    if(controlpisc==0){textcolor(8);Sleep(50);}
                    if(controlpisc==1){textcolor(LIGHTBLUE);Sleep(50);}
                    if(controlpisc==2){textcolor(8);Sleep(50);}
                    if(controlpisc==3){textcolor(LIGHTBLUE);Sleep(50);}
                    if(controlpisc==4){textcolor(8);Sleep(50);}
                    if(controlpisc==5){textcolor(LIGHTBLUE);Sleep(50);}
                    
                    gotoxy(20,5); printf("                    .-') _     ('-.  _   .-')      _ (`-.                           ");
                    gotoxy(20,6); printf("                   (  OO) )  _(  OO)( '.( OO )_   ( (OO  )                          ");
                    gotoxy(20,7); printf(" .-'),-----.       /     '._(,------.,--.   ,--.)_.`     \\ .-'),-----.              ");
                    gotoxy(20,8); printf("( OO'  .-.  '      |'--...__)|  .---'|   `.'   |(__...--''( OO'  .-.  '             ");
                    gotoxy(20,9); printf("/   |  | |  |      '--.  .--'|  |    |         | |  /  | |/   |  | |  |             ");
                    gotoxy(20,10); printf("\\_) |  |\\|  |         |  |  (|  '--. |  |'.'|  | |  |_.' |\\_) |  |\\|  |             ");
                    gotoxy(20,11); printf("  \\ |  | |  |         |  |   |  .--' |  |   |  | |  .___.'  \\ |  | |  |             ");
                    gotoxy(20,12); printf("   `'  '-'  '         |  |   |  `---.|  |   |  | |  |        `'  '-'  '             ");
                    gotoxy(20,13); printf("     `-----'          `--'   `------'`--'   `--' `--'          `-----'              ");
                    gotoxy(20,14); printf("   ('-.                 ('-.    .-. .-')                            ,---.,---.,---. ");
                    gotoxy(20,15); printf("  ( OO ).-.            ( OO ).-.\\  ( OO )                           |   ||   ||   | ");
                    gotoxy(20,16); printf("  / . --. /   .-----.  / . --. / ;-----.\\  .-'),-----.  ,--. ,--.   |   ||   ||   | ");
                    gotoxy(20,17); printf("  | \\-.  \\   '  .--./  | \\-.  \\  | .-.  | ( OO'  .-.  ' |  | |  |   |   ||   ||   | ");
                    gotoxy(20,18); printf(".-'-'  |  |  |  |('-..-'-'  |  | | '-' /_)/   |  | |  | |  | | .-') |   ||   ||   | ");
                    gotoxy(20,19); printf(".-'-'  |  |  |  |('-..-'-'  |  | | '-' /_)/   |  | |  | |  | | .-') |   ||   ||   | ");
                    gotoxy(20,20); printf(" \\| |_.'  | /_) |OO  )\\| |_.'  | | .-. `. \\_) |  |\\|  | |  |_|( OO )|  .'|  .'|  .' ");
                    gotoxy(20,21); printf("  |  .-.  | ||  |`-'|  |  .-.  | | |  \\  |  \\ |  | |  | |  | | `-' /`--' `--' `--'  ");
                    gotoxy(20,22); printf("  |  | |  |(_'  '--'\\  |  | |  | | '--'  /   `'  '-'  '('  '-'(_.-' .--. .--. .--.  ");
                    gotoxy(20,23); printf("  `--' `--'   `-----'  `--' `--' `------'      `-----'   `-----'    '--' '--' '--'  ");
                    controlpisc++;
                    Sleep(500);
                    }
                    Sleep(1000);
                       
                    system("cls");
                    textcolor(WHITE);} 

      if(tolower(op) == 'c'){
        pontosbom++;system("cls");controlpisc=0;
          while(controlpisc<=5){
                    if(controlpisc==0){textcolor(8);Sleep(50);}
                    if(controlpisc==1){textcolor(LIGHTGREEN);Sleep(50);}
                    if(controlpisc==2){textcolor(8);Sleep(50);}
                    if(controlpisc==3){textcolor(LIGHTGREEN);Sleep(50);}
                    if(controlpisc==4){textcolor(8);Sleep(50);}
                    if(controlpisc==5){textcolor(LIGHTGREEN);Sleep(50);}
                     
                    gotoxy(22,5); printf("      (`-.                              ('-.                                                ");
                    gotoxy(22,6); printf("    _(OO  )_                          _(  OO)                                               ");
                    gotoxy(22,7); printf(",--(_/   ,. \\ .-'),-----.    .-----. (,------.                                              ");
                    gotoxy(22,8); printf("\\   \\   /(__/( OO'  .-.  '  '  .--./  |  .---'                                              ");
                    gotoxy(22,9); printf(" \\   \\ /   / /   |  | |  |  |  |('-.  |  |                                                  ");
                    gotoxy(22,10); printf("  \\   '   /, \\_) |  |\\|  | /_) |OO  )(|  '--.                                               ");
                    gotoxy(22,11); printf("   \\     /__)  \\ |  | |  | ||  |`-'|  |  .--'                                               ");
                    gotoxy(22,12); printf("    \\   /       `'  '-'  '(_'  '--'\\  |  `---.                                              ");
                    gotoxy(22,13); printf("     `-'          `-----'    `-----'  `------'                                              ");
                    gotoxy(22,14); printf("   ('-.                  ('-.  _  .-')   .-') _                             ,---.,---.,---. ");
                    gotoxy(22,15); printf("  ( OO ).-.            _(  OO)( \\( -O ) (  OO) )                            |   ||   ||   | ");
                    gotoxy(22,16); printf("  / . --. /   .-----. (,------.,------. /     '._  .-'),-----.  ,--. ,--.   |   ||   ||   | ");
                    gotoxy(22,17); printf("  | \\-.  \\   '  .--./  |  .---'|   /`. '|'--...__)( OO'  .-.  ' |  | |  |   |   ||   ||   | ");
                    gotoxy(22,18); printf(".-'-'  |  |  |  |('-.  |  |    |  /  | |'--.  .--'/   |  | |  | |  | | .-') |   ||   ||   | ");
                    gotoxy(22,19); printf(" \\| |_.'  | /_) |OO  )(|  '--. |  |_.' |   |  |   \\_) |  |\\|  | |  |_|( OO )|  .'|  .'|  .' ");
                    gotoxy(22,20); printf("  |  .-.  | ||  |`-'|  |  .--' |  .  '.'   |  |     \\ |  | |  | |  | | `-' /`--' `--' `--'  ");
                    gotoxy(22,21); printf("  |  | |  |(_'  '--'\\  |  `---.|  |\\  \\    |  |      `'  '-'  '('  '-'(_.-' .--. .--. .--.  ");
                    gotoxy(22,22); printf(" `--' `--'   `-----'  `------'`--' '--'   `--'        `-----'   `-----'    '--' '--' '--'  ");
                    controlpisc++;
                    Sleep(500);
                  } 
                    Sleep(1000);
                    system("cls");
                    textcolor(WHITE);}
             else {
              pontosmal++;system("cls");controlpisc=0;
              while(controlpisc<=5){
                    if(controlpisc==0){textcolor(8);Sleep(50);}
                    if(controlpisc==1){textcolor(LIGHTRED);Sleep(50);}
                    if(controlpisc==2){textcolor(8);Sleep(50);}
                    if(controlpisc==3){textcolor(LIGHTRED);Sleep(50);}
                    if(controlpisc==4){textcolor(8);Sleep(50);}
                    if(controlpisc==5){textcolor(LIGHTRED);Sleep(50);}
                    
                     gotoxy(24,5);printf("      (`-.                              ('-.                         ");
                     gotoxy(24,6);printf("    _(OO  )_                          _(  OO)                        ");
                     gotoxy(24,7);printf(",--(_/   ,. \\ .-'),-----.    .-----. (,------.                       ");
                     gotoxy(24,8);printf("\\   \\   /(__/( OO'  .-.  '  '  .--./  |  .---'                       ");
                     gotoxy(24,9);printf(" \\   \\ /   / /   |  | |  |  |  |('-.  |  |                           ");
                     gotoxy(24,10);printf("  \\   '   /, \\_) |  |\\|  | /_) |OO  )(|  '--.                        ");
                     gotoxy(24,11);printf("   \\     /__)  \\ |  | |  | ||  |`-'|  |  .--'                        ");
                     gotoxy(24,12);printf("    \\   /       `'  '-'  '(_'  '--'\\  |  `---.                       ");
                     gotoxy(24,13);printf("     `-'          `-----'    `-----'  `------'                       ");
                     gotoxy(24,14);printf("   ('-.  _  .-')  _  .-')                            ,---.,---.,---. ");
                     gotoxy(24,15);printf(" _(  OO)( \\( -O )( \\( -O )                           |   ||   ||   | ");
                     gotoxy(24,16);printf("(,------.,------. ,------.  .-'),-----.  ,--. ,--.   |   ||   ||   | ");
                     gotoxy(24,17);printf(" |  .---'|   /`. '|   /`. '( OO'  .-.  ' |  | |  |   |   ||   ||   | ");
                     gotoxy(24,18);printf(" |  |    |  /  | ||  /  | |/   |  | |  | |  | | .-') |   ||   ||   | ");
                     gotoxy(24,19);printf("(|  '--. |  |_.' ||  |_.' |\\_) |  |\\|  | |  |_|( OO )|  .'|  .'|  .' ");
                     gotoxy(24,20);printf(" |  .--' |  .  '.'|  .  '.'  \\ |  | |  | |  | | `-' /`--' `--' `--'  ");
                     gotoxy(24,21);printf(" |  `---.|  |\\  \\ |  |\\  \\    `'  '-'  '('  '-'(_.-' .--. .--. .--.  ");
                     gotoxy(24,22);printf(" `------'`--' '--'`--' '--'     `-----'   `-----'    '--' '--' '--'  ");
                     controlpisc++;
                     Sleep(500);
                  }
                     
                     Sleep(1000);
                     system("cls");textcolor(WHITE);}

      // QUESTÃO 5
          for (s =30; s>=0;s--){
                textcolor(LIGHTBLUE);
                gotoxy(8, 1);printf("         *******    **     ** ********  ******** **********     **       *******                     ******   ");
                gotoxy(8, 2);printf("        **/////**  /**    /**/**/////  **////// /////**///     ****     **/////**                   /*////    ");
                gotoxy(8, 3);printf("       **     //** /**    /**/**      /**           /**       **//**   **     //**                  /*****    ");
                textcolor(CYAN);
                gotoxy(8, 4);printf("      /**      /** /**    /**/******* /*********    /**      **  //** /**      /**                  ///// *   ");
                gotoxy(8, 5);printf("      /**    **/** /**    /**/**////  ////////**    /**     **********/**      /**                       /*   ");
                gotoxy(8, 6);printf("      //**  // **  /**    /**/**             /**    /**    /**//////**//**     **                    *   /* **");
                textcolor(LIGHTBLUE);
                gotoxy(8, 7);printf("       //******* **//******* /******** ********     /**    /**     /** //*******                    / **** /**");
                gotoxy(8, 8);printf("        /////// //  ///////  //////// ////////      //     //      //   ///////                      ////  // ");
                textcolor(YELLOW);
                gotoxy(80, 25);printf("DIFICULDADE  MEDIO");textcolor(WHITE);
                gotoxy(55,25);printf("TEMPO");gotoxy(52,26);printf("|");gotoxy(51,27);printf("%02d",s);
                gotoxy(10,24);printf("Acertos -----> %02d", pontosbom);
                gotoxy(10,25);printf("Erros -------> %02d",pontosmal); 
                gotoxy(22, 11);printf("\"Os lipidios mais comumente usados na nossa alimentacao sao integrantes do grupo dos: \"");
                gotoxy(22,13);printf("a) monogliceridios.");
                gotoxy(22,14);printf("b) trigliceridios."); 
                gotoxy(22,15);printf("c) cerideos");
                gotoxy(22,16);printf("d) esteroides.");
                gotoxy(22,17);printf("e) lipidios complexos.\n\n\t\t    ");
                Sleep(1000);
                if(kbhit()){fflush(stdin);op = getch();toupper(op);break;Sleep(500);}} 


                if(s == 0){pontosmal++;system("cls");
                 while(controlpisc<=5){
                    if(controlpisc==0){textcolor(8);Sleep(50);}
                    if(controlpisc==1){textcolor(LIGHTBLUE);Sleep(50);}
                    if(controlpisc==2){textcolor(8);Sleep(50);}
                    if(controlpisc==3){textcolor(LIGHTBLUE);Sleep(50);}
                    if(controlpisc==4){textcolor(8);Sleep(50);}
                    if(controlpisc==5){textcolor(LIGHTBLUE);Sleep(50);}
                    
                    gotoxy(20,5); printf("                    .-') _     ('-.  _   .-')      _ (`-.                           ");
                    gotoxy(20,6); printf("                   (  OO) )  _(  OO)( '.( OO )_   ( (OO  )                          ");
                    gotoxy(20,7); printf(" .-'),-----.       /     '._(,------.,--.   ,--.)_.`     \\ .-'),-----.              ");
                    gotoxy(20,8); printf("( OO'  .-.  '      |'--...__)|  .---'|   `.'   |(__...--''( OO'  .-.  '             ");
                    gotoxy(20,9); printf("/   |  | |  |      '--.  .--'|  |    |         | |  /  | |/   |  | |  |             ");
                    gotoxy(20,10); printf("\\_) |  |\\|  |         |  |  (|  '--. |  |'.'|  | |  |_.' |\\_) |  |\\|  |             ");
                    gotoxy(20,11); printf("  \\ |  | |  |         |  |   |  .--' |  |   |  | |  .___.'  \\ |  | |  |             ");
                    gotoxy(20,12); printf("   `'  '-'  '         |  |   |  `---.|  |   |  | |  |        `'  '-'  '             ");
                    gotoxy(20,13); printf("     `-----'          `--'   `------'`--'   `--' `--'          `-----'              ");
                    gotoxy(20,14); printf("   ('-.                 ('-.    .-. .-')                            ,---.,---.,---. ");
                    gotoxy(20,15); printf("  ( OO ).-.            ( OO ).-.\\  ( OO )                           |   ||   ||   | ");
                    gotoxy(20,16); printf("  / . --. /   .-----.  / . --. / ;-----.\\  .-'),-----.  ,--. ,--.   |   ||   ||   | ");
                    gotoxy(20,17); printf("  | \\-.  \\   '  .--./  | \\-.  \\  | .-.  | ( OO'  .-.  ' |  | |  |   |   ||   ||   | ");
                    gotoxy(20,18); printf(".-'-'  |  |  |  |('-..-'-'  |  | | '-' /_)/   |  | |  | |  | | .-') |   ||   ||   | ");
                    gotoxy(20,19); printf(".-'-'  |  |  |  |('-..-'-'  |  | | '-' /_)/   |  | |  | |  | | .-') |   ||   ||   | ");
                    gotoxy(20,20); printf(" \\| |_.'  | /_) |OO  )\\| |_.'  | | .-. `. \\_) |  |\\|  | |  |_|( OO )|  .'|  .'|  .' ");
                    gotoxy(20,21); printf("  |  .-.  | ||  |`-'|  |  .-.  | | |  \\  |  \\ |  | |  | |  | | `-' /`--' `--' `--'  ");
                    gotoxy(20,22); printf("  |  | |  |(_'  '--'\\  |  | |  | | '--'  /   `'  '-'  '('  '-'(_.-' .--. .--. .--.  ");
                    gotoxy(20,23); printf("  `--' `--'   `-----'  `--' `--' `------'      `-----'   `-----'    '--' '--' '--'  ");
                    controlpisc++;
                    Sleep(500);
                    }
                    Sleep(1000);
                       
                    system("cls");
                    textcolor(WHITE);} 

      if(tolower(op) == 'b'){
        pontosbom++;system("cls");controlpisc=0;
          while(controlpisc<=5){
                    if(controlpisc==0){textcolor(8);Sleep(50);}
                    if(controlpisc==1){textcolor(LIGHTGREEN);Sleep(50);}
                    if(controlpisc==2){textcolor(8);Sleep(50);}
                    if(controlpisc==3){textcolor(LIGHTGREEN);Sleep(50);}
                    if(controlpisc==4){textcolor(8);Sleep(50);}
                    if(controlpisc==5){textcolor(LIGHTGREEN);Sleep(50);}
                     
                    gotoxy(22,5); printf("      (`-.                              ('-.                                                ");
                    gotoxy(22,6); printf("    _(OO  )_                          _(  OO)                                               ");
                    gotoxy(22,7); printf(",--(_/   ,. \\ .-'),-----.    .-----. (,------.                                              ");
                    gotoxy(22,8); printf("\\   \\   /(__/( OO'  .-.  '  '  .--./  |  .---'                                              ");
                    gotoxy(22,9); printf(" \\   \\ /   / /   |  | |  |  |  |('-.  |  |                                                  ");
                    gotoxy(22,10); printf("  \\   '   /, \\_) |  |\\|  | /_) |OO  )(|  '--.                                               ");
                    gotoxy(22,11); printf("   \\     /__)  \\ |  | |  | ||  |`-'|  |  .--'                                               ");
                    gotoxy(22,12); printf("    \\   /       `'  '-'  '(_'  '--'\\  |  `---.                                              ");
                    gotoxy(22,13); printf("     `-'          `-----'    `-----'  `------'                                              ");
                    gotoxy(22,14); printf("   ('-.                  ('-.  _  .-')   .-') _                             ,---.,---.,---. ");
                    gotoxy(22,15); printf("  ( OO ).-.            _(  OO)( \\( -O ) (  OO) )                            |   ||   ||   | ");
                    gotoxy(22,16); printf("  / . --. /   .-----. (,------.,------. /     '._  .-'),-----.  ,--. ,--.   |   ||   ||   | ");
                    gotoxy(22,17); printf("  | \\-.  \\   '  .--./  |  .---'|   /`. '|'--...__)( OO'  .-.  ' |  | |  |   |   ||   ||   | ");
                    gotoxy(22,18); printf(".-'-'  |  |  |  |('-.  |  |    |  /  | |'--.  .--'/   |  | |  | |  | | .-') |   ||   ||   | ");
                    gotoxy(22,19); printf(" \\| |_.'  | /_) |OO  )(|  '--. |  |_.' |   |  |   \\_) |  |\\|  | |  |_|( OO )|  .'|  .'|  .' ");
                    gotoxy(22,20); printf("  |  .-.  | ||  |`-'|  |  .--' |  .  '.'   |  |     \\ |  | |  | |  | | `-' /`--' `--' `--'  ");
                    gotoxy(22,21); printf("  |  | |  |(_'  '--'\\  |  `---.|  |\\  \\    |  |      `'  '-'  '('  '-'(_.-' .--. .--. .--.  ");
                    gotoxy(22,22); printf(" `--' `--'   `-----'  `------'`--' '--'   `--'        `-----'   `-----'    '--' '--' '--'  ");
                    controlpisc++;
                    Sleep(500);
                  } 
                    Sleep(1000);
                    system("cls");
                    textcolor(WHITE);}
             else {
              pontosmal++;system("cls");controlpisc=0;
              while(controlpisc<=5){
                    if(controlpisc==0){textcolor(8);Sleep(50);}
                    if(controlpisc==1){textcolor(LIGHTRED);Sleep(50);}
                    if(controlpisc==2){textcolor(8);Sleep(50);}
                    if(controlpisc==3){textcolor(LIGHTRED);Sleep(50);}
                    if(controlpisc==4){textcolor(8);Sleep(50);}
                    if(controlpisc==5){textcolor(LIGHTRED);Sleep(50);}
                    
                     gotoxy(24,5);printf("      (`-.                              ('-.                         ");
                     gotoxy(24,6);printf("    _(OO  )_                          _(  OO)                        ");
                     gotoxy(24,7);printf(",--(_/   ,. \\ .-'),-----.    .-----. (,------.                       ");
                     gotoxy(24,8);printf("\\   \\   /(__/( OO'  .-.  '  '  .--./  |  .---'                       ");
                     gotoxy(24,9);printf(" \\   \\ /   / /   |  | |  |  |  |('-.  |  |                           ");
                     gotoxy(24,10);printf("  \\   '   /, \\_) |  |\\|  | /_) |OO  )(|  '--.                        ");
                     gotoxy(24,11);printf("   \\     /__)  \\ |  | |  | ||  |`-'|  |  .--'                        ");
                     gotoxy(24,12);printf("    \\   /       `'  '-'  '(_'  '--'\\  |  `---.                       ");
                     gotoxy(24,13);printf("     `-'          `-----'    `-----'  `------'                       ");
                     gotoxy(24,14);printf("   ('-.  _  .-')  _  .-')                            ,---.,---.,---. ");
                     gotoxy(24,15);printf(" _(  OO)( \\( -O )( \\( -O )                           |   ||   ||   | ");
                     gotoxy(24,16);printf("(,------.,------. ,------.  .-'),-----.  ,--. ,--.   |   ||   ||   | ");
                     gotoxy(24,17);printf(" |  .---'|   /`. '|   /`. '( OO'  .-.  ' |  | |  |   |   ||   ||   | ");
                     gotoxy(24,18);printf(" |  |    |  /  | ||  /  | |/   |  | |  | |  | | .-') |   ||   ||   | ");
                     gotoxy(24,19);printf("(|  '--. |  |_.' ||  |_.' |\\_) |  |\\|  | |  |_|( OO )|  .'|  .'|  .' ");
                     gotoxy(24,20);printf(" |  .--' |  .  '.'|  .  '.'  \\ |  | |  | |  | | `-' /`--' `--' `--'  ");
                     gotoxy(24,21);printf(" |  `---.|  |\\  \\ |  |\\  \\    `'  '-'  '('  '-'(_.-' .--. .--. .--.  ");
                     gotoxy(24,22);printf(" `------'`--' '--'`--' '--'     `-----'   `-----'    '--' '--' '--'  ");
                     controlpisc++;
                     Sleep(500);
                  }
                     
                     Sleep(1000);
                     system("cls");textcolor(WHITE);}
      
      // QUESTÃO 6
          for (s =30; s>=0;s--){
                textcolor(LIGHTBLUE);
                gotoxy(8, 1);printf("         *******    **     ** ********  ******** **********     **       *******                      ****    ");
                gotoxy(8, 2);printf("        **/////**  /**    /**/**/////  **////// /////**///     ****     **/////**                    */// *   ");
                gotoxy(8, 3);printf("       **     //** /**    /**/**      /**           /**       **//**   **     //**                  /*   /    ");
                textcolor(CYAN);
                gotoxy(8, 4);printf("      /**      /** /**    /**/******* /*********    /**      **  //** /**      /**                  /*****    ");
                gotoxy(8, 5);printf("      /**    **/** /**    /**/**////  ////////**    /**     **********/**      /**                  /*/// *   ");
                gotoxy(8, 6);printf("      //**  // **  /**    /**/**             /**    /**    /**//////**//**     **                   /*   /* **");
                textcolor(LIGHTBLUE);
                gotoxy(8, 7);printf("       //******* **//******* /******** ********     /**    /**     /** //*******                    / **** /**");
                gotoxy(8, 8);printf("        /////// //  ///////  //////// ////////      //     //      //   ///////                      ////  // ");
                textcolor(YELLOW);
                gotoxy(80, 25);printf("DIFICULDADE  MEDIO");textcolor(WHITE);
                gotoxy(55,25);printf("TEMPO");gotoxy(52,26);printf("|");gotoxy(51,27);printf("%02d",s);
                gotoxy(10,24);printf("Acertos -----> %02d", pontosbom);
                gotoxy(10,25);printf("Erros -------> %02d",pontosmal); 
                gotoxy(22, 11);printf("\"Que tipo de substancia impermeabiliza o tecido vegetal contra a ");
                gotoxy(22,12);printf("perda excessiva de agua e fornece energia?\"");
                gotoxy(22,14);printf("a) acidos nucleicos.");
                gotoxy(22,15);printf("b) proteinas."); 
                gotoxy(22,16);printf("c) lipidios.");
                gotoxy(22,17);printf("d) vitaminas.");
                gotoxy(22,18);printf("e) ions inorganicos.\n\n\t\t    ");
                Sleep(1000);
                if(kbhit()){fflush(stdin);op = getch();toupper(op);break;Sleep(500);}} 


                if(s == 0){pontosmal++;system("cls");
                 while(controlpisc<=5){
                    if(controlpisc==0){textcolor(8);Sleep(50);}
                    if(controlpisc==1){textcolor(LIGHTBLUE);Sleep(50);}
                    if(controlpisc==2){textcolor(8);Sleep(50);}
                    if(controlpisc==3){textcolor(LIGHTBLUE);Sleep(50);}
                    if(controlpisc==4){textcolor(8);Sleep(50);}
                    if(controlpisc==5){textcolor(LIGHTBLUE);Sleep(50);}
                    
                    gotoxy(20,5); printf("                    .-') _     ('-.  _   .-')      _ (`-.                           ");
                    gotoxy(20,6); printf("                   (  OO) )  _(  OO)( '.( OO )_   ( (OO  )                          ");
                    gotoxy(20,7); printf(" .-'),-----.       /     '._(,------.,--.   ,--.)_.`     \\ .-'),-----.              ");
                    gotoxy(20,8); printf("( OO'  .-.  '      |'--...__)|  .---'|   `.'   |(__...--''( OO'  .-.  '             ");
                    gotoxy(20,9); printf("/   |  | |  |      '--.  .--'|  |    |         | |  /  | |/   |  | |  |             ");
                    gotoxy(20,10); printf("\\_) |  |\\|  |         |  |  (|  '--. |  |'.'|  | |  |_.' |\\_) |  |\\|  |             ");
                    gotoxy(20,11); printf("  \\ |  | |  |         |  |   |  .--' |  |   |  | |  .___.'  \\ |  | |  |             ");
                    gotoxy(20,12); printf("   `'  '-'  '         |  |   |  `---.|  |   |  | |  |        `'  '-'  '             ");
                    gotoxy(20,13); printf("     `-----'          `--'   `------'`--'   `--' `--'          `-----'              ");
                    gotoxy(20,14); printf("   ('-.                 ('-.    .-. .-')                            ,---.,---.,---. ");
                    gotoxy(20,15); printf("  ( OO ).-.            ( OO ).-.\\  ( OO )                           |   ||   ||   | ");
                    gotoxy(20,16); printf("  / . --. /   .-----.  / . --. / ;-----.\\  .-'),-----.  ,--. ,--.   |   ||   ||   | ");
                    gotoxy(20,17); printf("  | \\-.  \\   '  .--./  | \\-.  \\  | .-.  | ( OO'  .-.  ' |  | |  |   |   ||   ||   | ");
                    gotoxy(20,18); printf(".-'-'  |  |  |  |('-..-'-'  |  | | '-' /_)/   |  | |  | |  | | .-') |   ||   ||   | ");
                    gotoxy(20,19); printf(".-'-'  |  |  |  |('-..-'-'  |  | | '-' /_)/   |  | |  | |  | | .-') |   ||   ||   | ");
                    gotoxy(20,20); printf(" \\| |_.'  | /_) |OO  )\\| |_.'  | | .-. `. \\_) |  |\\|  | |  |_|( OO )|  .'|  .'|  .' ");
                    gotoxy(20,21); printf("  |  .-.  | ||  |`-'|  |  .-.  | | |  \\  |  \\ |  | |  | |  | | `-' /`--' `--' `--'  ");
                    gotoxy(20,22); printf("  |  | |  |(_'  '--'\\  |  | |  | | '--'  /   `'  '-'  '('  '-'(_.-' .--. .--. .--.  ");
                    gotoxy(20,23); printf("  `--' `--'   `-----'  `--' `--' `------'      `-----'   `-----'    '--' '--' '--'  ");
                    controlpisc++;
                    Sleep(500);
                    }
                    Sleep(1000);
                       
                    system("cls");
                    textcolor(WHITE);} 

      if(tolower(op) == 'c'){
        pontosbom++;system("cls");controlpisc=0;
          while(controlpisc<=5){
                    if(controlpisc==0){textcolor(8);Sleep(50);}
                    if(controlpisc==1){textcolor(LIGHTGREEN);Sleep(50);}
                    if(controlpisc==2){textcolor(8);Sleep(50);}
                    if(controlpisc==3){textcolor(LIGHTGREEN);Sleep(50);}
                    if(controlpisc==4){textcolor(8);Sleep(50);}
                    if(controlpisc==5){textcolor(LIGHTGREEN);Sleep(50);}
                     
                    gotoxy(22,5); printf("      (`-.                              ('-.                                                ");
                    gotoxy(22,6); printf("    _(OO  )_                          _(  OO)                                               ");
                    gotoxy(22,7); printf(",--(_/   ,. \\ .-'),-----.    .-----. (,------.                                              ");
                    gotoxy(22,8); printf("\\   \\   /(__/( OO'  .-.  '  '  .--./  |  .---'                                              ");
                    gotoxy(22,9); printf(" \\   \\ /   / /   |  | |  |  |  |('-.  |  |                                                  ");
                    gotoxy(22,10); printf("  \\   '   /, \\_) |  |\\|  | /_) |OO  )(|  '--.                                               ");
                    gotoxy(22,11); printf("   \\     /__)  \\ |  | |  | ||  |`-'|  |  .--'                                               ");
                    gotoxy(22,12); printf("    \\   /       `'  '-'  '(_'  '--'\\  |  `---.                                              ");
                    gotoxy(22,13); printf("     `-'          `-----'    `-----'  `------'                                              ");
                    gotoxy(22,14); printf("   ('-.                  ('-.  _  .-')   .-') _                             ,---.,---.,---. ");
                    gotoxy(22,15); printf("  ( OO ).-.            _(  OO)( \\( -O ) (  OO) )                            |   ||   ||   | ");
                    gotoxy(22,16); printf("  / . --. /   .-----. (,------.,------. /     '._  .-'),-----.  ,--. ,--.   |   ||   ||   | ");
                    gotoxy(22,17); printf("  | \\-.  \\   '  .--./  |  .---'|   /`. '|'--...__)( OO'  .-.  ' |  | |  |   |   ||   ||   | ");
                    gotoxy(22,18); printf(".-'-'  |  |  |  |('-.  |  |    |  /  | |'--.  .--'/   |  | |  | |  | | .-') |   ||   ||   | ");
                    gotoxy(22,19); printf(" \\| |_.'  | /_) |OO  )(|  '--. |  |_.' |   |  |   \\_) |  |\\|  | |  |_|( OO )|  .'|  .'|  .' ");
                    gotoxy(22,20); printf("  |  .-.  | ||  |`-'|  |  .--' |  .  '.'   |  |     \\ |  | |  | |  | | `-' /`--' `--' `--'  ");
                    gotoxy(22,21); printf("  |  | |  |(_'  '--'\\  |  `---.|  |\\  \\    |  |      `'  '-'  '('  '-'(_.-' .--. .--. .--.  ");
                    gotoxy(22,22); printf(" `--' `--'   `-----'  `------'`--' '--'   `--'        `-----'   `-----'    '--' '--' '--'  ");
                    controlpisc++;
                    Sleep(500);
                  } 
                    Sleep(1000);
                    system("cls");
                    textcolor(WHITE);}
             else {
              pontosmal++;system("cls");controlpisc=0;
              while(controlpisc<=5){
                    if(controlpisc==0){textcolor(8);Sleep(50);}
                    if(controlpisc==1){textcolor(LIGHTRED);Sleep(50);}
                    if(controlpisc==2){textcolor(8);Sleep(50);}
                    if(controlpisc==3){textcolor(LIGHTRED);Sleep(50);}
                    if(controlpisc==4){textcolor(8);Sleep(50);}
                    if(controlpisc==5){textcolor(LIGHTRED);Sleep(50);}
                    
                     gotoxy(24,5);printf("      (`-.                              ('-.                         ");
                     gotoxy(24,6);printf("    _(OO  )_                          _(  OO)                        ");
                     gotoxy(24,7);printf(",--(_/   ,. \\ .-'),-----.    .-----. (,------.                       ");
                     gotoxy(24,8);printf("\\   \\   /(__/( OO'  .-.  '  '  .--./  |  .---'                       ");
                     gotoxy(24,9);printf(" \\   \\ /   / /   |  | |  |  |  |('-.  |  |                           ");
                     gotoxy(24,10);printf("  \\   '   /, \\_) |  |\\|  | /_) |OO  )(|  '--.                        ");
                     gotoxy(24,11);printf("   \\     /__)  \\ |  | |  | ||  |`-'|  |  .--'                        ");
                     gotoxy(24,12);printf("    \\   /       `'  '-'  '(_'  '--'\\  |  `---.                       ");
                     gotoxy(24,13);printf("     `-'          `-----'    `-----'  `------'                       ");
                     gotoxy(24,14);printf("   ('-.  _  .-')  _  .-')                            ,---.,---.,---. ");
                     gotoxy(24,15);printf(" _(  OO)( \\( -O )( \\( -O )                           |   ||   ||   | ");
                     gotoxy(24,16);printf("(,------.,------. ,------.  .-'),-----.  ,--. ,--.   |   ||   ||   | ");
                     gotoxy(24,17);printf(" |  .---'|   /`. '|   /`. '( OO'  .-.  ' |  | |  |   |   ||   ||   | ");
                     gotoxy(24,18);printf(" |  |    |  /  | ||  /  | |/   |  | |  | |  | | .-') |   ||   ||   | ");
                     gotoxy(24,19);printf("(|  '--. |  |_.' ||  |_.' |\\_) |  |\\|  | |  |_|( OO )|  .'|  .'|  .' ");
                     gotoxy(24,20);printf(" |  .--' |  .  '.'|  .  '.'  \\ |  | |  | |  | | `-' /`--' `--' `--'  ");
                     gotoxy(24,21);printf(" |  `---.|  |\\  \\ |  |\\  \\    `'  '-'  '('  '-'(_.-' .--. .--. .--.  ");
                     gotoxy(24,22);printf(" `------'`--' '--'`--' '--'     `-----'   `-----'    '--' '--' '--'  ");
                     controlpisc++;
                     Sleep(500);
                  }
                     
                     Sleep(1000);
                     system("cls");textcolor(WHITE);}

      // QUESTÃO 7
          for (s =30; s>=0;s--){
                textcolor(LIGHTBLUE);
                gotoxy(8, 1);printf("         *******    **     ** ********  ******** **********     **       *******                     ******   ");
                gotoxy(8, 2);printf("        **/////**  /**    /**/**/////  **////// /////**///     ****     **/////**                   //////*   ");
                gotoxy(8, 3);printf("       **     //** /**    /**/**      /**           /**       **//**   **     //**                       /*   ");
                textcolor(CYAN);
                gotoxy(8, 4);printf("      /**      /** /**    /**/******* /*********    /**      **  //** /**      /**                       *    ");
                gotoxy(8, 5);printf("      /**    **/** /**    /**/**////  ////////**    /**     **********/**      /**                      *     ");
                gotoxy(8, 6);printf("      //**  // **  /**    /**/**             /**    /**    /**//////**//**     **                      *    **");
                textcolor(LIGHTBLUE);
                gotoxy(8, 7);printf("       //******* **//******* /******** ********     /**    /**     /** //*******                      *    /**");
                gotoxy(8, 8);printf("        /////// //  ///////  //////// ////////      //     //      //   ///////                      /     // ");
                textcolor(YELLOW);
                gotoxy(80, 25);printf("DIFICULDADE  MEDIO");textcolor(WHITE);
                gotoxy(55,25);printf("TEMPO");gotoxy(52,26);printf("|");gotoxy(51,27);printf("%02d",s);
                gotoxy(10,24);printf("Acertos -----> %02d", pontosbom);
                gotoxy(10,25);printf("Erros -------> %02d",pontosmal); 
                gotoxy(22, 11);printf("\"Em relacao aos lipidios, sao feitas varias afirmacoes corretas, exceto: \"");
                gotoxy(22,13);printf("a) servem como isolante termico.");
                gotoxy(22,14);printf("b) podem ser encontrados armazenados nas celulas adiposas dos animais."); 
                gotoxy(22,15);printf("c) sao os principais combustiveis energeticos da celula.");
                gotoxy(22,16);printf("d) compoem as membranas celulares.");
                gotoxy(22,17);printf("e) os vegetais podem estoca-los sob a forma de oleo nas sementes.\n\n\t\t\t    ");
                Sleep(1000);
                if(kbhit()){fflush(stdin);op = getch();toupper(op);break;Sleep(500);}} 


                if(s == 0){pontosmal++;system("cls");
                 while(controlpisc<=5){
                    if(controlpisc==0){textcolor(8);Sleep(50);}
                    if(controlpisc==1){textcolor(LIGHTBLUE);Sleep(50);}
                    if(controlpisc==2){textcolor(8);Sleep(50);}
                    if(controlpisc==3){textcolor(LIGHTBLUE);Sleep(50);}
                    if(controlpisc==4){textcolor(8);Sleep(50);}
                    if(controlpisc==5){textcolor(LIGHTBLUE);Sleep(50);}
                    
                    gotoxy(20,5); printf("                    .-') _     ('-.  _   .-')      _ (`-.                           ");
                    gotoxy(20,6); printf("                   (  OO) )  _(  OO)( '.( OO )_   ( (OO  )                          ");
                    gotoxy(20,7); printf(" .-'),-----.       /     '._(,------.,--.   ,--.)_.`     \\ .-'),-----.              ");
                    gotoxy(20,8); printf("( OO'  .-.  '      |'--...__)|  .---'|   `.'   |(__...--''( OO'  .-.  '             ");
                    gotoxy(20,9); printf("/   |  | |  |      '--.  .--'|  |    |         | |  /  | |/   |  | |  |             ");
                    gotoxy(20,10); printf("\\_) |  |\\|  |         |  |  (|  '--. |  |'.'|  | |  |_.' |\\_) |  |\\|  |             ");
                    gotoxy(20,11); printf("  \\ |  | |  |         |  |   |  .--' |  |   |  | |  .___.'  \\ |  | |  |             ");
                    gotoxy(20,12); printf("   `'  '-'  '         |  |   |  `---.|  |   |  | |  |        `'  '-'  '             ");
                    gotoxy(20,13); printf("     `-----'          `--'   `------'`--'   `--' `--'          `-----'              ");
                    gotoxy(20,14); printf("   ('-.                 ('-.    .-. .-')                            ,---.,---.,---. ");
                    gotoxy(20,15); printf("  ( OO ).-.            ( OO ).-.\\  ( OO )                           |   ||   ||   | ");
                    gotoxy(20,16); printf("  / . --. /   .-----.  / . --. / ;-----.\\  .-'),-----.  ,--. ,--.   |   ||   ||   | ");
                    gotoxy(20,17); printf("  | \\-.  \\   '  .--./  | \\-.  \\  | .-.  | ( OO'  .-.  ' |  | |  |   |   ||   ||   | ");
                    gotoxy(20,18); printf(".-'-'  |  |  |  |('-..-'-'  |  | | '-' /_)/   |  | |  | |  | | .-') |   ||   ||   | ");
                    gotoxy(20,19); printf(".-'-'  |  |  |  |('-..-'-'  |  | | '-' /_)/   |  | |  | |  | | .-') |   ||   ||   | ");
                    gotoxy(20,20); printf(" \\| |_.'  | /_) |OO  )\\| |_.'  | | .-. `. \\_) |  |\\|  | |  |_|( OO )|  .'|  .'|  .' ");
                    gotoxy(20,21); printf("  |  .-.  | ||  |`-'|  |  .-.  | | |  \\  |  \\ |  | |  | |  | | `-' /`--' `--' `--'  ");
                    gotoxy(20,22); printf("  |  | |  |(_'  '--'\\  |  | |  | | '--'  /   `'  '-'  '('  '-'(_.-' .--. .--. .--.  ");
                    gotoxy(20,23); printf("  `--' `--'   `-----'  `--' `--' `------'      `-----'   `-----'    '--' '--' '--'  ");
                    controlpisc++;
                    Sleep(500);
                    }
                    Sleep(1000);
                       
                    system("cls");
                    textcolor(WHITE);} 

      if(tolower(op) == 'c'){
        pontosbom++;system("cls");controlpisc=0;
          while(controlpisc<=5){
                    if(controlpisc==0){textcolor(8);Sleep(50);}
                    if(controlpisc==1){textcolor(LIGHTGREEN);Sleep(50);}
                    if(controlpisc==2){textcolor(8);Sleep(50);}
                    if(controlpisc==3){textcolor(LIGHTGREEN);Sleep(50);}
                    if(controlpisc==4){textcolor(8);Sleep(50);}
                    if(controlpisc==5){textcolor(LIGHTGREEN);Sleep(50);}
                     
                    gotoxy(22,5); printf("      (`-.                              ('-.                                                ");
                    gotoxy(22,6); printf("    _(OO  )_                          _(  OO)                                               ");
                    gotoxy(22,7); printf(",--(_/   ,. \\ .-'),-----.    .-----. (,------.                                              ");
                    gotoxy(22,8); printf("\\   \\   /(__/( OO'  .-.  '  '  .--./  |  .---'                                              ");
                    gotoxy(22,9); printf(" \\   \\ /   / /   |  | |  |  |  |('-.  |  |                                                  ");
                    gotoxy(22,10); printf("  \\   '   /, \\_) |  |\\|  | /_) |OO  )(|  '--.                                               ");
                    gotoxy(22,11); printf("   \\     /__)  \\ |  | |  | ||  |`-'|  |  .--'                                               ");
                    gotoxy(22,12); printf("    \\   /       `'  '-'  '(_'  '--'\\  |  `---.                                              ");
                    gotoxy(22,13); printf("     `-'          `-----'    `-----'  `------'                                              ");
                    gotoxy(22,14); printf("   ('-.                  ('-.  _  .-')   .-') _                             ,---.,---.,---. ");
                    gotoxy(22,15); printf("  ( OO ).-.            _(  OO)( \\( -O ) (  OO) )                            |   ||   ||   | ");
                    gotoxy(22,16); printf("  / . --. /   .-----. (,------.,------. /     '._  .-'),-----.  ,--. ,--.   |   ||   ||   | ");
                    gotoxy(22,17); printf("  | \\-.  \\   '  .--./  |  .---'|   /`. '|'--...__)( OO'  .-.  ' |  | |  |   |   ||   ||   | ");
                    gotoxy(22,18); printf(".-'-'  |  |  |  |('-.  |  |    |  /  | |'--.  .--'/   |  | |  | |  | | .-') |   ||   ||   | ");
                    gotoxy(22,19); printf(" \\| |_.'  | /_) |OO  )(|  '--. |  |_.' |   |  |   \\_) |  |\\|  | |  |_|( OO )|  .'|  .'|  .' ");
                    gotoxy(22,20); printf("  |  .-.  | ||  |`-'|  |  .--' |  .  '.'   |  |     \\ |  | |  | |  | | `-' /`--' `--' `--'  ");
                    gotoxy(22,21); printf("  |  | |  |(_'  '--'\\  |  `---.|  |\\  \\    |  |      `'  '-'  '('  '-'(_.-' .--. .--. .--.  ");
                    gotoxy(22,22); printf(" `--' `--'   `-----'  `------'`--' '--'   `--'        `-----'   `-----'    '--' '--' '--'  ");
                    controlpisc++;
                    Sleep(500);
                  } 
                    Sleep(1000);
                    system("cls");
                    textcolor(WHITE);}
             else {
              pontosmal++;system("cls");controlpisc=0;
              while(controlpisc<=5){
                    if(controlpisc==0){textcolor(8);Sleep(50);}
                    if(controlpisc==1){textcolor(LIGHTRED);Sleep(50);}
                    if(controlpisc==2){textcolor(8);Sleep(50);}
                    if(controlpisc==3){textcolor(LIGHTRED);Sleep(50);}
                    if(controlpisc==4){textcolor(8);Sleep(50);}
                    if(controlpisc==5){textcolor(LIGHTRED);Sleep(50);}
                    
                     gotoxy(24,5);printf("      (`-.                              ('-.                         ");
                     gotoxy(24,6);printf("    _(OO  )_                          _(  OO)                        ");
                     gotoxy(24,7);printf(",--(_/   ,. \\ .-'),-----.    .-----. (,------.                       ");
                     gotoxy(24,8);printf("\\   \\   /(__/( OO'  .-.  '  '  .--./  |  .---'                       ");
                     gotoxy(24,9);printf(" \\   \\ /   / /   |  | |  |  |  |('-.  |  |                           ");
                     gotoxy(24,10);printf("  \\   '   /, \\_) |  |\\|  | /_) |OO  )(|  '--.                        ");
                     gotoxy(24,11);printf("   \\     /__)  \\ |  | |  | ||  |`-'|  |  .--'                        ");
                     gotoxy(24,12);printf("    \\   /       `'  '-'  '(_'  '--'\\  |  `---.                       ");
                     gotoxy(24,13);printf("     `-'          `-----'    `-----'  `------'                       ");
                     gotoxy(24,14);printf("   ('-.  _  .-')  _  .-')                            ,---.,---.,---. ");
                     gotoxy(24,15);printf(" _(  OO)( \\( -O )( \\( -O )                           |   ||   ||   | ");
                     gotoxy(24,16);printf("(,------.,------. ,------.  .-'),-----.  ,--. ,--.   |   ||   ||   | ");
                     gotoxy(24,17);printf(" |  .---'|   /`. '|   /`. '( OO'  .-.  ' |  | |  |   |   ||   ||   | ");
                     gotoxy(24,18);printf(" |  |    |  /  | ||  /  | |/   |  | |  | |  | | .-') |   ||   ||   | ");
                     gotoxy(24,19);printf("(|  '--. |  |_.' ||  |_.' |\\_) |  |\\|  | |  |_|( OO )|  .'|  .'|  .' ");
                     gotoxy(24,20);printf(" |  .--' |  .  '.'|  .  '.'  \\ |  | |  | |  | | `-' /`--' `--' `--'  ");
                     gotoxy(24,21);printf(" |  `---.|  |\\  \\ |  |\\  \\    `'  '-'  '('  '-'(_.-' .--. .--. .--.  ");
                     gotoxy(24,22);printf(" `------'`--' '--'`--' '--'     `-----'   `-----'    '--' '--' '--'  ");
                     controlpisc++;
                     Sleep(500);
                  }
                     
                     Sleep(1000);
                     system("cls");textcolor(WHITE);}
      
      // QUESTÃO 8
          for (s =30; s>=0;s--){
                textcolor(LIGHTBLUE);
                gotoxy(8, 1);printf("         *******    **     ** ********  ******** **********     **       *******                      ****    ");
                gotoxy(8, 2);printf("        **/////**  /**    /**/**/////  **////// /////**///     ****     **/////**                    */// *   ");
                gotoxy(8, 3);printf("       **     //** /**    /**/**      /**           /**       **//**   **     //**                  /*   /*   ");
                textcolor(CYAN);
                gotoxy(8, 4);printf("      /**      /** /**    /**/******* /*********    /**      **  //** /**      /**                  / ****    ");
                gotoxy(8, 5);printf("      /**    **/** /**    /**/**////  ////////**    /**     **********/**      /**                   */// *   ");
                gotoxy(8, 6);printf("      //**  // **  /**    /**/**             /**    /**    /**//////**//**     **                   /*   /* **");
                textcolor(LIGHTBLUE);
                gotoxy(8, 7);printf("       //******* **//******* /******** ********     /**    /**     /** //*******                    / **** /**");
                gotoxy(8, 8);printf("        /////// //  ///////  //////// ////////      //     //      //   ///////                      ////  // ");
                textcolor(RED);
                gotoxy(80, 25);printf("DIFICULDADE  DIFICIL");textcolor(WHITE);
                gotoxy(55,25);printf("TEMPO");gotoxy(52,26);printf("|");gotoxy(51,27);printf("%02d",s);
                gotoxy(10,24);printf("Acertos -----> %02d", pontosbom);
                gotoxy(10,25);printf("Erros -------> %02d",pontosmal); 
                gotoxy(22, 11);printf("\"Os fenilcetonuricos tem falta de uma enzima do figado ");
                gotoxy(22, 12);printf("responsavel pelo metabolismo do aminoacido fenilanina. ");
                gotoxy(22,13);printf("Para que essa substancia nao se acumule no sangue, sua dieta alimentar deve ");
                gotoxy(22,14);printf("se restringir, dentre os nutrientes mencionados a seguir: \"");
                gotoxy(22,16);printf("a) as proteinas apenas.");
                gotoxy(22,17);printf("b) os carboidratos apenas."); 
                gotoxy(22,18);printf("c) as gorduras apenas.");
                gotoxy(22,19);printf("d) as gorduras e aos carboidratos.");
                gotoxy(22,20);printf("e) as gorduras e as proteinas.\n\n\t\t");
                Sleep(1000);
                if(kbhit()){fflush(stdin);op = getch();toupper(op);break;Sleep(500);}} 


                if(s == 0){pontosmal++;system("cls");
                 while(controlpisc<=5){
                    if(controlpisc==0){textcolor(8);Sleep(50);}
                    if(controlpisc==1){textcolor(LIGHTBLUE);Sleep(50);}
                    if(controlpisc==2){textcolor(8);Sleep(50);}
                    if(controlpisc==3){textcolor(LIGHTBLUE);Sleep(50);}
                    if(controlpisc==4){textcolor(8);Sleep(50);}
                    if(controlpisc==5){textcolor(LIGHTBLUE);Sleep(50);}
                    
                    gotoxy(20,5); printf("                    .-') _     ('-.  _   .-')      _ (`-.                           ");
                    gotoxy(20,6); printf("                   (  OO) )  _(  OO)( '.( OO )_   ( (OO  )                          ");
                    gotoxy(20,7); printf(" .-'),-----.       /     '._(,------.,--.   ,--.)_.`     \\ .-'),-----.              ");
                    gotoxy(20,8); printf("( OO'  .-.  '      |'--...__)|  .---'|   `.'   |(__...--''( OO'  .-.  '             ");
                    gotoxy(20,9); printf("/   |  | |  |      '--.  .--'|  |    |         | |  /  | |/   |  | |  |             ");
                    gotoxy(20,10); printf("\\_) |  |\\|  |         |  |  (|  '--. |  |'.'|  | |  |_.' |\\_) |  |\\|  |             ");
                    gotoxy(20,11); printf("  \\ |  | |  |         |  |   |  .--' |  |   |  | |  .___.'  \\ |  | |  |             ");
                    gotoxy(20,12); printf("   `'  '-'  '         |  |   |  `---.|  |   |  | |  |        `'  '-'  '             ");
                    gotoxy(20,13); printf("     `-----'          `--'   `------'`--'   `--' `--'          `-----'              ");
                    gotoxy(20,14); printf("   ('-.                 ('-.    .-. .-')                            ,---.,---.,---. ");
                    gotoxy(20,15); printf("  ( OO ).-.            ( OO ).-.\\  ( OO )                           |   ||   ||   | ");
                    gotoxy(20,16); printf("  / . --. /   .-----.  / . --. / ;-----.\\  .-'),-----.  ,--. ,--.   |   ||   ||   | ");
                    gotoxy(20,17); printf("  | \\-.  \\   '  .--./  | \\-.  \\  | .-.  | ( OO'  .-.  ' |  | |  |   |   ||   ||   | ");
                    gotoxy(20,18); printf(".-'-'  |  |  |  |('-..-'-'  |  | | '-' /_)/   |  | |  | |  | | .-') |   ||   ||   | ");
                    gotoxy(20,19); printf(".-'-'  |  |  |  |('-..-'-'  |  | | '-' /_)/   |  | |  | |  | | .-') |   ||   ||   | ");
                    gotoxy(20,20); printf(" \\| |_.'  | /_) |OO  )\\| |_.'  | | .-. `. \\_) |  |\\|  | |  |_|( OO )|  .'|  .'|  .' ");
                    gotoxy(20,21); printf("  |  .-.  | ||  |`-'|  |  .-.  | | |  \\  |  \\ |  | |  | |  | | `-' /`--' `--' `--'  ");
                    gotoxy(20,22); printf("  |  | |  |(_'  '--'\\  |  | |  | | '--'  /   `'  '-'  '('  '-'(_.-' .--. .--. .--.  ");
                    gotoxy(20,23); printf("  `--' `--'   `-----'  `--' `--' `------'      `-----'   `-----'    '--' '--' '--'  ");
                    controlpisc++;
                    Sleep(500);
                    }
                    Sleep(1000);
                       
                    system("cls");
                    textcolor(WHITE);} 

      if(tolower(op) == 'a'){
        pontosbom++;system("cls");controlpisc=0;
          while(controlpisc<=5){
                    if(controlpisc==0){textcolor(8);Sleep(50);}
                    if(controlpisc==1){textcolor(LIGHTGREEN);Sleep(50);}
                    if(controlpisc==2){textcolor(8);Sleep(50);}
                    if(controlpisc==3){textcolor(LIGHTGREEN);Sleep(50);}
                    if(controlpisc==4){textcolor(8);Sleep(50);}
                    if(controlpisc==5){textcolor(LIGHTGREEN);Sleep(50);}
                     
                    gotoxy(22,5); printf("      (`-.                              ('-.                                                ");
                    gotoxy(22,6); printf("    _(OO  )_                          _(  OO)                                               ");
                    gotoxy(22,7); printf(",--(_/   ,. \\ .-'),-----.    .-----. (,------.                                              ");
                    gotoxy(22,8); printf("\\   \\   /(__/( OO'  .-.  '  '  .--./  |  .---'                                              ");
                    gotoxy(22,9); printf(" \\   \\ /   / /   |  | |  |  |  |('-.  |  |                                                  ");
                    gotoxy(22,10); printf("  \\   '   /, \\_) |  |\\|  | /_) |OO  )(|  '--.                                               ");
                    gotoxy(22,11); printf("   \\     /__)  \\ |  | |  | ||  |`-'|  |  .--'                                               ");
                    gotoxy(22,12); printf("    \\   /       `'  '-'  '(_'  '--'\\  |  `---.                                              ");
                    gotoxy(22,13); printf("     `-'          `-----'    `-----'  `------'                                              ");
                    gotoxy(22,14); printf("   ('-.                  ('-.  _  .-')   .-') _                             ,---.,---.,---. ");
                    gotoxy(22,15); printf("  ( OO ).-.            _(  OO)( \\( -O ) (  OO) )                            |   ||   ||   | ");
                    gotoxy(22,16); printf("  / . --. /   .-----. (,------.,------. /     '._  .-'),-----.  ,--. ,--.   |   ||   ||   | ");
                    gotoxy(22,17); printf("  | \\-.  \\   '  .--./  |  .---'|   /`. '|'--...__)( OO'  .-.  ' |  | |  |   |   ||   ||   | ");
                    gotoxy(22,18); printf(".-'-'  |  |  |  |('-.  |  |    |  /  | |'--.  .--'/   |  | |  | |  | | .-') |   ||   ||   | ");
                    gotoxy(22,19); printf(" \\| |_.'  | /_) |OO  )(|  '--. |  |_.' |   |  |   \\_) |  |\\|  | |  |_|( OO )|  .'|  .'|  .' ");
                    gotoxy(22,20); printf("  |  .-.  | ||  |`-'|  |  .--' |  .  '.'   |  |     \\ |  | |  | |  | | `-' /`--' `--' `--'  ");
                    gotoxy(22,21); printf("  |  | |  |(_'  '--'\\  |  `---.|  |\\  \\    |  |      `'  '-'  '('  '-'(_.-' .--. .--. .--.  ");
                    gotoxy(22,22); printf(" `--' `--'   `-----'  `------'`--' '--'   `--'        `-----'   `-----'    '--' '--' '--'  ");
                    controlpisc++;
                    Sleep(500);
                  } 
                    Sleep(1000);
                    system("cls");
                    textcolor(WHITE);}
             else {
              pontosmal++;system("cls");controlpisc=0;
              while(controlpisc<=5){
                    if(controlpisc==0){textcolor(8);Sleep(50);}
                    if(controlpisc==1){textcolor(LIGHTRED);Sleep(50);}
                    if(controlpisc==2){textcolor(8);Sleep(50);}
                    if(controlpisc==3){textcolor(LIGHTRED);Sleep(50);}
                    if(controlpisc==4){textcolor(8);Sleep(50);}
                    if(controlpisc==5){textcolor(LIGHTRED);Sleep(50);}
                    
                     gotoxy(24,5);printf("      (`-.                              ('-.                         ");
                     gotoxy(24,6);printf("    _(OO  )_                          _(  OO)                        ");
                     gotoxy(24,7);printf(",--(_/   ,. \\ .-'),-----.    .-----. (,------.                       ");
                     gotoxy(24,8);printf("\\   \\   /(__/( OO'  .-.  '  '  .--./  |  .---'                       ");
                     gotoxy(24,9);printf(" \\   \\ /   / /   |  | |  |  |  |('-.  |  |                           ");
                     gotoxy(24,10);printf("  \\   '   /, \\_) |  |\\|  | /_) |OO  )(|  '--.                        ");
                     gotoxy(24,11);printf("   \\     /__)  \\ |  | |  | ||  |`-'|  |  .--'                        ");
                     gotoxy(24,12);printf("    \\   /       `'  '-'  '(_'  '--'\\  |  `---.                       ");
                     gotoxy(24,13);printf("     `-'          `-----'    `-----'  `------'                       ");
                     gotoxy(24,14);printf("   ('-.  _  .-')  _  .-')                            ,---.,---.,---. ");
                     gotoxy(24,15);printf(" _(  OO)( \\( -O )( \\( -O )                           |   ||   ||   | ");
                     gotoxy(24,16);printf("(,------.,------. ,------.  .-'),-----.  ,--. ,--.   |   ||   ||   | ");
                     gotoxy(24,17);printf(" |  .---'|   /`. '|   /`. '( OO'  .-.  ' |  | |  |   |   ||   ||   | ");
                     gotoxy(24,18);printf(" |  |    |  /  | ||  /  | |/   |  | |  | |  | | .-') |   ||   ||   | ");
                     gotoxy(24,19);printf("(|  '--. |  |_.' ||  |_.' |\\_) |  |\\|  | |  |_|( OO )|  .'|  .'|  .' ");
                     gotoxy(24,20);printf(" |  .--' |  .  '.'|  .  '.'  \\ |  | |  | |  | | `-' /`--' `--' `--'  ");
                     gotoxy(24,21);printf(" |  `---.|  |\\  \\ |  |\\  \\    `'  '-'  '('  '-'(_.-' .--. .--. .--.  ");
                     gotoxy(24,22);printf(" `------'`--' '--'`--' '--'     `-----'   `-----'    '--' '--' '--'  ");
                     controlpisc++;
                     Sleep(500);
                  }
                     
                     Sleep(1000);
                     system("cls");textcolor(WHITE);}

      // QUESTÃO 9
          for (s =30; s>=0;s--){
                textcolor(LIGHTBLUE);
                gotoxy(8, 1);printf("         *******    **     ** ********  ******** **********     **       *******                      ****    ");
                gotoxy(8, 2);printf("        **/////**  /**    /**/**/////  **////// /////**///     ****     **/////**                    */// *   ");
                gotoxy(8, 3);printf("       **     //** /**    /**/**      /**           /**       **//**   **     //**                  /*   /*   ");
                textcolor(CYAN);
                gotoxy(8, 4);printf("      /**      /** /**    /**/******* /*********    /**      **  //** /**      /**                  / ****    ");
                gotoxy(8, 5);printf("      /**    **/** /**    /**/**////  ////////**    /**     **********/**      /**                   ///*     ");
                gotoxy(8, 6);printf("      //**  // **  /**    /**/**             /**    /**    /**//////**//**     **                      *    **");
                textcolor(LIGHTBLUE);
                gotoxy(8, 7);printf("       //******* **//******* /******** ********     /**    /**     /** //*******                      *    /**");
                gotoxy(8, 8);printf("        /////// //  ///////  //////// ////////      //     //      //   ///////                      /     // ");
                textcolor(RED);
                gotoxy(80, 25);printf("DIFICULDADE  DIFICIL");textcolor(WHITE);
                gotoxy(55,25);printf("TEMPO");gotoxy(52,26);printf("|");gotoxy(51,27);printf("%02d",s);
                gotoxy(10,24);printf("Acertos -----> %02d", pontosbom);
                gotoxy(10,25);printf("Erros -------> %02d",pontosmal); 
                gotoxy(22,11);printf("\"A gota e um disturbio fisiologico que causa dor e inchaco nas articulacoes, por acumulo ");
                gotoxy(22,12);printf("de acido urico, um residuo metabolico nitrogenado. ");
                gotoxy(22,13);printf("Considerando-se a composicao quimica dos diferentes nutrientes, ");
                gotoxy(22,14);printf("que tipo de alimento um individuo com gota deve evitar?\"");
                gotoxy(22,16);printf("a) O rico em gordura.");
                gotoxy(22,17);printf("b) O pobre em gordura."); 
                gotoxy(22,18);printf("c) O pobre em proteinas.");
                gotoxy(22,19);printf("d) O rico em sais de sodio.");
                gotoxy(22,20);printf("e) O rico em proteinas.\n\n\t\t    ");
                Sleep(1000);
                if(kbhit()){fflush(stdin);op = getch();toupper(op);break;Sleep(500);}} 


                if(s == 0){pontosmal++;system("cls");
                 while(controlpisc<=5){
                    if(controlpisc==0){textcolor(8);Sleep(50);}
                    if(controlpisc==1){textcolor(LIGHTBLUE);Sleep(50);}
                    if(controlpisc==2){textcolor(8);Sleep(50);}
                    if(controlpisc==3){textcolor(LIGHTBLUE);Sleep(50);}
                    if(controlpisc==4){textcolor(8);Sleep(50);}
                    if(controlpisc==5){textcolor(LIGHTBLUE);Sleep(50);}
                    
                    gotoxy(20,5); printf("                    .-') _     ('-.  _   .-')      _ (`-.                           ");
                    gotoxy(20,6); printf("                   (  OO) )  _(  OO)( '.( OO )_   ( (OO  )                          ");
                    gotoxy(20,7); printf(" .-'),-----.       /     '._(,------.,--.   ,--.)_.`     \\ .-'),-----.              ");
                    gotoxy(20,8); printf("( OO'  .-.  '      |'--...__)|  .---'|   `.'   |(__...--''( OO'  .-.  '             ");
                    gotoxy(20,9); printf("/   |  | |  |      '--.  .--'|  |    |         | |  /  | |/   |  | |  |             ");
                    gotoxy(20,10); printf("\\_) |  |\\|  |         |  |  (|  '--. |  |'.'|  | |  |_.' |\\_) |  |\\|  |             ");
                    gotoxy(20,11); printf("  \\ |  | |  |         |  |   |  .--' |  |   |  | |  .___.'  \\ |  | |  |             ");
                    gotoxy(20,12); printf("   `'  '-'  '         |  |   |  `---.|  |   |  | |  |        `'  '-'  '             ");
                    gotoxy(20,13); printf("     `-----'          `--'   `------'`--'   `--' `--'          `-----'              ");
                    gotoxy(20,14); printf("   ('-.                 ('-.    .-. .-')                            ,---.,---.,---. ");
                    gotoxy(20,15); printf("  ( OO ).-.            ( OO ).-.\\  ( OO )                           |   ||   ||   | ");
                    gotoxy(20,16); printf("  / . --. /   .-----.  / . --. / ;-----.\\  .-'),-----.  ,--. ,--.   |   ||   ||   | ");
                    gotoxy(20,17); printf("  | \\-.  \\   '  .--./  | \\-.  \\  | .-.  | ( OO'  .-.  ' |  | |  |   |   ||   ||   | ");
                    gotoxy(20,18); printf(".-'-'  |  |  |  |('-..-'-'  |  | | '-' /_)/   |  | |  | |  | | .-') |   ||   ||   | ");
                    gotoxy(20,19); printf(".-'-'  |  |  |  |('-..-'-'  |  | | '-' /_)/   |  | |  | |  | | .-') |   ||   ||   | ");
                    gotoxy(20,20); printf(" \\| |_.'  | /_) |OO  )\\| |_.'  | | .-. `. \\_) |  |\\|  | |  |_|( OO )|  .'|  .'|  .' ");
                    gotoxy(20,21); printf("  |  .-.  | ||  |`-'|  |  .-.  | | |  \\  |  \\ |  | |  | |  | | `-' /`--' `--' `--'  ");
                    gotoxy(20,22); printf("  |  | |  |(_'  '--'\\  |  | |  | | '--'  /   `'  '-'  '('  '-'(_.-' .--. .--. .--.  ");
                    gotoxy(20,23); printf("  `--' `--'   `-----'  `--' `--' `------'      `-----'   `-----'    '--' '--' '--'  ");
                    controlpisc++;
                    Sleep(500);
                    }
                    Sleep(1000);
                       
                    system("cls");
                    textcolor(WHITE);} 

      if(tolower(op) == 'e'){
        pontosbom++;system("cls");controlpisc=0;
          while(controlpisc<=5){
                    if(controlpisc==0){textcolor(8);Sleep(50);}
                    if(controlpisc==1){textcolor(LIGHTGREEN);Sleep(50);}
                    if(controlpisc==2){textcolor(8);Sleep(50);}
                    if(controlpisc==3){textcolor(LIGHTGREEN);Sleep(50);}
                    if(controlpisc==4){textcolor(8);Sleep(50);}
                    if(controlpisc==5){textcolor(LIGHTGREEN);Sleep(50);}
                     
                    gotoxy(22,5); printf("      (`-.                              ('-.                                                ");
                    gotoxy(22,6); printf("    _(OO  )_                          _(  OO)                                               ");
                    gotoxy(22,7); printf(",--(_/   ,. \\ .-'),-----.    .-----. (,------.                                              ");
                    gotoxy(22,8); printf("\\   \\   /(__/( OO'  .-.  '  '  .--./  |  .---'                                              ");
                    gotoxy(22,9); printf(" \\   \\ /   / /   |  | |  |  |  |('-.  |  |                                                  ");
                    gotoxy(22,10); printf("  \\   '   /, \\_) |  |\\|  | /_) |OO  )(|  '--.                                               ");
                    gotoxy(22,11); printf("   \\     /__)  \\ |  | |  | ||  |`-'|  |  .--'                                               ");
                    gotoxy(22,12); printf("    \\   /       `'  '-'  '(_'  '--'\\  |  `---.                                              ");
                    gotoxy(22,13); printf("     `-'          `-----'    `-----'  `------'                                              ");
                    gotoxy(22,14); printf("   ('-.                  ('-.  _  .-')   .-') _                             ,---.,---.,---. ");
                    gotoxy(22,15); printf("  ( OO ).-.            _(  OO)( \\( -O ) (  OO) )                            |   ||   ||   | ");
                    gotoxy(22,16); printf("  / . --. /   .-----. (,------.,------. /     '._  .-'),-----.  ,--. ,--.   |   ||   ||   | ");
                    gotoxy(22,17); printf("  | \\-.  \\   '  .--./  |  .---'|   /`. '|'--...__)( OO'  .-.  ' |  | |  |   |   ||   ||   | ");
                    gotoxy(22,18); printf(".-'-'  |  |  |  |('-.  |  |    |  /  | |'--.  .--'/   |  | |  | |  | | .-') |   ||   ||   | ");
                    gotoxy(22,19); printf(" \\| |_.'  | /_) |OO  )(|  '--. |  |_.' |   |  |   \\_) |  |\\|  | |  |_|( OO )|  .'|  .'|  .' ");
                    gotoxy(22,20); printf("  |  .-.  | ||  |`-'|  |  .--' |  .  '.'   |  |     \\ |  | |  | |  | | `-' /`--' `--' `--'  ");
                    gotoxy(22,21); printf("  |  | |  |(_'  '--'\\  |  `---.|  |\\  \\    |  |      `'  '-'  '('  '-'(_.-' .--. .--. .--.  ");
                    gotoxy(22,22); printf(" `--' `--'   `-----'  `------'`--' '--'   `--'        `-----'   `-----'    '--' '--' '--'  ");
                    controlpisc++;
                    Sleep(500);
                  } 
                    Sleep(1000);
                    system("cls");
                    textcolor(WHITE);}
             else {
              pontosmal++;system("cls");controlpisc=0;
              while(controlpisc<=5){
                    if(controlpisc==0){textcolor(8);Sleep(50);}
                    if(controlpisc==1){textcolor(LIGHTRED);Sleep(50);}
                    if(controlpisc==2){textcolor(8);Sleep(50);}
                    if(controlpisc==3){textcolor(LIGHTRED);Sleep(50);}
                    if(controlpisc==4){textcolor(8);Sleep(50);}
                    if(controlpisc==5){textcolor(LIGHTRED);Sleep(50);}
                    
                     gotoxy(24,5);printf("      (`-.                              ('-.                         ");
                     gotoxy(24,6);printf("    _(OO  )_                          _(  OO)                        ");
                     gotoxy(24,7);printf(",--(_/   ,. \\ .-'),-----.    .-----. (,------.                       ");
                     gotoxy(24,8);printf("\\   \\   /(__/( OO'  .-.  '  '  .--./  |  .---'                       ");
                     gotoxy(24,9);printf(" \\   \\ /   / /   |  | |  |  |  |('-.  |  |                           ");
                     gotoxy(24,10);printf("  \\   '   /, \\_) |  |\\|  | /_) |OO  )(|  '--.                        ");
                     gotoxy(24,11);printf("   \\     /__)  \\ |  | |  | ||  |`-'|  |  .--'                        ");
                     gotoxy(24,12);printf("    \\   /       `'  '-'  '(_'  '--'\\  |  `---.                       ");
                     gotoxy(24,13);printf("     `-'          `-----'    `-----'  `------'                       ");
                     gotoxy(24,14);printf("   ('-.  _  .-')  _  .-')                            ,---.,---.,---. ");
                     gotoxy(24,15);printf(" _(  OO)( \\( -O )( \\( -O )                           |   ||   ||   | ");
                     gotoxy(24,16);printf("(,------.,------. ,------.  .-'),-----.  ,--. ,--.   |   ||   ||   | ");
                     gotoxy(24,17);printf(" |  .---'|   /`. '|   /`. '( OO'  .-.  ' |  | |  |   |   ||   ||   | ");
                     gotoxy(24,18);printf(" |  |    |  /  | ||  /  | |/   |  | |  | |  | | .-') |   ||   ||   | ");
                     gotoxy(24,19);printf("(|  '--. |  |_.' ||  |_.' |\\_) |  |\\|  | |  |_|( OO )|  .'|  .'|  .' ");
                     gotoxy(24,20);printf(" |  .--' |  .  '.'|  .  '.'  \\ |  | |  | |  | | `-' /`--' `--' `--'  ");
                     gotoxy(24,21);printf(" |  `---.|  |\\  \\ |  |\\  \\    `'  '-'  '('  '-'(_.-' .--. .--. .--.  ");
                     gotoxy(24,22);printf(" `------'`--' '--'`--' '--'     `-----'   `-----'    '--' '--' '--'  ");
                     controlpisc++;
                     Sleep(500);
                  }
                     
                     Sleep(1000);
                     system("cls");textcolor(WHITE);}

      // QUESTÃO 10
        for (s =30; s>=0;s--){
                textcolor(LIGHTBLUE);
                gotoxy(8, 1);printf("         *******    **     ** ********  ******** **********     **       *******                      **   ****    ");
                gotoxy(8, 2);printf("        **/////**  /**    /**/**/////  **////// /////**///     ****     **/////**                    ***  *///**   ");
                gotoxy(8, 3);printf("       **     //** /**    /**/**      /**           /**       **//**   **     //**                  //** /*  */*   ");
                textcolor(CYAN);
                gotoxy(8, 4);printf("      /**      /** /**    /**/******* /*********    /**      **  //** /**      /**                   /** /* * /*   ");
                gotoxy(8, 5);printf("      /**    **/** /**    /**/**////  ////////**    /**     **********/**      /**                   /** /**  /*   ");
                gotoxy(8, 6);printf("      //**  // **  /**    /**/**             /**    /**    /**//////**//**     **                    /** /*   /* **");
                textcolor(LIGHTBLUE);
                gotoxy(8, 7);printf("       //******* **//******* /******** ********     /**    /**     /** //*******                     ****/ **** /**");
                gotoxy(8, 8);printf("        /////// //  ///////  //////// ////////      //     //      //   ///////                     ////  ////  // ");
                textcolor(RED);
                gotoxy(80, 25);printf("DIFICULDADE  DIFICIL");textcolor(WHITE);
                gotoxy(55,25);printf("TEMPO");gotoxy(52,26);printf("|");gotoxy(51,27);printf("%02d",s);
                gotoxy(10,24);printf("Acertos -----> %02d", pontosbom);
                gotoxy(10,25);printf("Erros -------> %02d",pontosmal); 
                gotoxy(14, 11);printf("\"Os nutrientes desempenham varias funcoes no organismo humano: fornecem energia para todos os processos;");
                gotoxy(14, 12);printf("suprem o organismo de substancias que permitem o crescimento e regeneracao ");
                gotoxy(14,13);printf("das partes do corpo; regulam os processos fisiologicos.");
                gotoxy(14,14);printf("A alternativa que relaciona a sequencia correta dos nutrientes com as funcoes anteriores e: \"");
                gotoxy(14,16);printf("a) carboidratos; vitaminas; proteinas.");
                gotoxy(14,17);printf("b) vitaminas; proteinas; carboidratos."); 
                gotoxy(14,18);printf("c) proteinas; vitaminas; carboidratos.");
                gotoxy(14,19);printf("d) carboidratos; proteinas; vitaminas.");
                gotoxy(14,20);printf("e) vitaminas; carboidratos; proteinas.\n\n\t    ");
                Sleep(1000);
                if(kbhit()){fflush(stdin);op = getch();toupper(op);break;Sleep(500);}} 


                if(s == 0){pontosmal++;system("cls");
                 while(controlpisc<=5){
                    if(controlpisc==0){textcolor(8);Sleep(50);}
                    if(controlpisc==1){textcolor(LIGHTBLUE);Sleep(50);}
                    if(controlpisc==2){textcolor(8);Sleep(50);}
                    if(controlpisc==3){textcolor(LIGHTBLUE);Sleep(50);}
                    if(controlpisc==4){textcolor(8);Sleep(50);}
                    if(controlpisc==5){textcolor(LIGHTBLUE);Sleep(50);}
                    
                    gotoxy(20,5); printf("                    .-') _     ('-.  _   .-')      _ (`-.                           ");
                    gotoxy(20,6); printf("                   (  OO) )  _(  OO)( '.( OO )_   ( (OO  )                          ");
                    gotoxy(20,7); printf(" .-'),-----.       /     '._(,------.,--.   ,--.)_.`     \\ .-'),-----.              ");
                    gotoxy(20,8); printf("( OO'  .-.  '      |'--...__)|  .---'|   `.'   |(__...--''( OO'  .-.  '             ");
                    gotoxy(20,9); printf("/   |  | |  |      '--.  .--'|  |    |         | |  /  | |/   |  | |  |             ");
                    gotoxy(20,10); printf("\\_) |  |\\|  |         |  |  (|  '--. |  |'.'|  | |  |_.' |\\_) |  |\\|  |             ");
                    gotoxy(20,11); printf("  \\ |  | |  |         |  |   |  .--' |  |   |  | |  .___.'  \\ |  | |  |             ");
                    gotoxy(20,12); printf("   `'  '-'  '         |  |   |  `---.|  |   |  | |  |        `'  '-'  '             ");
                    gotoxy(20,13); printf("     `-----'          `--'   `------'`--'   `--' `--'          `-----'              ");
                    gotoxy(20,14); printf("   ('-.                 ('-.    .-. .-')                            ,---.,---.,---. ");
                    gotoxy(20,15); printf("  ( OO ).-.            ( OO ).-.\\  ( OO )                           |   ||   ||   | ");
                    gotoxy(20,16); printf("  / . --. /   .-----.  / . --. / ;-----.\\  .-'),-----.  ,--. ,--.   |   ||   ||   | ");
                    gotoxy(20,17); printf("  | \\-.  \\   '  .--./  | \\-.  \\  | .-.  | ( OO'  .-.  ' |  | |  |   |   ||   ||   | ");
                    gotoxy(20,18); printf(".-'-'  |  |  |  |('-..-'-'  |  | | '-' /_)/   |  | |  | |  | | .-') |   ||   ||   | ");
                    gotoxy(20,19); printf(".-'-'  |  |  |  |('-..-'-'  |  | | '-' /_)/   |  | |  | |  | | .-') |   ||   ||   | ");
                    gotoxy(20,20); printf(" \\| |_.'  | /_) |OO  )\\| |_.'  | | .-. `. \\_) |  |\\|  | |  |_|( OO )|  .'|  .'|  .' ");
                    gotoxy(20,21); printf("  |  .-.  | ||  |`-'|  |  .-.  | | |  \\  |  \\ |  | |  | |  | | `-' /`--' `--' `--'  ");
                    gotoxy(20,22); printf("  |  | |  |(_'  '--'\\  |  | |  | | '--'  /   `'  '-'  '('  '-'(_.-' .--. .--. .--.  ");
                    gotoxy(20,23); printf("  `--' `--'   `-----'  `--' `--' `------'      `-----'   `-----'    '--' '--' '--'  ");
                    controlpisc++;
                    Sleep(500);
                    }
                    Sleep(1000);
                       
                    system("cls");
                    textcolor(WHITE);} 

      if(tolower(op) == 'd'){
        pontosbom++;system("cls");controlpisc=0;
          while(controlpisc<=5){
                    if(controlpisc==0){textcolor(8);Sleep(50);}
                    if(controlpisc==1){textcolor(LIGHTGREEN);Sleep(50);}
                    if(controlpisc==2){textcolor(8);Sleep(50);}
                    if(controlpisc==3){textcolor(LIGHTGREEN);Sleep(50);}
                    if(controlpisc==4){textcolor(8);Sleep(50);}
                    if(controlpisc==5){textcolor(LIGHTGREEN);Sleep(50);}
                     
                    gotoxy(22,5); printf("      (`-.                              ('-.                                                ");
                    gotoxy(22,6); printf("    _(OO  )_                          _(  OO)                                               ");
                    gotoxy(22,7); printf(",--(_/   ,. \\ .-'),-----.    .-----. (,------.                                              ");
                    gotoxy(22,8); printf("\\   \\   /(__/( OO'  .-.  '  '  .--./  |  .---'                                              ");
                    gotoxy(22,9); printf(" \\   \\ /   / /   |  | |  |  |  |('-.  |  |                                                  ");
                    gotoxy(22,10); printf("  \\   '   /, \\_) |  |\\|  | /_) |OO  )(|  '--.                                               ");
                    gotoxy(22,11); printf("   \\     /__)  \\ |  | |  | ||  |`-'|  |  .--'                                               ");
                    gotoxy(22,12); printf("    \\   /       `'  '-'  '(_'  '--'\\  |  `---.                                              ");
                    gotoxy(22,13); printf("     `-'          `-----'    `-----'  `------'                                              ");
                    gotoxy(22,14); printf("   ('-.                  ('-.  _  .-')   .-') _                             ,---.,---.,---. ");
                    gotoxy(22,15); printf("  ( OO ).-.            _(  OO)( \\( -O ) (  OO) )                            |   ||   ||   | ");
                    gotoxy(22,16); printf("  / . --. /   .-----. (,------.,------. /     '._  .-'),-----.  ,--. ,--.   |   ||   ||   | ");
                    gotoxy(22,17); printf("  | \\-.  \\   '  .--./  |  .---'|   /`. '|'--...__)( OO'  .-.  ' |  | |  |   |   ||   ||   | ");
                    gotoxy(22,18); printf(".-'-'  |  |  |  |('-.  |  |    |  /  | |'--.  .--'/   |  | |  | |  | | .-') |   ||   ||   | ");
                    gotoxy(22,19); printf(" \\| |_.'  | /_) |OO  )(|  '--. |  |_.' |   |  |   \\_) |  |\\|  | |  |_|( OO )|  .'|  .'|  .' ");
                    gotoxy(22,20); printf("  |  .-.  | ||  |`-'|  |  .--' |  .  '.'   |  |     \\ |  | |  | |  | | `-' /`--' `--' `--'  ");
                    gotoxy(22,21); printf("  |  | |  |(_'  '--'\\  |  `---.|  |\\  \\    |  |      `'  '-'  '('  '-'(_.-' .--. .--. .--.  ");
                    gotoxy(22,22); printf(" `--' `--'   `-----'  `------'`--' '--'   `--'        `-----'   `-----'    '--' '--' '--'  ");
                    controlpisc++;
                    Sleep(500);
                  } 
                    Sleep(1000);
                    system("cls");
                    textcolor(WHITE);}
             else {
              pontosmal++;system("cls");controlpisc=0;
              while(controlpisc<=5){
                    if(controlpisc==0){textcolor(8);Sleep(50);}
                    if(controlpisc==1){textcolor(LIGHTRED);Sleep(50);}
                    if(controlpisc==2){textcolor(8);Sleep(50);}
                    if(controlpisc==3){textcolor(LIGHTRED);Sleep(50);}
                    if(controlpisc==4){textcolor(8);Sleep(50);}
                    if(controlpisc==5){textcolor(LIGHTRED);Sleep(50);}
                    
                     gotoxy(24,5);printf("      (`-.                              ('-.                         ");
                     gotoxy(24,6);printf("    _(OO  )_                          _(  OO)                        ");
                     gotoxy(24,7);printf(",--(_/   ,. \\ .-'),-----.    .-----. (,------.                       ");
                     gotoxy(24,8);printf("\\   \\   /(__/( OO'  .-.  '  '  .--./  |  .---'                       ");
                     gotoxy(24,9);printf(" \\   \\ /   / /   |  | |  |  |  |('-.  |  |                           ");
                     gotoxy(24,10);printf("  \\   '   /, \\_) |  |\\|  | /_) |OO  )(|  '--.                        ");
                     gotoxy(24,11);printf("   \\     /__)  \\ |  | |  | ||  |`-'|  |  .--'                        ");
                     gotoxy(24,12);printf("    \\   /       `'  '-'  '(_'  '--'\\  |  `---.                       ");
                     gotoxy(24,13);printf("     `-'          `-----'    `-----'  `------'                       ");
                     gotoxy(24,14);printf("   ('-.  _  .-')  _  .-')                            ,---.,---.,---. ");
                     gotoxy(24,15);printf(" _(  OO)( \\( -O )( \\( -O )                           |   ||   ||   | ");
                     gotoxy(24,16);printf("(,------.,------. ,------.  .-'),-----.  ,--. ,--.   |   ||   ||   | ");
                     gotoxy(24,17);printf(" |  .---'|   /`. '|   /`. '( OO'  .-.  ' |  | |  |   |   ||   ||   | ");
                     gotoxy(24,18);printf(" |  |    |  /  | ||  /  | |/   |  | |  | |  | | .-') |   ||   ||   | ");
                     gotoxy(24,19);printf("(|  '--. |  |_.' ||  |_.' |\\_) |  |\\|  | |  |_|( OO )|  .'|  .'|  .' ");
                     gotoxy(24,20);printf(" |  .--' |  .  '.'|  .  '.'  \\ |  | |  | |  | | `-' /`--' `--' `--'  ");
                     gotoxy(24,21);printf(" |  `---.|  |\\  \\ |  |\\  \\    `'  '-'  '('  '-'(_.-' .--. .--. .--.  ");
                     gotoxy(24,22);printf(" `------'`--' '--'`--' '--'     `-----'   `-----'    '--' '--' '--'  ");
                     controlpisc++;
                     Sleep(500);
                  }
                     
                     Sleep(1000);
                     system("cls");textcolor(WHITE);}

      // tela final do quiz

       gotoxy(43,14);printf("Agora apos todas essas perguntas.");Sleep(2000);
       system("cls");
       gotoxy(30,14);printf("Veja sua classificacao como um eximio biologo!!! ou nao...");Sleep(3000);
       system("cls");
       gotoxy(51,12);printf("PONTUACAO FINAL:");Sleep(500);
          textcolor(RED);gotoxy(38,15);printf("ERROS: %02d", pontosmal);Sleep(500);
          textcolor(GREEN);gotoxy(70,15);printf("ACERTOS: %02d", pontosbom);
          textcolor(WHITE);Sleep(5000);
       if (pontosbom >= 0 && pontosbom <= 3){
        gotoxy(40,19);printf("E meu amigo, voce nao e bom nessa area...");gotoxy(40,21);printf("Pressione para finalizar o quiz\.\.\.");getch();system("cls");
       } else if (pontosbom > 3 && pontosbom <= 5){
        gotoxy(40,19);printf("Ta na media... pra pior!");gotoxy(40,21); printf("Pressione para finalizar o quiz\.\.\.");getch();system("cls");
       }else if (pontosbom > 5 && pontosbom <= 7){
        gotoxy(38,19);printf("Voce tentou e nao foi tao mal... Boa tentativa!");gotoxy(38,21);printf("Pressione para finalizar o quiz\.\.\.");getch();system("cls");
       } else if (pontosbom > 7 && pontosbom <= 8){
        gotoxy(40,19);printf("Parabens, deve ter errado por detalhe.");printf("Pressione para finalizar o quiz\.\.\.");getch();system("cls");
       } else if(pontosbom > 8 && pontosbom <= 10){textcolor(LIGHTCYAN);gotoxy(40,19);printf("MEUS SINCEROS PARABENS!!! MANJA MUITO DE BIOQUIMICA");textcolor(WHITE);gotoxy(40,21);printf("Pressione para finalizar o quiz\.\.\.");getch();system("cls");}
          
      // FINALIZAÇÂO DO QUIZ
      textcolor(LIGHTBLUE);
      gotoxy(23,2);printf("  *******   ******   *******   **   ********      **     *******     *******        ");
      gotoxy(23,3);printf(" **/////** /*////** /**////** /**  **//////**    ****   /**////**   **/////**       ");
      gotoxy(23,4);printf(" **     //**/*   /** /**   /** /** **      //    **//**  /**    /** **     //**      ");
      gotoxy(23,5);printf("/**      /**/******  /*******  /**/**           **  //** /**    /**/**      /**      ");
      gotoxy(23,6);printf("/**      /**/*//// **/**///**  /**/**    ***** **********/**    /**/**      /**      ");
      gotoxy(23,7);printf("//**     ** /*    /**/**  //** /**//**  ////**/**//////**/**    ** //**     **       ");
      gotoxy(23,8);printf(" //*******  /******* /**   //**/** //******** /**     /**/*******   //*******        ");
      gotoxy(23,9);printf(" ///////   ///////  //     // //   ////////  //      // ///////     ///////         ");
      gotoxy(23,10);printf("                                                                                     ");
      textcolor(CYAN);gotoxy(23,12);printf("                              ******                                                ");
      gotoxy(23,11);printf("                            /**///**  ******  ******                               ");
      gotoxy(23,12);printf("                              /**  /** **////**//**//*                               ");
      gotoxy(23,13);printf("                              /****** /**   /** /** /                                ");
      gotoxy(23,14);printf("                              /**///  /**   /** /**                                  ");
      gotoxy(23,15);printf("                              /**     //****** /***                                  ");
      gotoxy(23,16);printf("                             //       //////  ///                                   ");
      textcolor(LIGHTCYAN);gotoxy(23,19);printf("                      **                                   ** ** **                  ");
      gotoxy(23,17);printf("                     //            *****                  /**/**/**                  ");
      gotoxy(23,18);printf("                    //            *****                  /**/**/**                  ");
      gotoxy(23,19);printf("                     **  ******  **///**  ******   ******/**/**/**                  ");
      gotoxy(23,20);printf("                     /** **////**/**  /** //////** //**//*/**/**/**                  ");
      gotoxy(23,21);printf("                     /**/**   /**//******  *******  /** / /**/**/**                  ");
      gotoxy(23,22);printf("                   **/**/**   /** /////** **////**  /**   // // //                   ");
      gotoxy(23,23);printf("                  //*** //******   ***** //********/***    ** ** **                  ");
      gotoxy(23,24);printf("                  ///   //////   /////   //////// ///    // // //                   ");
      textcolor(WHITE);

    return 0;
  }
