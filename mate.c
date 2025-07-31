#define MATE_IMPLEMENTATION
#include "mate.h"

i32 main(){

  StartBuild();
  {
    
    Executable app = CreateExecutable((ExecutableOptions){
      .output = "I_alchemy_book",
      .flags = "-Wall `pkg-config --cflags gtk+-3.0 sqlite3` `pkg-config --libs gtk+-3.0 sqlite3`" 
    });

    AddFile(app, "./src/*.c");
    AddFile(app, "./libs/*.c");
    InstallExecutable(app);
  }
  EndBuild();
  return 0;
}
