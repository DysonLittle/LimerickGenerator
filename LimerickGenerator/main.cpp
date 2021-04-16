#include <stdio.h>
#include <json/json.h>
#include <curl/curl.h>
#include <iostream>
#include "Limerick.h"

int main()
{
	Limerick limerick = Limerick("There was an old man with a beard\nwho said it is just as I feared\ntwo owls and a hen\nfour larks and a wren\nhave all built their nests in my beard");

	limerick.printFormattedLimerick();
	


	return 0;
}