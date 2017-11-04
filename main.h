#include "eval.h"
#include <thread>





int main(int argc, char* argv[]);

/*
class k2main : public k2engine
{

public:


    k2main();
    void start();

    void LevelCommand(std::string in);
    void MemoryCommand(std::string in);


protected:


    bool force;
    bool quit;
    bool pondering_enabled;

#ifndef DONT_USE_THREAD_FOR_INPUT
    std::thread thr;
// for compilers with C++11 support under Linux
// -pthread option must be used for gcc linker
#endif // USE_THREAD_FOR_INPUT


    typedef void(k2main::*method_ptr)(std::string);

    struct command_s
    {
        std::string command;
        method_ptr mptr;
    };


    bool ExecuteCommand(std::string in);
    bool LooksLikeMove(std::string in);
    void NewCommand(std::string in);
    void SetboardCommand(std::string in);
    void QuitCommand(std::string in);
    void PerftCommand(std::string in);
    void GoCommand(std::string in);
    void ForceCommand(std::string in);
    void SetNodesCommand(std::string in);
    void SetTimeCommand(std::string in);
    void SetDepthCommand(std::string in);
    void Unsupported(std::string in);
    void GetFirstArg(std::string in, std::string *first_word,
                     std::string *all_the_rest);
    void ProtoverCommand(std::string in);
    void StopEngine();
    void StopCommand(std::string in);
    void ResultCommand(std::string in);
    void XboardCommand(std::string in);
    void TimeCommand(std::string in);
    void EvalCommand(std::string in);
    void TestCommand(std::string in);
    void FenCommand(std::string in);
    void UciCommand(std::string in);
    void SetOptionCommand(std::string in);
    void IsReadyCommand(std::string in);
    void PositionCommand(std::string in);
    void ProcessMoveSequence(std::string in);
    void UciGoCommand(std::string in);
    void EasyCommand(std::string in);
    void HardCommand(std::string in);
    void PonderhitCommand(std::string in);
    void AnalyzeCommand(std::string in);
    void ExitCommand(std::string in);
    void SetvalueCommand(std::string in);
    void OptionCommand(std::string in);
};
*/
