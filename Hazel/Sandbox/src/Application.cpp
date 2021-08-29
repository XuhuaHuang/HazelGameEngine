namespace HazelSetupTest {

	__declspec(dllimport) void printHello();
}

int main(void)
{
	HazelSetupTest::printHello();
	
	return 0;
}