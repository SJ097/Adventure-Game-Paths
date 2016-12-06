// Global variables
char name[20];
int fork;
int cut;

// Function prototypes
void left();
void right();
void left1();
void cont();
void castle();

// Different functions continuing progression depending on user's choices; Function name reflects paths
void left() {

	cin.get();

	cout << "\nThe left path is quite narrow so you pray that there are no enemies here.\n";
	
	cin.get();

	cout << "\nSuddenly, an armored character walks into the path, looks straight at you and draws his sword. Great.\n";

	cin.get();

	int armor;

	cout << "\nThe character starts charging at you, so you draw your sword and prepare. What will you do?\n1. Counter attack\n2. Defend\n\n";
	cin >> armor;

	if (armor == 1)
		left1();

	else if (armor == 2) {
		cin.get();
		cout << "\nThe character easily overpowers you, hurts you, and walks away. You can't save the princess.\n\nGAME OVER\n";
		cin.get();
	}

	else { 
		cin.get();
		cout << "\nYou do nothing and the character fatally injures you.\n\nGAME OVER\n";
		cin.get();
	}

	return;
}

void left1() {

	cut = 1;

	cin.get();

	cout << "\nYou dodge the enemy's attack and slash them across the back. Weak, they draw back. Unfortunately, you received a cut on your shoulder.\n";

	cin.get();

	cout << "\nAnd so your quest continues. You worry for the Princess' sake so you hurry as much as you can.\n";

	cin.get();

	cont();

	return;

}

void right() {

	cin.get();

	cout << "\nThe right path is nice and wide. It would be a shame if-\n";

	cin.get();

	cout << "\nAn army of enemies. Of course.\n";

	cin.get();

	cout << "\nYou draw your sword, ready to attack. However you see another fine swordsman fending off the creatures.\n";

	cin.get();

	cout << "\nYou then help the swordsman defeat all the enemies in the field. The swordsman, named Ezlo, thanks you and goes his way.\nYou do the same.\n";

	cin.get();

	cont();

	return;
}

void cont() {

	cout << "\nYou see the castle not too far away and you charge towards it!\n";

	cin.get();

	cout << "\nThe guard stops you however and challenges you to a duel. He's been brainwashed!\n";

	cin.get();

	cout << "\nYou draw your sword and engage in battle with him.\n";

	if (cut == 1)
		cout << "\n\nYour cut arm hurts badly but you continue battling for the Princess!\n";

	cin.get();

	cout << "\nYou see an opening and attack. The guard falls and loses consciousness! You go into the castle!\n";

	castle();

}

void castle() {

	cin.get();

	cout << "\nYou climb up to the castle and see the Princess has been captured in a cage and is about to leave!\n";

	cin.get();

	cout << "\nBy reflex, you throw your sword at the chain suspending the cage and it falls! The Princess is shaken up but safe.\n";

	cin.get();

	cout << "\n'Who's messin' with mah escape plan?' You hear. Then, light shines on the figure stepping out of the shadow.\n";

	cin.get();

	cout << "\n'Heheh, nice to see ya, " << name << "! You ain't savin' da Princess this time!', screams Mugen, the guy who led the previous mass attack!\n";

	cin.get();

	cout << "\nYou draw your sword and waste no time in getting Mugen arrested once again!\n";

	cin.get();

	cout << "\nYou turn around to free the Princess";

	if (cut == 1)
		cout << ", who notices your cut. 'I'm sorry this had to happen, " << name << ". Let me take care of you!'\n";

	else cout << ", and you notice Ezlo taking Mugen away. 'Wait until mom hears about this!', he screams.\n";

	cin.get();

	cout << "\nYou saved the Princess, good job! You deserve that special lunch!\n";

	cin.get();
}