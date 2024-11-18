# SimpleLangLocalizer
As the title, this is a localizer for languages

*Code Example*
**Language C In Linux Build**


    #pragma comment(lib, "localizer.lib")
    #include <localizer_source_provider.h>


*The Code Above Includes The DLL And Its Headers*
The Lib Provides 4 Functions and 1 Structure
**Struct: *Language C In Linux Build***


    struct language_t;

**Functions: *Language C In Linux Build***


    extern int get_empty_space(struct language_t* lang);
    extern const char* localize(struct langauge_t* lang, const char* key);
    extern bool set_localize(struct language_t* lang, const char* key, const char* value, int index);
    extern bool remove_localize(struct language_t* lang, const char* key);


    
