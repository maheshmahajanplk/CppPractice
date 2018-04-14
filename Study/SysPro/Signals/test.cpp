#include <iostream>
#include <unistd.h>
#include <stdlib.h>
#include "SignalHandler.hpp"

using namespace std;
	 
main()
{

  int iret;

  try
  {
    SignalHandler signalHandler;

    // Register signal handler to handle kill signal

    signalHandler.setupSignalHandlers();

    // Infinite loop until signal ctrl-c (KILL) received

    while(!signalHandler.gotExitSignal())
    {
        sleep(1);

    }

    iret = EXIT_SUCCESS;
  }
  catch (SignalException& e)
  {
    std::cerr << "SignalException: " << e.what() << std::endl;
    iret = EXIT_FAILURE;
  }

  return(iret);

}
