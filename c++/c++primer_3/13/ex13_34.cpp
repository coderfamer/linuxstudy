#include <iostream>

#include "ex13_34.h"

void swap(Message &lhs, Message &rhs)
{
    using std::swap;
    lhs.remove_from_folders();
    rhs.remove_from_folders();

    swap(lhs.folders, rhs.folders);
    swap(lhs.contents, rhs.contents);

    lhs.add_to_folders(lhs);
    rhs.add_to_folders(rhs);
}

void Message::save(Folder &f)
{
    add_flder(&f);
    f.add_msg(this);
}

void Message::remove(Folder &f)
{
    rem_flder(&f);
    f.rem_msg(this);
}

void Message::add_to_folders(const Message &m)
{
    for (auto f : m.folders)
        f->add_msg(this);
}

Message::Message(const Message &m) : contents(m.contents), folders(m.folders)
{
    add_to_folders(m);
}

void Message::remove_from_folders()
{
    for (auto f : folders)
        f->rem_msg(this);
}

Message::~Message()
{
    remove_from_folders();
}

Message &Message::operator=(const Message &rhs)
{
    remove_from_folders();
    contents = rhs.contents;
    folders = rhs.folders;
    add_to_folders(rhs);
    return *this;
}

void Message::print_debug()
{
    cout << contents << endl;
}


