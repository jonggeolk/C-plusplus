#pragma once
#include <iostream>

using namespace std;

class Mechanic
{
private:
	int health;
	int attack;

public:
	Mechanic();
	virtual~Mechanic();



	// °¡»ó ÇÔ¼öÀÇ °æ¿ì °¡»ó ÇÔ¼ö Å×ÀÌºíÀ» »ç¿ëÇÏ¿©
	// È£­ŒµÇ´Â ÇÔ¼ö¸¦ ½ÇÇà ½Ã°£¿¡ °áÁ¤ÇÏ¸ç, Á¤ÀûÀ¸·Î
	// ¼±¾ğµÈ ÇÔ¼ö´Â °¡»ó ÇÔ¼ö·Î ¼±¾ğÇÒ ¼ö ¾ø½À´Ï´Ù.

	virtual void Move();
};

