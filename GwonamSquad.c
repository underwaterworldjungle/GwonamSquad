/* Gwonam Squad by Jeremy Bird (github.com/underwaterworldjungle) 2022 */

#include <stdio.h>
#include <unistd.h>

int main()
{
	// TITLE SCREEN
	
	printf("\n  /$$$$$$  /$$      /$$  /$$$$$$  /$$   /$$  /$$$$$$  /$$      /$$\n /$$__  $$| $$  /$ | $$ /$$__  $$| $$$ | $$ /$$__  $$| $$$    /$$$\n| $$  \\__/| $$ /$$$| $$| $$  \\ $$| $$$$| $$| $$  \\ $$| $$$$  /$$$$\n| $$ /$$$$| $$/$$ $$ $$| $$  | $$| $$ $$ $$| $$$$$$$$| $$ $$/$$ $$\n| $$|_  $$| $$$$_  $$$$| $$  | $$| $$  $$$$| $$__  $$| $$  $$$| $$\n| $$  \\ $$| $$$/ \\  $$$| $$  | $$| $$\\  $$$| $$  | $$| $$\\  $ | $$\n|  $$$$$$/| $$/   \\  $$|  $$$$$$/| $$ \\  $$| $$  | $$| $$ \\/  | $$\n \\______/ |__/     \\__/ \\______/ |__/  \\__/|__/  |__/|__/     |__/\n");
	sleep(1);
	printf("\n          /$$$$$$   /$$$$$$  /$$   /$$  /$$$$$$  /$$$$$$$\n         /$$__  $$ /$$__  $$| $$  | $$ /$$__  $$| $$__  $$\n        | $$  \\__/| $$  \\ $$| $$  | $$| $$  \\ $$| $$  \\ $$\n        |  $$$$$$ | $$  | $$| $$  | $$| $$$$$$$$| $$  | $$\n         \\____  $$| $$  | $$| $$  | $$| $$__  $$| $$  | $$\n         /$$  \\ $$| $$/$$ $$| $$  | $$| $$  | $$| $$  | $$\n        |  $$$$$$/|  $$$$$$/|  $$$$$$/| $$  | $$| $$$$$$$/\n         \\______/  \\____ $$$ \\______/ |__/  |__/|_______/\n                        \\__/\n");
	sleep(1);
	printf("\n             MMMMMMMMMMMNOoc:;;;,,,,;;;:lxXMMMMMMMMMM\n             MMMMMMMMMW0o:;;;;;,,''',;;;;:kWMMMMMMMMM\n             MMMMMMMMMKl;;,,,,'''''',,,,;oXMMMMMMMMMM\n             MMMMMMMMWk;;;;;;;,,;;;,,'';dXMMMMMMMMMMM\n             MMMMMMMMWKo;;:clc:;:lc:;;:xXWMMMMMMMMMMM\n             MMMMMMMWOl:'':llcc::cc;;:,,:dKWMMMMMMMMM\n             MMMMMMNx,....,cdxdl::::co;...:OWMMMMMMMM\n             MMMMNOc'......':dkxooooxdc,...:0WMMMMMMM\n             MMXkc'.........,okxoollolcc;'..;xNMMMMMM\n             Nk:'...........:xkkxdddlcoddl;,.'lXMMMMM\n             :'......'.....'cxkkxdxd:;clll:;'.,kWMMMM\n             ,.......''.....,lxkkkko,..,'...'.'dWMMMM\n             x,......,;,'....':oxkkx:..',...'.;OWMMMM\n             Wk;....';:ooc;'...',:cxl'..,'.'cd0WMMMMM\n             MW0:..',;cdddl;,......;:'...';dXMMMMMMMM\n             MMM0:',,';lccc;''''''''''''''c0MMMMMMMMM\n             MMMWkcc;.'',;;;,,,,,,,,,,,''':0MMMMMMMMM\n             MMMMWN0c....','...............lXMMMMMMMM\n             MMMMMM0:....','...............,kWMMMMMMM\n             MMMMMM0:....,,'...............'dWMMMMMMM\n             MMMMMM0:...',,'...............'dWMMMMMMM\n             MMMMMMKc...',,'................dWMMMMMMM\n             MMMMMMXc...,,,''...............:0MMMMMMM\n             MMMMMMXl..',;,,'...............'dWMMMMMM\n             MMMMMMNo..',,,'.................lNMMMMMM\n             MMMMMMWk'...'...................cXMMMMMM\n             MMMMMMMKc.......................;kWMMMMM\n             MMMMMMN0o'.......................;kXWWX0\n             MMMMMMk;.......,;;,'''..'''........;cc,;\n             MMMMMMk'....'cdOXKOkkxdddkko:,,.......'l\n");
	sleep(1);
	printf("\n\nGWONAM SQUAD  v0.10\n");
	sleep(1);
	printf("An adventure game by Jeremy Bird\n\n");
	sleep(2);
	printf("PRESS [ENTER] TO START");
	while(getchar()!='\n');

	// GAME SETUP

	printf("\nEnter your name to join the Squad. (Up to 15 characters, no spaces:)\n\n");
	char name[15];
	scanf("%s",name);
	printf("\nSquadallah! Welcome to GWONAM SQUAD, %s.\n\n\n",name);
	printf("MMMMMMMMMMMMMMMMMMMMMMMMMMMWWXOxolodxOXWWWMMMWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMMMMMMMMNKxoccc:;::clxkKWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMMMMMMMXxc:cc:c:,,:::::cOWMMMMMMMMMMMMMMMMWX0KWMMMMMMMMMMMMMMM\nMMMMWXKKXNWWWWMMMMMMMMMMNxcc::::cc:c:;:;,;dXMMMMMMMMMMMMWXOkxodxkkk0NWMMMMMMMMMM\nMMMMWOccloddxO0kdxOXWMMMXo:c::::cllc:c::::lOXWMMMMMWNOdoolldddolllcoKWMMMMMMMMMM\nMMMMMNOdlcclodolc:;:dkOKXx;,,;;:ccc::::::locoO00kdlc:,''',:kXNXKKXXNWMMMMMMMMMMM\nMMMMMMMWNXK00X0c,;;'''',;,'.'',,:lddoooooxkd;,,''...'''''',lXMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMWk;'''..''''''''',;cdxkkxkkkkOo,''''';lddc;''oXMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMO:lkOxc,'..''''''',;:lxkkkOOkd;.''cOXWMMWKxo0WMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMNKNMMMN0kd:'''..''''',cxxdxOxxo;.:KWMMMMMMMWWMMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMWMMMMMMMKo;''''''''''cxxkOkddc'oNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMWWMMMMMMMWXk:'''''''''ckkkkko;'dWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMMMMMMMMMMW0:.''''''';ldxkkc''oNMWMMMMMMMMMMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMMMMMMMMMMW0:..''''''',cddxdc,:0WWWWN0kkxk0NWMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMMMMMMMMMW0c,'..''..'',;::::,'';lllc:,'..'':kNMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMMMMMMMMNx;'.''''''','',,,''''.......''''''.:KMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMMMMMMMNd'.......''''.............''''''''';kNMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMMMMMMMXl.''''''''''''...................,o0WMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMMMMMMMW0:''''''''''''''''''...........'oKWMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMMMMMMMMWKdc,'''''''''''''''''',:c:;;;cOWMMMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNKOkxdooolllodxO00KKXWWWNNNWMMMMMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
	sleep(2);
	
	// SLEEP
	
	printf("\n\nHow long will you sleep? Enter a duration in seconds, then close your eyes.\n\n");
	double snooze;
	scanf("%lf",&snooze);
	sleep(snooze);
	
	// WAKE
	
	printf("\nSQUADALLAH!\n\n");
	sleep(2);
	printf("The birds are singing!\n");
	sleep(1);
	printf("Press [Enter] to grab my stuff.\n");
	getchar();
	while(getchar()!='\n');
	printf("There is no time! Your sword is enough.\n");
	sleep(2);
	
	// END
	
	printf("\nPress [Enter] to get off.\n");
	while(getchar()!='\n');
	printf("Squadallah! We are off!\n");
	sleep(5);
	
	return 0;
}
