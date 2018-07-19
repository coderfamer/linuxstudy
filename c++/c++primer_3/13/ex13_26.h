#pragma once

#include <vector>
#include <string>
#include <initializer_list>
#include <memory>
#include <exception>

using namespace std;

class ConstStrBlobStr;

class StrBlob
{
public:
    using size_type = vector<string>::size_type;
    friend class ConstStrBlobStr;

    ConstStrBlobStr begin() const;
    ConstStrBlobStr end() const;

    StrBlob() : m_data(make_shared<vector<string>>())
    {  }
    StrBlob(initializer_list<string> il) : m_data(make_shared<vector<string>>(il))
    {  }

    StrBlob(const StrBlob &sb) : m_data(make_shared<vector<string>>(*sb.m_data))
    {  }
    StrBlob& operator=(const StrBlob& sb);

    size_type size() const { return m_data->size(); }
    bool empty() const { return m_data->empty(); }

    void push_back(const string &t) { m_data->push_back(t); }
    void pop_back()
    {
        check(0, "pop_back on empty StrBlob");
        m_data->pop_back();
    }
    
    string &front()
    {
        check(0, "front on empty StrBlob");
        return m_data->front();
    }

    string &back()
    {
        check(0, "back on empty StrBlob");
        return m_data->back();
    }

    const string &front() const
    {
        check(0, "front on empty StrBlob");
        return m_data->front();
    }

    const string &back() const
    {
        check(0, "back on empty StrBlob");
        return m_data->back();
    }

private:
    void check(size_type i, const string &msg) const
    {
        if (i > m_data->size())
            throw out_of_range(msg);
    }

private:
    shared_ptr<vector<string>> m_data;
};



class ConstStrBlobStr
{
public:
    ConstStrBlobStr() : m_curr(0)
    {  }
    ConstStrBlobStr(const StrBlob &a, size_t sz = 0) : m_wptr(a.m_data), m_curr(sz)
    {  }
    bool operator!=(ConstStrBlobStr &p)
    { return p.m_curr != m_curr; }
    const string &deref() const
    {
        auto p = check(m_curr, "dereference past end");
        return (*p)[m_curr];
    }

    ConstStrBlobStr &incr()
    {
        check(m_curr, "increment past end of StrBlobPtr");
        ++m_curr;
        return *this;
    }




private:
    shared_ptr<vector<string>> check(size_t i, const string &msg) const 
    {
        auto ret = m_wptr.lock();
        if (!ret)
            throw runtime_error("unbound StrBlobPtr");
        if (i >= ret->size())
            throw out_of_range(msg);

        return ret;
    }

    weak_ptr<vector<string>> m_wptr;
    size_t m_curr;
};

ConstStrBlobStr StrBlob::begin() const
{
    return ConstStrBlobStr(*this);
}

ConstStrBlobStr StrBlob::end() const
{
    return ConstStrBlobStr(*this, m_data->size());
}

StrBlob &StrBlob::operator=(const StrBlob &sb)
{
    m_data = make_shared<vector<string>>(*sb.m_data);
    return *this;
}
