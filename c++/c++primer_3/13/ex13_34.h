#pragma once

#include <string>
#include <set>

using namespace std;

class Folder;

class Message
{
    friend void swap(Message &, Message &);
    friend class Folder;
public:
    explicit Message(const string &str = "") : contents(str) 
    {  }
    Message(const Message &);
    Message &operator=(const Message &);
    ~Message();
    void save(Folder &);
    void remove(Folder &);

    void print_debug();

private:
    string contents;
    set<Folder *> folders;

    void add_to_folders(const Message &);
    void remove_from_folders();

    void add_flder(Folder *f) { folders.insert(f); }
    void rem_flder(Folder *f) { folders.erase(f); }
};

void swap(Message &, Message &);

class Folder
{
    friend void swap(Folder &, Folder &);
    friend class Message;
public:
    Folder() = default;
    Folder(const Folder &);
    Folder &operator=(const Folder &);
    ~Folder();

    void print_debug();

private:
    set<Message *> msgs;

    void add_to_msg(const Folder &);
    void remove_from_msg();

    void add_msg(Message *m) { msgs.insert(m); }
    void rem_msg(Message *m) { msgs.erase(m); }

};

void swap(Folder &, Folder &);
