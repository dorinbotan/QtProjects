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

#include "include/romkanfullkatakana.h"
#include "include/strsegment.h"
#include <QMap>

#include <QtCore/private/qobject_p.h>

class RomkanFullKatakanaPrivate : public QObjectPrivate
{
public:
    /** HashMap for Romaji-to-Kana conversion (Japanese mode) */
    static QMap<QString, QString> initRomkanTable()
    {
        QMap<QString, QString> map;
        map.insert(QString("la"), QString("\u30a1"));
        map.insert(QString("xa"), QString("\u30a1"));
        map.insert(QString("a"), QString("\u30a2"));
        map.insert(QString("li"), QString("\u30a3"));
        map.insert(QString("lyi"), QString("\u30a3"));
        map.insert(QString("xi"), QString("\u30a3"));
        map.insert(QString("xyi"), QString("\u30a3"));
        map.insert(QString("i"), QString("\u30a4"));
        map.insert(QString("yi"), QString("\u30a4"));
        map.insert(QString("ye"), QString("\u30a4\u30a7"));
        map.insert(QString("lu"), QString("\u30a5"));
        map.insert(QString("xu"), QString("\u30a5"));
        map.insert(QString("u"), QString("\u30a6"));
        map.insert(QString("whu"), QString("\u30a6"));
        map.insert(QString("wu"), QString("\u30a6"));
        map.insert(QString("wha"), QString("\u30a6\u30a1"));
        map.insert(QString("whi"), QString("\u30a6\u30a3"));
        map.insert(QString("wi"), QString("\u30a6\u30a3"));
        map.insert(QString("we"), QString("\u30a6\u30a7"));
        map.insert(QString("whe"), QString("\u30a6\u30a7"));
        map.insert(QString("who"), QString("\u30a6\u30a9"));
        map.insert(QString("le"), QString("\u30a7"));
        map.insert(QString("lye"), QString("\u30a7"));
        map.insert(QString("xe"), QString("\u30a7"));
        map.insert(QString("xye"), QString("\u30a7"));
        map.insert(QString("e"), QString("\u30a8"));
        map.insert(QString("lo"), QString("\u30a9"));
        map.insert(QString("xo"), QString("\u30a9"));
        map.insert(QString("o"), QString("\u30aa"));
        map.insert(QString("ca"), QString("\u30ab"));
        map.insert(QString("lka"), QString("\u30f5"));
        map.insert(QString("xka"), QString("\u30f5"));
        map.insert(QString("ka"), QString("\u30ab"));
        map.insert(QString("ga"), QString("\u30ac"));
        map.insert(QString("ki"), QString("\u30ad"));
        map.insert(QString("kyi"), QString("\u30ad\u30a3"));
        map.insert(QString("kye"), QString("\u30ad\u30a7"));
        map.insert(QString("kya"), QString("\u30ad\u30e3"));
        map.insert(QString("kyu"), QString("\u30ad\u30e5"));
        map.insert(QString("kyo"), QString("\u30ad\u30e7"));
        map.insert(QString("gi"), QString("\u30ae"));
        map.insert(QString("gyi"), QString("\u30ae\u30a3"));
        map.insert(QString("gye"), QString("\u30ae\u30a7"));
        map.insert(QString("gya"), QString("\u30ae\u30e3"));
        map.insert(QString("gyu"), QString("\u30ae\u30e5"));
        map.insert(QString("gyo"), QString("\u30ae\u30e7"));
        map.insert(QString("cu"), QString("\u30af"));
        map.insert(QString("ku"), QString("\u30af"));
        map.insert(QString("qu"), QString("\u30af"));
        map.insert(QString("kwa"), QString("\u30af\u30a1"));
        map.insert(QString("qa"), QString("\u30af\u30a1"));
        map.insert(QString("qwa"), QString("\u30af\u30a1"));
        map.insert(QString("qi"), QString("\u30af\u30a3"));
        map.insert(QString("qwi"), QString("\u30af\u30a3"));
        map.insert(QString("qyi"), QString("\u30af\u30a3"));
        map.insert(QString("qwu"), QString("\u30af\u30a5"));
        map.insert(QString("qe"), QString("\u30af\u30a7"));
        map.insert(QString("qwe"), QString("\u30af\u30a7"));
        map.insert(QString("qye"), QString("\u30af\u30a7"));
        map.insert(QString("qo"), QString("\u30af\u30a9"));
        map.insert(QString("qwo"), QString("\u30af\u30a9"));
        map.insert(QString("qya"), QString("\u30af\u30e3"));
        map.insert(QString("qyu"), QString("\u30af\u30e5"));
        map.insert(QString("qyo"), QString("\u30af\u30e7"));
        map.insert(QString("gu"), QString("\u30b0"));
        map.insert(QString("gwa"), QString("\u30b0\u30a1"));
        map.insert(QString("gwi"), QString("\u30b0\u30a3"));
        map.insert(QString("gwu"), QString("\u30b0\u30a5"));
        map.insert(QString("gwe"), QString("\u30b0\u30a7"));
        map.insert(QString("gwo"), QString("\u30b0\u30a9"));
        map.insert(QString("lke"), QString("\u30f6"));
        map.insert(QString("xke"), QString("\u30f6"));
        map.insert(QString("ke"), QString("\u30b1"));
        map.insert(QString("ge"), QString("\u30b2"));
        map.insert(QString("co"), QString("\u30b3"));
        map.insert(QString("ko"), QString("\u30b3"));
        map.insert(QString("go"), QString("\u30b4"));
        map.insert(QString("sa"), QString("\u30b5"));
        map.insert(QString("za"), QString("\u30b6"));
        map.insert(QString("ci"), QString("\u30b7"));
        map.insert(QString("shi"), QString("\u30b7"));
        map.insert(QString("si"), QString("\u30b7"));
        map.insert(QString("syi"), QString("\u30b7\u30a3"));
        map.insert(QString("she"), QString("\u30b7\u30a7"));
        map.insert(QString("sye"), QString("\u30b7\u30a7"));
        map.insert(QString("sha"), QString("\u30b7\u30e3"));
        map.insert(QString("sya"), QString("\u30b7\u30e3"));
        map.insert(QString("shu"), QString("\u30b7\u30e5"));
        map.insert(QString("syu"), QString("\u30b7\u30e5"));
        map.insert(QString("sho"), QString("\u30b7\u30e7"));
        map.insert(QString("syo"), QString("\u30b7\u30e7"));
        map.insert(QString("ji"), QString("\u30b8"));
        map.insert(QString("zi"), QString("\u30b8"));
        map.insert(QString("jyi"), QString("\u30b8\u30a3"));
        map.insert(QString("zyi"), QString("\u30b8\u30a3"));
        map.insert(QString("je"), QString("\u30b8\u30a7"));
        map.insert(QString("jye"), QString("\u30b8\u30a7"));
        map.insert(QString("zye"), QString("\u30b8\u30a7"));
        map.insert(QString("ja"), QString("\u30b8\u30e3"));
        map.insert(QString("jya"), QString("\u30b8\u30e3"));
        map.insert(QString("zya"), QString("\u30b8\u30e3"));
        map.insert(QString("ju"), QString("\u30b8\u30e5"));
        map.insert(QString("jyu"), QString("\u30b8\u30e5"));
        map.insert(QString("zyu"), QString("\u30b8\u30e5"));
        map.insert(QString("jo"), QString("\u30b8\u30e7"));
        map.insert(QString("jyo"), QString("\u30b8\u30e7"));
        map.insert(QString("zyo"), QString("\u30b8\u30e7"));
        map.insert(QString("su"), QString("\u30b9"));
        map.insert(QString("swa"), QString("\u30b9\u30a1"));
        map.insert(QString("swi"), QString("\u30b9\u30a3"));
        map.insert(QString("swu"), QString("\u30b9\u30a5"));
        map.insert(QString("swe"), QString("\u30b9\u30a7"));
        map.insert(QString("swo"), QString("\u30b9\u30a9"));
        map.insert(QString("zu"), QString("\u30ba"));
        map.insert(QString("ce"), QString("\u30bb"));
        map.insert(QString("se"), QString("\u30bb"));
        map.insert(QString("ze"), QString("\u30bc"));
        map.insert(QString("so"), QString("\u30bd"));
        map.insert(QString("zo"), QString("\u30be"));
        map.insert(QString("ta"), QString("\u30bf"));
        map.insert(QString("da"), QString("\u30c0"));
        map.insert(QString("chi"), QString("\u30c1"));
        map.insert(QString("ti"), QString("\u30c1"));
        map.insert(QString("cyi"), QString("\u30c1\u30a3"));
        map.insert(QString("tyi"), QString("\u30c1\u30a3"));
        map.insert(QString("che"), QString("\u30c1\u30a7"));
        map.insert(QString("cye"), QString("\u30c1\u30a7"));
        map.insert(QString("tye"), QString("\u30c1\u30a7"));
        map.insert(QString("cha"), QString("\u30c1\u30e3"));
        map.insert(QString("cya"), QString("\u30c1\u30e3"));
        map.insert(QString("tya"), QString("\u30c1\u30e3"));
        map.insert(QString("chu"), QString("\u30c1\u30e5"));
        map.insert(QString("cyu"), QString("\u30c1\u30e5"));
        map.insert(QString("tyu"), QString("\u30c1\u30e5"));
        map.insert(QString("cho"), QString("\u30c1\u30e7"));
        map.insert(QString("cyo"), QString("\u30c1\u30e7"));
        map.insert(QString("tyo"), QString("\u30c1\u30e7"));
        map.insert(QString("di"), QString("\u30c2"));
        map.insert(QString("dyi"), QString("\u30c2\u30a3"));
        map.insert(QString("dye"), QString("\u30c2\u30a7"));
        map.insert(QString("dya"), QString("\u30c2\u30e3"));
        map.insert(QString("dyu"), QString("\u30c2\u30e5"));
        map.insert(QString("dyo"), QString("\u30c2\u30e7"));
        map.insert(QString("ltsu"), QString("\u30c3"));
        map.insert(QString("ltu"), QString("\u30c3"));
        map.insert(QString("xtu"), QString("\u30c3"));
        map.insert(QString(""), QString("\u30c3"));
        map.insert(QString("tsu"), QString("\u30c4"));
        map.insert(QString("tu"), QString("\u30c4"));
        map.insert(QString("tsa"), QString("\u30c4\u30a1"));
        map.insert(QString("tsi"), QString("\u30c4\u30a3"));
        map.insert(QString("tse"), QString("\u30c4\u30a7"));
        map.insert(QString("tso"), QString("\u30c4\u30a9"));
        map.insert(QString("du"), QString("\u30c5"));
        map.insert(QString("te"), QString("\u30c6"));
        map.insert(QString("thi"), QString("\u30c6\u30a3"));
        map.insert(QString("the"), QString("\u30c6\u30a7"));
        map.insert(QString("tha"), QString("\u30c6\u30e3"));
        map.insert(QString("thu"), QString("\u30c6\u30e5"));
        map.insert(QString("tho"), QString("\u30c6\u30e7"));
        map.insert(QString("de"), QString("\u30c7"));
        map.insert(QString("dhi"), QString("\u30c7\u30a3"));
        map.insert(QString("dhe"), QString("\u30c7\u30a7"));
        map.insert(QString("dha"), QString("\u30c7\u30e3"));
        map.insert(QString("dhu"), QString("\u30c7\u30e5"));
        map.insert(QString("dho"), QString("\u30c7\u30e7"));
        map.insert(QString("to"), QString("\u30c8"));
        map.insert(QString("twa"), QString("\u30c8\u30a1"));
        map.insert(QString("twi"), QString("\u30c8\u30a3"));
        map.insert(QString("twu"), QString("\u30c8\u30a5"));
        map.insert(QString("twe"), QString("\u30c8\u30a7"));
        map.insert(QString("two"), QString("\u30c8\u30a9"));
        map.insert(QString("do"), QString("\u30c9"));
        map.insert(QString("dwa"), QString("\u30c9\u30a1"));
        map.insert(QString("dwi"), QString("\u30c9\u30a3"));
        map.insert(QString("dwu"), QString("\u30c9\u30a5"));
        map.insert(QString("dwe"), QString("\u30c9\u30a7"));
        map.insert(QString("dwo"), QString("\u30c9\u30a9"));
        map.insert(QString("na"), QString("\u30ca"));
        map.insert(QString("ni"), QString("\u30cb"));
        map.insert(QString("nyi"), QString("\u30cb\u30a3"));
        map.insert(QString("nye"), QString("\u30cb\u30a7"));
        map.insert(QString("nya"), QString("\u30cb\u30e3"));
        map.insert(QString("nyu"), QString("\u30cb\u30e5"));
        map.insert(QString("nyo"), QString("\u30cb\u30e7"));
        map.insert(QString("nu"), QString("\u30cc"));
        map.insert(QString("ne"), QString("\u30cd"));
        map.insert(QString("no"), QString("\u30ce"));
        map.insert(QString("ha"), QString("\u30cf"));
        map.insert(QString("ba"), QString("\u30d0"));
        map.insert(QString("pa"), QString("\u30d1"));
        map.insert(QString("hi"), QString("\u30d2"));
        map.insert(QString("hyi"), QString("\u30d2\u30a3"));
        map.insert(QString("hye"), QString("\u30d2\u30a7"));
        map.insert(QString("hya"), QString("\u30d2\u30e3"));
        map.insert(QString("hyu"), QString("\u30d2\u30e5"));
        map.insert(QString("hyo"), QString("\u30d2\u30e7"));
        map.insert(QString("bi"), QString("\u30d3"));
        map.insert(QString("byi"), QString("\u30d3\u30a3"));
        map.insert(QString("bye"), QString("\u30d3\u30a7"));
        map.insert(QString("bya"), QString("\u30d3\u30e3"));
        map.insert(QString("byu"), QString("\u30d3\u30e5"));
        map.insert(QString("byo"), QString("\u30d3\u30e7"));
        map.insert(QString("pi"), QString("\u30d4"));
        map.insert(QString("pyi"), QString("\u30d4\u30a3"));
        map.insert(QString("pye"), QString("\u30d4\u30a7"));
        map.insert(QString("pya"), QString("\u30d4\u30e3"));
        map.insert(QString("pyu"), QString("\u30d4\u30e5"));
        map.insert(QString("pyo"), QString("\u30d4\u30e7"));
        map.insert(QString("fu"), QString("\u30d5"));
        map.insert(QString("hu"), QString("\u30d5"));
        map.insert(QString("fa"), QString("\u30d5\u30a1"));
        map.insert(QString("fwa"), QString("\u30d5\u30a1"));
        map.insert(QString("fi"), QString("\u30d5\u30a3"));
        map.insert(QString("fwi"), QString("\u30d5\u30a3"));
        map.insert(QString("fyi"), QString("\u30d5\u30a3"));
        map.insert(QString("fwu"), QString("\u30d5\u30a5"));
        map.insert(QString("fe"), QString("\u30d5\u30a7"));
        map.insert(QString("fwe"), QString("\u30d5\u30a7"));
        map.insert(QString("fye"), QString("\u30d5\u30a7"));
        map.insert(QString("fo"), QString("\u30d5\u30a9"));
        map.insert(QString("fwo"), QString("\u30d5\u30a9"));
        map.insert(QString("fya"), QString("\u30d5\u30e3"));
        map.insert(QString("fyu"), QString("\u30d5\u30e5"));
        map.insert(QString("fyo"), QString("\u30d5\u30e7"));
        map.insert(QString("bu"), QString("\u30d6"));
        map.insert(QString("pu"), QString("\u30d7"));
        map.insert(QString("he"), QString("\u30d8"));
        map.insert(QString("be"), QString("\u30d9"));
        map.insert(QString("pe"), QString("\u30da"));
        map.insert(QString("ho"), QString("\u30db"));
        map.insert(QString("bo"), QString("\u30dc"));
        map.insert(QString("po"), QString("\u30dd"));
        map.insert(QString("ma"), QString("\u30de"));
        map.insert(QString("mi"), QString("\u30df"));
        map.insert(QString("myi"), QString("\u30df\u30a3"));
        map.insert(QString("mye"), QString("\u30df\u30a7"));
        map.insert(QString("mya"), QString("\u30df\u30e3"));
        map.insert(QString("myu"), QString("\u30df\u30e5"));
        map.insert(QString("myo"), QString("\u30df\u30e7"));
        map.insert(QString("mu"), QString("\u30e0"));
        map.insert(QString("me"), QString("\u30e1"));
        map.insert(QString("mo"), QString("\u30e2"));
        map.insert(QString("lya"), QString("\u30e3"));
        map.insert(QString("xya"), QString("\u30e3"));
        map.insert(QString("ya"), QString("\u30e4"));
        map.insert(QString("lyu"), QString("\u30e5"));
        map.insert(QString("xyu"), QString("\u30e5"));
        map.insert(QString("yu"), QString("\u30e6"));
        map.insert(QString("lyo"), QString("\u30e7"));
        map.insert(QString("xyo"), QString("\u30e7"));
        map.insert(QString("yo"), QString("\u30e8"));
        map.insert(QString("ra"), QString("\u30e9"));
        map.insert(QString("ri"), QString("\u30ea"));
        map.insert(QString("ryi"), QString("\u30ea\u30a3"));
        map.insert(QString("rye"), QString("\u30ea\u30a7"));
        map.insert(QString("rya"), QString("\u30ea\u30e3"));
        map.insert(QString("ryu"), QString("\u30ea\u30e5"));
        map.insert(QString("ryo"), QString("\u30ea\u30e7"));
        map.insert(QString("ru"), QString("\u30eb"));
        map.insert(QString("re"), QString("\u30ec"));
        map.insert(QString("ro"), QString("\u30ed"));
        map.insert(QString("lwa"), QString("\u30ee"));
        map.insert(QString("xwa"), QString("\u30ee"));
        map.insert(QString("wa"), QString("\u30ef"));
        map.insert(QString("wo"), QString("\u30f2"));
        map.insert(QString("nn"), QString("\u30f3"));
        map.insert(QString("xn"), QString("\u30f3"));
        map.insert(QString("vu"), QString("\u30f4"));
        map.insert(QString("va"), QString("\u30f4\u30a1"));
        map.insert(QString("vi"), QString("\u30f4\u30a3"));
        map.insert(QString("vyi"), QString("\u30f4\u30a3"));
        map.insert(QString("ve"), QString("\u30f4\u30a7"));
        map.insert(QString("vye"), QString("\u30f4\u30a7"));
        map.insert(QString("vo"), QString("\u30f4\u30a9"));
        map.insert(QString("vya"), QString("\u30f4\u30e3"));
        map.insert(QString("vyu"), QString("\u30f4\u30e5"));
        map.insert(QString("vyo"), QString("\u30f4\u30e7"));

        map.insert(QString("bb"), QString("\u30c3b"));
        map.insert(QString("cc"), QString("\u30c3c"));
        map.insert(QString("dd"), QString("\u30c3d"));
        map.insert(QString("ff"), QString("\u30c3f"));
        map.insert(QString("gg"), QString("\u30c3g"));
        map.insert(QString("hh"), QString("\u30c3h"));
        map.insert(QString("jj"), QString("\u30c3j"));
        map.insert(QString("kk"), QString("\u30c3k"));
        map.insert(QString("ll"), QString("\u30c3l"));
        map.insert(QString("mm"), QString("\u30c3m"));
        map.insert(QString("pp"), QString("\u30c3p"));
        map.insert(QString("qq"), QString("\u30c3q"));
        map.insert(QString("rr"), QString("\u30c3r"));
        map.insert(QString("ss"), QString("\u30c3s"));
        map.insert(QString("tt"), QString("\u30c3t"));
        map.insert(QString("vv"), QString("\u30c3v"));
        map.insert(QString("ww"), QString("\u30c3w"));
        map.insert(QString("xx"), QString("\u30c3x"));
        map.insert(QString("yy"), QString("\u30c3y"));
        map.insert(QString("zz"), QString("\u30c3z"));
        map.insert(QString("nb"), QString("\u30f3b"));
        map.insert(QString("nc"), QString("\u30f3c"));
        map.insert(QString("nd"), QString("\u30f3d"));
        map.insert(QString("nf"), QString("\u30f3f"));
        map.insert(QString("ng"), QString("\u30f3g"));
        map.insert(QString("nh"), QString("\u30f3h"));
        map.insert(QString("nj"), QString("\u30f3j"));
        map.insert(QString("nk"), QString("\u30f3k"));
        map.insert(QString("nm"), QString("\u30f3m"));
        map.insert(QString("np"), QString("\u30f3p"));
        map.insert(QString("nq"), QString("\u30f3q"));
        map.insert(QString("nr"), QString("\u30f3r"));
        map.insert(QString("ns"), QString("\u30f3s"));
        map.insert(QString("nt"), QString("\u30f3t"));
        map.insert(QString("nv"), QString("\u30f3v"));
        map.insert(QString("nw"), QString("\u30f3w"));
        map.insert(QString("nx"), QString("\u30f3x"));
        map.insert(QString("nz"), QString("\u30f3z"));
        map.insert(QString("nl"), QString("\u30f3l"));

        map.insert(QString("-"), QString("\u30fc"));
        map.insert(QString("."), QString("\u3002"));
        map.insert(QString(","), QString("\u3001"));
        map.insert(QString("?"), QString("\uff1f"));
        map.insert(QString("/"), QString("\u30fb"));
        return map;
    }

    static const QMap<QString, QString> romkanTable;
};

const QMap<QString, QString> RomkanFullKatakanaPrivate::romkanTable = RomkanFullKatakanaPrivate::initRomkanTable();

RomkanFullKatakana::RomkanFullKatakana(QObject *parent) :
    Romkan(*new RomkanFullKatakanaPrivate(), parent)
{
}

RomkanFullKatakana::~RomkanFullKatakana()
{
}

bool RomkanFullKatakana::convert(ComposingText &text) const
{
    return convertImpl(text, RomkanFullKatakanaPrivate::romkanTable);
}
