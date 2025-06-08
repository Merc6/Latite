#pragma once

class LocalizeData {
  public:
    struct Language {
        std::string name;
        std::string langCode;

        // int: An embedded resource
        // string: A network resource
        std::variant<int, std::string> resource;
        std::unordered_map<std::string, std::wstring> localizeCache;

        Language(
            std::variant<int, std::string> resource,
            const std::string& langCode
        ) :
            resource(resource),
            langCode(langCode) {}
    };

    LocalizeData();

    std::string
    getResourceContent(const std::variant<int, std::string>& resource);
    bool
    parseLangFile(Language& lang, const std::string& content, bool updateCache);
    void loadLanguage(Language& lang, bool updateCache);

    const std::vector<std::shared_ptr<Language>>& getLanguages() const {
        return languages;
    }

    std::wstring get(const std::string& key);

  private:
    std::optional<std::wstring>
    tryGetKey(Language& lang, const std::string& key);
    std::shared_ptr<Language> fallbackLanguage;
    std::vector<std::shared_ptr<Language>> languages;
};