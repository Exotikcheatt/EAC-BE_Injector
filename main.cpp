#include "includes.h"

int main()
{
    ::ShowWindow(::GetConsoleWindow(), SW_HIDE);
    Inject* inject = new Inject();
    inject->inject_module_from_path_to_process_by_name(xor_w(L"C:\\Users\\hyper\\Desktop\\MW2_WORKING_INTERNAL_CHEAT-main\\dll\\dummy.dll"), xor_w(L"cod.exe"));
}