/* C++ code produced by gperf version 3.0.3 */
/* Command-line: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/gperf -L C++ -E -t /private/var/folders/ql/wkc3wf7s0cgbkl3hnct6sdcr0000gp/T/eharms/tiopentokv6-generated/KrollGeneratedBindings.gperf  */
/* Computed positions: -k'23' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif

#line 3 "/private/var/folders/ql/wkc3wf7s0cgbkl3hnct6sdcr0000gp/T/eharms/tiopentokv6-generated/KrollGeneratedBindings.gperf"


#include <string.h>
#include <v8.h>
#include <KrollBindings.h>

#include "com.tokbox.ti.opentok.SubscriberProxy.h"
#include "com.tokbox.ti.opentok.OpentokViewProxy.h"
#include "com.tokbox.ti.opentok.SessionProxy.h"
#include "com.tokbox.ti.opentok.OpentokModule.h"
#include "com.tokbox.ti.opentok.ConnectionProxy.h"
#include "com.tokbox.ti.opentok.StreamProxy.h"
#include "com.tokbox.ti.opentok.PublisherProxy.h"


#line 19 "/private/var/folders/ql/wkc3wf7s0cgbkl3hnct6sdcr0000gp/T/eharms/tiopentokv6-generated/KrollGeneratedBindings.gperf"
struct titanium::bindings::BindEntry;
/* maximum key range = 10, duplicates = 0 */

class OpentokBindings
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static struct titanium::bindings::BindEntry *lookupGeneratedInit (const char *str, unsigned int len);
};

inline unsigned int
OpentokBindings::hash (register const char *str, register unsigned int len)
{
  static unsigned char asso_values[] =
    {
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43,  5, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43,  0,
       0, 43, 43,  0, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43
    };
  return len + asso_values[(unsigned char)str[22]];
}

struct titanium::bindings::BindEntry *
OpentokBindings::lookupGeneratedInit (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 7,
      MIN_WORD_LENGTH = 33,
      MAX_WORD_LENGTH = 38,
      MIN_HASH_VALUE = 33,
      MAX_HASH_VALUE = 42
    };

  static struct titanium::bindings::BindEntry wordlist[] =
    {
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 26 "/private/var/folders/ql/wkc3wf7s0cgbkl3hnct6sdcr0000gp/T/eharms/tiopentokv6-generated/KrollGeneratedBindings.gperf"
      {"com.tokbox.ti.opentok.StreamProxy", ::com::tokbox::ti::opentok::StreamProxy::bindProxy, ::com::tokbox::ti::opentok::StreamProxy::dispose},
#line 23 "/private/var/folders/ql/wkc3wf7s0cgbkl3hnct6sdcr0000gp/T/eharms/tiopentokv6-generated/KrollGeneratedBindings.gperf"
      {"com.tokbox.ti.opentok.SessionProxy", ::com::tokbox::ti::opentok::opentok::SessionProxy::bindProxy, ::com::tokbox::ti::opentok::opentok::SessionProxy::dispose},
#line 24 "/private/var/folders/ql/wkc3wf7s0cgbkl3hnct6sdcr0000gp/T/eharms/tiopentokv6-generated/KrollGeneratedBindings.gperf"
      {"com.tokbox.ti.opentok.OpentokModule", ::com::tokbox::ti::opentok::OpentokModule::bindProxy, ::com::tokbox::ti::opentok::OpentokModule::dispose},
#line 27 "/private/var/folders/ql/wkc3wf7s0cgbkl3hnct6sdcr0000gp/T/eharms/tiopentokv6-generated/KrollGeneratedBindings.gperf"
      {"com.tokbox.ti.opentok.PublisherProxy", ::com::tokbox::ti::opentok::PublisherProxy::bindProxy, ::com::tokbox::ti::opentok::PublisherProxy::dispose},
#line 21 "/private/var/folders/ql/wkc3wf7s0cgbkl3hnct6sdcr0000gp/T/eharms/tiopentokv6-generated/KrollGeneratedBindings.gperf"
      {"com.tokbox.ti.opentok.SubscriberProxy", ::com::tokbox::ti::opentok::SubscriberProxy::bindProxy, ::com::tokbox::ti::opentok::SubscriberProxy::dispose},
#line 22 "/private/var/folders/ql/wkc3wf7s0cgbkl3hnct6sdcr0000gp/T/eharms/tiopentokv6-generated/KrollGeneratedBindings.gperf"
      {"com.tokbox.ti.opentok.OpentokViewProxy", ::com::tokbox::ti::opentok::OpentokViewProxy::bindProxy, ::com::tokbox::ti::opentok::OpentokViewProxy::dispose},
      {""}, {""}, {""},
#line 25 "/private/var/folders/ql/wkc3wf7s0cgbkl3hnct6sdcr0000gp/T/eharms/tiopentokv6-generated/KrollGeneratedBindings.gperf"
      {"com.tokbox.ti.opentok.ConnectionProxy", ::com::tokbox::ti::opentok::ConnectionProxy::bindProxy, ::com::tokbox::ti::opentok::ConnectionProxy::dispose}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
#line 28 "/private/var/folders/ql/wkc3wf7s0cgbkl3hnct6sdcr0000gp/T/eharms/tiopentokv6-generated/KrollGeneratedBindings.gperf"

