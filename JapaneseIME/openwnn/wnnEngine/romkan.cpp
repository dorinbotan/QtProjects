/*
 * Qt implementation of OpenWnn library
 * This file is part of the Qt Virtual Keyboard module.
 * Contact: http://www.qt.io/licensing/
 *
 * Copyright (C) 2015  The Qt Company
 * Copyright (C) 2008-2012  OMRON SOFTWARE Co., Ltd.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "include/romkan.h"
#include "include/strsegment.h"
#include <QMap>

#include <QtCore/private/qobject_p.h>

class RomkanPrivate : public QObjectPrivate
{
public:
    /** HashMap for Romaji-to-Kana conversion (Japanese mode) */
    static QMap<QString, QString> initRomkanTable()
    {
        QMap<QString, QString> map;
        map.insert(QString("la"), QString("\u3041"));
        map.insert(QString("xa"), QString("\u3041"));
        map.insert(QString("a"), QString("\u3042"));
        map.insert(QString("li"), QString("\u3043"));
        map.insert(QString("lyi"), QString("\u3043"));
        map.insert(QString("xi"), QString("\u3043"));
        map.insert(QString("xyi"), QString("\u3043"));
        map.insert(QString("i"), QString("\u3044"));
        map.insert(QString("yi"), QString("\u3044"));
        map.insert(QString("ye"), QString("\u3044\u3047"));
        map.insert(QString("lu"), QString("\u3045"));
        map.insert(QString("xu"), QString("\u3045"));
        map.insert(QString("u"), QString("\u3046"));
        map.insert(QString("whu"), QString("\u3046"));
        map.insert(QString("wu"), QString("\u3046"));
        map.insert(QString("wha"), QString("\u3046\u3041"));
        map.insert(QString("whi"), QString("\u3046\u3043"));
        map.insert(QString("wi"), QString("\u3046\u3043"));
        map.insert(QString("we"), QString("\u3046\u3047"));
        map.insert(QString("whe"), QString("\u3046\u3047"));
        map.insert(QString("who"), QString("\u3046\u3049"));
        map.insert(QString("le"), QString("\u3047"));
        map.insert(QString("lye"), QString("\u3047"));
        map.insert(QString("xe"), QString("\u3047"));
        map.insert(QString("xye"), QString("\u3047"));
        map.insert(QString("e"), QString("\u3048"));
        map.insert(QString("lo"), QString("\u3049"));
        map.insert(QString("xo"), QString("\u3049"));
        map.insert(QString("o"), QString("\u304a"));
        map.insert(QString("ca"), QString("\u304b"));
        map.insert(QString("ka"), QString("\u304b"));
        map.insert(QString("ga"), QString("\u304c"));
        map.insert(QString("ki"), QString("\u304d"));
        map.insert(QString("kyi"), QString("\u304d\u3043"));
        map.insert(QString("kye"), QString("\u304d\u3047"));
        map.insert(QString("kya"), QString("\u304d\u3083"));
        map.insert(QString("kyu"), QString("\u304d\u3085"));
        map.insert(QString("kyo"), QString("\u304d\u3087"));
        map.insert(QString("gi"), QString("\u304e"));
        map.insert(QString("gyi"), QString("\u304e\u3043"));
        map.insert(QString("gye"), QString("\u304e\u3047"));
        map.insert(QString("gya"), QString("\u304e\u3083"));
        map.insert(QString("gyu"), QString("\u304e\u3085"));
        map.insert(QString("gyo"), QString("\u304e\u3087"));
        map.insert(QString("cu"), QString("\u304f"));
        map.insert(QString("ku"), QString("\u304f"));
        map.insert(QString("qu"), QString("\u304f"));
        map.insert(QString("kwa"), QString("\u304f\u3041"));
        map.insert(QString("qa"), QString("\u304f\u3041"));
        map.insert(QString("qwa"), QString("\u304f\u3041"));
        map.insert(QString("qi"), QString("\u304f\u3043"));
        map.insert(QString("qwi"), QString("\u304f\u3043"));
        map.insert(QString("qyi"), QString("\u304f\u3043"));
        map.insert(QString("qwu"), QString("\u304f\u3045"));
        map.insert(QString("qe"), QString("\u304f\u3047"));
        map.insert(QString("qwe"), QString("\u304f\u3047"));
        map.insert(QString("qye"), QString("\u304f\u3047"));
        map.insert(QString("qo"), QString("\u304f\u3049"));
        map.insert(QString("qwo"), QString("\u304f\u3049"));
        map.insert(QString("qya"), QString("\u304f\u3083"));
        map.insert(QString("qyu"), QString("\u304f\u3085"));
        map.insert(QString("qyo"), QString("\u304f\u3087"));
        map.insert(QString("gu"), QString("\u3050"));
        map.insert(QString("gwa"), QString("\u3050\u3041"));
        map.insert(QString("gwi"), QString("\u3050\u3043"));
        map.insert(QString("gwu"), QString("\u3050\u3045"));
        map.insert(QString("gwe"), QString("\u3050\u3047"));
        map.insert(QString("gwo"), QString("\u3050\u3049"));
        map.insert(QString("ke"), QString("\u3051"));
        map.insert(QString("ge"), QString("\u3052"));
        map.insert(QString("co"), QString("\u3053"));
        map.insert(QString("ko"), QString("\u3053"));
        map.insert(QString("go"), QString("\u3054"));
        map.insert(QString("sa"), QString("\u3055"));
        map.insert(QString("za"), QString("\u3056"));
        map.insert(QString("ci"), QString("\u3057"));
        map.insert(QString("shi"), QString("\u3057"));
        map.insert(QString("si"), QString("\u3057"));
        map.insert(QString("syi"), QString("\u3057\u3043"));
        map.insert(QString("she"), QString("\u3057\u3047"));
        map.insert(QString("sye"), QString("\u3057\u3047"));
        map.insert(QString("sha"), QString("\u3057\u3083"));
        map.insert(QString("sya"), QString("\u3057\u3083"));
        map.insert(QString("shu"), QString("\u3057\u3085"));
        map.insert(QString("syu"), QString("\u3057\u3085"));
        map.insert(QString("sho"), QString("\u3057\u3087"));
        map.insert(QString("syo"), QString("\u3057\u3087"));
        map.insert(QString("ji"), QString("\u3058"));
        map.insert(QString("zi"), QString("\u3058"));
        map.insert(QString("jyi"), QString("\u3058\u3043"));
        map.insert(QString("zyi"), QString("\u3058\u3043"));
        map.insert(QString("je"), QString("\u3058\u3047"));
        map.insert(QString("jye"), QString("\u3058\u3047"));
        map.insert(QString("zye"), QString("\u3058\u3047"));
        map.insert(QString("ja"), QString("\u3058\u3083"));
        map.insert(QString("jya"), QString("\u3058\u3083"));
        map.insert(QString("zya"), QString("\u3058\u3083"));
        map.insert(QString("ju"), QString("\u3058\u3085"));
        map.insert(QString("jyu"), QString("\u3058\u3085"));
        map.insert(QString("zyu"), QString("\u3058\u3085"));
        map.insert(QString("jo"), QString("\u3058\u3087"));
        map.insert(QString("jyo"), QString("\u3058\u3087"));
        map.insert(QString("zyo"), QString("\u3058\u3087"));
        map.insert(QString("su"), QString("\u3059"));
        map.insert(QString("swa"), QString("\u3059\u3041"));
        map.insert(QString("swi"), QString("\u3059\u3043"));
        map.insert(QString("swu"), QString("\u3059\u3045"));
        map.insert(QString("swe"), QString("\u3059\u3047"));
        map.insert(QString("swo"), QString("\u3059\u3049"));
        map.insert(QString("zu"), QString("\u305a"));
        map.insert(QString("ce"), QString("\u305b"));
        map.insert(QString("se"), QString("\u305b"));
        map.insert(QString("ze"), QString("\u305c"));
        map.insert(QString("so"), QString("\u305d"));
        map.insert(QString("zo"), QString("\u305e"));
        map.insert(QString("ta"), QString("\u305f"));
        map.insert(QString("da"), QString("\u3060"));
        map.insert(QString("chi"), QString("\u3061"));
        map.insert(QString("ti"), QString("\u3061"));
        map.insert(QString("cyi"), QString("\u3061\u3043"));
        map.insert(QString("tyi"), QString("\u3061\u3043"));
        map.insert(QString("che"), QString("\u3061\u3047"));
        map.insert(QString("cye"), QString("\u3061\u3047"));
        map.insert(QString("tye"), QString("\u3061\u3047"));
        map.insert(QString("cha"), QString("\u3061\u3083"));
        map.insert(QString("cya"), QString("\u3061\u3083"));
        map.insert(QString("tya"), QString("\u3061\u3083"));
        map.insert(QString("chu"), QString("\u3061\u3085"));
        map.insert(QString("cyu"), QString("\u3061\u3085"));
        map.insert(QString("tyu"), QString("\u3061\u3085"));
        map.insert(QString("cho"), QString("\u3061\u3087"));
        map.insert(QString("cyo"), QString("\u3061\u3087"));
        map.insert(QString("tyo"), QString("\u3061\u3087"));
        map.insert(QString("di"), QString("\u3062"));
        map.insert(QString("dyi"), QString("\u3062\u3043"));
        map.insert(QString("dye"), QString("\u3062\u3047"));
        map.insert(QString("dya"), QString("\u3062\u3083"));
        map.insert(QString("dyu"), QString("\u3062\u3085"));
        map.insert(QString("dyo"), QString("\u3062\u3087"));
        map.insert(QString("ltsu"), QString("\u3063"));
        map.insert(QString("ltu"), QString("\u3063"));
        map.insert(QString("xtu"), QString("\u3063"));
        map.insert(QString(""), QString("\u3063"));
        map.insert(QString("tsu"), QString("\u3064"));
        map.insert(QString("tu"), QString("\u3064"));
        map.insert(QString("tsa"), QString("\u3064\u3041"));
        map.insert(QString("tsi"), QString("\u3064\u3043"));
        map.insert(QString("tse"), QString("\u3064\u3047"));
        map.insert(QString("tso"), QString("\u3064\u3049"));
        map.insert(QString("du"), QString("\u3065"));
        map.insert(QString("te"), QString("\u3066"));
        map.insert(QString("thi"), QString("\u3066\u3043"));
        map.insert(QString("the"), QString("\u3066\u3047"));
        map.insert(QString("tha"), QString("\u3066\u3083"));
        map.insert(QString("thu"), QString("\u3066\u3085"));
        map.insert(QString("tho"), QString("\u3066\u3087"));
        map.insert(QString("de"), QString("\u3067"));
        map.insert(QString("dhi"), QString("\u3067\u3043"));
        map.insert(QString("dhe"), QString("\u3067\u3047"));
        map.insert(QString("dha"), QString("\u3067\u3083"));
        map.insert(QString("dhu"), QString("\u3067\u3085"));
        map.insert(QString("dho"), QString("\u3067\u3087"));
        map.insert(QString("to"), QString("\u3068"));
        map.insert(QString("twa"), QString("\u3068\u3041"));
        map.insert(QString("twi"), QString("\u3068\u3043"));
        map.insert(QString("twu"), QString("\u3068\u3045"));
        map.insert(QString("twe"), QString("\u3068\u3047"));
        map.insert(QString("two"), QString("\u3068\u3049"));
        map.insert(QString("do"), QString("\u3069"));
        map.insert(QString("dwa"), QString("\u3069\u3041"));
        map.insert(QString("dwi"), QString("\u3069\u3043"));
        map.insert(QString("dwu"), QString("\u3069\u3045"));
        map.insert(QString("dwe"), QString("\u3069\u3047"));
        map.insert(QString("dwo"), QString("\u3069\u3049"));
        map.insert(QString("na"), QString("\u306a"));
        map.insert(QString("ni"), QString("\u306b"));
        map.insert(QString("nyi"), QString("\u306b\u3043"));
        map.insert(QString("nye"), QString("\u306b\u3047"));
        map.insert(QString("nya"), QString("\u306b\u3083"));
        map.insert(QString("nyu"), QString("\u306b\u3085"));
        map.insert(QString("nyo"), QString("\u306b\u3087"));
        map.insert(QString("nu"), QString("\u306c"));
        map.insert(QString("ne"), QString("\u306d"));
        map.insert(QString("no"), QString("\u306e"));
        map.insert(QString("ha"), QString("\u306f"));
        map.insert(QString("ba"), QString("\u3070"));
        map.insert(QString("pa"), QString("\u3071"));
        map.insert(QString("hi"), QString("\u3072"));
        map.insert(QString("hyi"), QString("\u3072\u3043"));
        map.insert(QString("hye"), QString("\u3072\u3047"));
        map.insert(QString("hya"), QString("\u3072\u3083"));
        map.insert(QString("hyu"), QString("\u3072\u3085"));
        map.insert(QString("hyo"), QString("\u3072\u3087"));
        map.insert(QString("bi"), QString("\u3073"));
        map.insert(QString("byi"), QString("\u3073\u3043"));
        map.insert(QString("bye"), QString("\u3073\u3047"));
        map.insert(QString("bya"), QString("\u3073\u3083"));
        map.insert(QString("byu"), QString("\u3073\u3085"));
        map.insert(QString("byo"), QString("\u3073\u3087"));
        map.insert(QString("pi"), QString("\u3074"));
        map.insert(QString("pyi"), QString("\u3074\u3043"));
        map.insert(QString("pye"), QString("\u3074\u3047"));
        map.insert(QString("pya"), QString("\u3074\u3083"));
        map.insert(QString("pyu"), QString("\u3074\u3085"));
        map.insert(QString("pyo"), QString("\u3074\u3087"));
        map.insert(QString("fu"), QString("\u3075"));
        map.insert(QString("hu"), QString("\u3075"));
        map.insert(QString("fa"), QString("\u3075\u3041"));
        map.insert(QString("fwa"), QString("\u3075\u3041"));
        map.insert(QString("fi"), QString("\u3075\u3043"));
        map.insert(QString("fwi"), QString("\u3075\u3043"));
        map.insert(QString("fyi"), QString("\u3075\u3043"));
        map.insert(QString("fwu"), QString("\u3075\u3045"));
        map.insert(QString("fe"), QString("\u3075\u3047"));
        map.insert(QString("fwe"), QString("\u3075\u3047"));
        map.insert(QString("fye"), QString("\u3075\u3047"));
        map.insert(QString("fo"), QString("\u3075\u3049"));
        map.insert(QString("fwo"), QString("\u3075\u3049"));
        map.insert(QString("fya"), QString("\u3075\u3083"));
        map.insert(QString("fyu"), QString("\u3075\u3085"));
        map.insert(QString("fyo"), QString("\u3075\u3087"));
        map.insert(QString("bu"), QString("\u3076"));
        map.insert(QString("pu"), QString("\u3077"));
        map.insert(QString("he"), QString("\u3078"));
        map.insert(QString("be"), QString("\u3079"));
        map.insert(QString("pe"), QString("\u307a"));
        map.insert(QString("ho"), QString("\u307b"));
        map.insert(QString("bo"), QString("\u307c"));
        map.insert(QString("po"), QString("\u307d"));
        map.insert(QString("ma"), QString("\u307e"));
        map.insert(QString("mi"), QString("\u307f"));
        map.insert(QString("myi"), QString("\u307f\u3043"));
        map.insert(QString("mye"), QString("\u307f\u3047"));
        map.insert(QString("mya"), QString("\u307f\u3083"));
        map.insert(QString("myu"), QString("\u307f\u3085"));
        map.insert(QString("myo"), QString("\u307f\u3087"));
        map.insert(QString("mu"), QString("\u3080"));
        map.insert(QString("me"), QString("\u3081"));
        map.insert(QString("mo"), QString("\u3082"));
        map.insert(QString("lya"), QString("\u3083"));
        map.insert(QString("xya"), QString("\u3083"));
        map.insert(QString("ya"), QString("\u3084"));
        map.insert(QString("lyu"), QString("\u3085"));
        map.insert(QString("xyu"), QString("\u3085"));
        map.insert(QString("yu"), QString("\u3086"));
        map.insert(QString("lyo"), QString("\u3087"));
        map.insert(QString("xyo"), QString("\u3087"));
        map.insert(QString("yo"), QString("\u3088"));
        map.insert(QString("ra"), QString("\u3089"));
        map.insert(QString("ri"), QString("\u308a"));
        map.insert(QString("ryi"), QString("\u308a\u3043"));
        map.insert(QString("rye"), QString("\u308a\u3047"));
        map.insert(QString("rya"), QString("\u308a\u3083"));
        map.insert(QString("ryu"), QString("\u308a\u3085"));
        map.insert(QString("ryo"), QString("\u308a\u3087"));
        map.insert(QString("ru"), QString("\u308b"));
        map.insert(QString("re"), QString("\u308c"));
        map.insert(QString("ro"), QString("\u308d"));
        map.insert(QString("lwa"), QString("\u308e"));
        map.insert(QString("xwa"), QString("\u308e"));
        map.insert(QString("wa"), QString("\u308f"));
        map.insert(QString("wo"), QString("\u3092"));
        map.insert(QString("nn"), QString("\u3093"));
        map.insert(QString("xn"), QString("\u3093"));
        map.insert(QString("vu"), QString("\u30f4"));
        map.insert(QString("va"), QString("\u30f4\u3041"));
        map.insert(QString("vi"), QString("\u30f4\u3043"));
        map.insert(QString("vyi"), QString("\u30f4\u3043"));
        map.insert(QString("ve"), QString("\u30f4\u3047"));
        map.insert(QString("vye"), QString("\u30f4\u3047"));
        map.insert(QString("vo"), QString("\u30f4\u3049"));
        map.insert(QString("vya"), QString("\u30f4\u3083"));
        map.insert(QString("vyu"), QString("\u30f4\u3085"));
        map.insert(QString("vyo"), QString("\u30f4\u3087"));
        map.insert(QString("bb"), QString("\u3063b"));
        map.insert(QString("cc"), QString("\u3063c"));
        map.insert(QString("dd"), QString("\u3063d"));
        map.insert(QString("ff"), QString("\u3063f"));
        map.insert(QString("gg"), QString("\u3063g"));
        map.insert(QString("hh"), QString("\u3063h"));
        map.insert(QString("jj"), QString("\u3063j"));
        map.insert(QString("kk"), QString("\u3063k"));
        map.insert(QString("ll"), QString("\u3063l"));
        map.insert(QString("mm"), QString("\u3063m"));
        map.insert(QString("pp"), QString("\u3063p"));
        map.insert(QString("qq"), QString("\u3063q"));
        map.insert(QString("rr"), QString("\u3063r"));
        map.insert(QString("ss"), QString("\u3063s"));
        map.insert(QString("tt"), QString("\u3063t"));
        map.insert(QString("vv"), QString("\u3063v"));
        map.insert(QString("ww"), QString("\u3063w"));
        map.insert(QString("xx"), QString("\u3063x"));
        map.insert(QString("yy"), QString("\u3063y"));
        map.insert(QString("zz"), QString("\u3063z"));
        map.insert(QString("nb"), QString("\u3093b"));
        map.insert(QString("nc"), QString("\u3093c"));
        map.insert(QString("nd"), QString("\u3093d"));
        map.insert(QString("nf"), QString("\u3093f"));
        map.insert(QString("ng"), QString("\u3093g"));
        map.insert(QString("nh"), QString("\u3093h"));
        map.insert(QString("nj"), QString("\u3093j"));
        map.insert(QString("nk"), QString("\u3093k"));
        map.insert(QString("nm"), QString("\u3093m"));
        map.insert(QString("np"), QString("\u3093p"));
        map.insert(QString("nq"), QString("\u3093q"));
        map.insert(QString("nr"), QString("\u3093r"));
        map.insert(QString("ns"), QString("\u3093s"));
        map.insert(QString("nt"), QString("\u3093t"));
        map.insert(QString("nv"), QString("\u3093v"));
        map.insert(QString("nw"), QString("\u3093w"));
        map.insert(QString("nx"), QString("\u3093x"));
        map.insert(QString("nz"), QString("\u3093z"));
        map.insert(QString("nl"), QString("\u3093l"));
        map.insert(QString("-"), QString("\u30fc"));
        map.insert(QString("."), QString("\u3002"));
        map.insert(QString(","), QString("\u3001"));
        map.insert(QString("?"), QString("\uff1f"));
        map.insert(QString("/"), QString("\u30fb"));
        map.insert(QString("@"), QString("\uff20"));
        map.insert(QString("#"), QString("\uff03"));
        map.insert(QString("%"), QString("\uff05"));
        map.insert(QString("&"), QString("\uff06"));
        map.insert(QString("*"), QString("\uff0a"));
        map.insert(QString("+"), QString("\uff0b"));
        map.insert(QString("="), QString("\uff1d"));
        map.insert(QString("("), QString("\uff08"));
        map.insert(QString(")"), QString("\uff09"));
        map.insert(QString("~"), QString("\uff5e"));
        map.insert(QString("\""), QString("\uff02"));
        map.insert(QString("'"), QString("\uff07"));
        map.insert(QString(":"), QString("\uff1a"));
        map.insert(QString(";"), QString("\uff1b"));
        map.insert(QString("!"), QString("\uff01"));
        map.insert(QString("^"), QString("\uff3e"));
        map.insert(QString("\u00a5"), QString("\uffe5"));
        map.insert(QString("$"), QString("\uff04"));
        map.insert(QString("["), QString("\u300c"));
        map.insert(QString("]"), QString("\u300d"));
        map.insert(QString("_"), QString("\uff3f"));
        map.insert(QString("{"), QString("\uff5b"));
        map.insert(QString("}"), QString("\uff5d"));
        map.insert(QString("`"), QString("\uff40"));
        map.insert(QString("<"), QString("\uff1c"));
        map.insert(QString(">"), QString("\uff1e"));
        map.insert(QString("\\"), QString("\uff3c"));
        map.insert(QString("|"), QString("\uff5c"));
        map.insert(QString("1"), QString("\uff11"));
        map.insert(QString("2"), QString("\uff12"));
        map.insert(QString("3"), QString("\uff13"));
        map.insert(QString("4"), QString("\uff14"));
        map.insert(QString("5"), QString("\uff15"));
        map.insert(QString("6"), QString("\uff16"));
        map.insert(QString("7"), QString("\uff17"));
        map.insert(QString("8"), QString("\uff18"));
        map.insert(QString("9"), QString("\uff19"));
        map.insert(QString("0"), QString("\uff10"));
        return map;
    }

    static const QMap<QString, QString> romkanTable;

    /** Max length of the target text */
    static const int MAX_LENGTH;
};

const int RomkanPrivate::MAX_LENGTH = 4;

const QMap<QString, QString> RomkanPrivate::romkanTable = RomkanPrivate::initRomkanTable();

Romkan::Romkan(QObjectPrivate &dd, QObject *parent) :
    LetterConverter(dd, parent)
{
}

Romkan::Romkan(QObject *parent) :
    LetterConverter(*new RomkanPrivate(), parent)
{
}

Romkan::~Romkan()
{
}

bool Romkan::convert(ComposingText &text) const
{
    return convertImpl(text, RomkanPrivate::romkanTable);
}

bool Romkan::convertImpl(ComposingText &text, const QMap<QString, QString> &table) const
{
    int cursor = text.getCursor(ComposingText::LAYER1);

    if (cursor <= 0) {
        return false;
    }

    StrSegment str[RomkanPrivate::MAX_LENGTH];
    int start = RomkanPrivate::MAX_LENGTH;
    int checkLength = qMin(cursor, RomkanPrivate::MAX_LENGTH);
    for (int i = 1; i <= checkLength; i++) {
        str[RomkanPrivate::MAX_LENGTH - i] = text.getStrSegment(ComposingText::LAYER1, cursor - i);
        start--;
    }

    while (start < RomkanPrivate::MAX_LENGTH) {
        QString key;
        for (int i = start; i < RomkanPrivate::MAX_LENGTH; i++) {
            key.append(str[i].string);
        }
        bool upper = key.at(key.length() - 1).isUpper();
        QString match = table[key.toLower()];
        if (!match.isEmpty()) {
            if (upper) {
                match = match.toUpper();
            }
            QList<StrSegment> out;
            if (match.length() == 1) {
                out.append(StrSegment(match, str[start].from, str[RomkanPrivate::MAX_LENGTH - 1].to));
                text.replaceStrSegment(ComposingText::LAYER1, out, RomkanPrivate::MAX_LENGTH - start);
            } else {
                out.append(StrSegment(match.left(match.length() - 1),
                                      str[start].from, str[RomkanPrivate::MAX_LENGTH - 1].to - 1));
                out.append(StrSegment(match.mid(match.length() - 1),
                                      str[RomkanPrivate::MAX_LENGTH - 1].to, str[RomkanPrivate::MAX_LENGTH - 1].to));
                text.replaceStrSegment(ComposingText::LAYER1, out, RomkanPrivate::MAX_LENGTH - start);
            }
            return true;
        }
        start++;
    }

    return false;
}
