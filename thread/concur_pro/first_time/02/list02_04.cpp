//
// Created by quan on 18-9-12.
//
#include <thread>
#include <string>


using namespace std;

void open_document_and_display_gui(string const &filename)
{
}

bool done_editing()
{
    return true;
}

enum command_type
{
    open_new_document
};

struct user_command
{
    command_type  type;

    user_command() : type(open_new_document)
    {}
};

user_command get_user_input()
{
    return user_command();
}

string get_filename_frome_user()
{
    return "foo.doc";
}

void process_user_input(user_command const &cmd)
{}

void edit_document(string const &filename)
{
    open_document_and_display_gui(filename);
    while(!done_editing())
    {
        user_command cmd =  get_user_input();
        if (cmd.type == open_new_document)
        {
            string const new_name = get_filename_frome_user();
            thread t(edit_document, new_name);
            t.detach();
        } else{
            process_user_input(cmd);
        }
    }
}

int main()
{
    edit_document("bar.doc");

}