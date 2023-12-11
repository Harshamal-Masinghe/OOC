#include "Feedback.h"

void Feedback::addFeedback(string fed)
{
	feedback = fed;
}

void Feedback::displayFeedback()
{
	cout << "Feedback: " << feedback << endl;
}

void Feedback::handleFeedback()
{
}
