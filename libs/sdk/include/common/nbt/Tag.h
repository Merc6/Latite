#pragma once
#include <sdk/common/util/BasicDataOutput.h>
#include <sdk/common/util/BasicPrintStream.h>

namespace SDK {
class Tag {
  public:
    virtual ~Tag() = 0;
    virtual void deleteChildren() = 0;
    virtual void write(BasicDataOutput&) const = 0;
    virtual void load(class IDataInput&) = 0;
    virtual std::string toString() const = 0;
    virtual uint8_t getId() const = 0;
    virtual bool equals(class Tag const&) const = 0;
    virtual void print(std::string const&, BasicPrintStream&) const = 0;
    virtual std::unique_ptr<class Tag> copy() const = 0;
    virtual uint64_t hash() const = 0;
};
} // namespace SDK