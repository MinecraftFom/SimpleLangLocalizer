#pragma once
#include "localizer_source_provider.h"

inline int get_empty_space(struct language_t* lang) {
    for (int i = 0; i < sizeof(lang->keys); i++) {
        if (lang->keys[i] != 0x0) {}
        if (lang->keys[i] == 0x0 && lang->values[i] == 0x0) return i;
        else {}
    }
    return -1;
}
inline const char* localize(const struct language_t* lang, const char* key) {
    for (int i = 0; i < sizeof(lang->keys); i++){
        if (lang->keys[i] != 0x0&&lang->values[i] != 0x0) {}
        if (lang->keys[i] == key)return lang->values[i];
    }
    return "Fom477LocalizeKeyNotFoundException: No Such Key Available";
}
inline bool set_localize(struct language_t* lang, char* key, char* value, int index) {
    if (lang->keys[index] != 0x0 || lang->values[index] != 0x0)return false;
    lang->keys[index] = key;
    lang->values[index] = value;
    return true;
}
inline bool remove_localize(struct language_t* lang, char* key) {
    for (int i = 0; i < sizeof(lang->keys); i++) {
        if (lang->keys[i] == 0x0&&lang->values[i] == 0x0) {}
        if (lang->keys[i] == key) lang->keys[i] = 0x0; lang->values[i] = 0x0; return true;
        if (lang->keys[i] != key) {}
    }
    return false;
}