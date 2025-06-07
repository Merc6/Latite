#include "Command.h"

#include "client/Latite.h"
#include "client/misc/ClientMessageQueue.h"
#include "pch.h"
#include "util/Util.h"

/*
Command::Command(std::string const& name, std::string const& description, std::string const& usage, std::vector<std::string> aliases)
	: cmdName(name), description(description), usage(usage) {
	this->aliases = { name };
	for (auto& a : aliases) {
		this->aliases.push_back(a);
	}
}*/

void Command::message(std::wstring const& str, bool error) {
    std::wstring fin = L"";
    if (!error) {
        fin = util::WFormat(L"[&9Latite&r] " + util::WFormat(str));
    } else {
        fin = util::WFormat(L"&c" + util::WFormat(str));
    }
    Latite::get().getClientMessageQueue().display(fin);
}

void Command::message(std::string const& str, bool error) {
    message(util::StrToWStr(str), error);
}
