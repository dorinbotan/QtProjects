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

#include "include/romkanhalfkatakana.h"
#include "include/strsegment.h"
#include <QMap>

#include <QtCore/private/qobject_p.h>

class RomkanHalfKatakanaPrivate : public QObjectPrivate
{
public:
    /** HashMap for Romaji-to-Kana conversion (Japanese mode) */
    static QMap<QString, QString> initRomkanTable()
    {
        QMap<QString, QString> map;
        map.insert(QString("la"), QString("\uff67"));
        map.insert(QString("xa"), QString("\uff67"));
        map.insert(QString("a"), QString("\uff71"));
        map.insert(QString("li"), QString("\uff68"));
        map.insert(QString("lyi"), QString("\uff68"));
        map.insert(QString("xi"), QString("\uff68"));
        map.insert(QString("xyi"), QString("\uff68"));
        map.insert(QString("i"), QString("\uff72"));
        map.insert(QString("yi"), QString("\uff72"));
        map.insert(QString("ye"), QString("\uff72\uff6a"));
        map.insert(QString("lu"), QString("\uff69"));
        map.insert(QString("xu"), QString("\uff69"));
        map.insert(QString("u"), QString("\uff73"));
        map.insert(QString("whu"), QString("\uff73"));
        map.insert(QString("wu"), QString("\uff73"));
        map.insert(QString("wha"), QString("\uff73\uff67"));
        map.insert(QString("whi"), QString("\uff73\uff68"));
        map.insert(QString("wi"), QString("\uff73\uff68"));
        map.insert(QString("we"), QString("\uff73\uff6a"));
        map.insert(QString("whe"), QString("\uff73\uff6a"));
        map.insert(QString("who"), QString("\uff73\uff6b"));
        map.insert(QString("le"), QString("\uff6a"));
        map.insert(QString("lye"), QString("\uff6a"));
        map.insert(QString("xe"), QString("\uff6a"));
        map.insert(QString("xye"), QString("\uff6a"));
        map.insert(QString("e"), QString("\uff74"));
        map.insert(QString("lo"), QString("\uff6b"));
        map.insert(QString("xo"), QString("\uff6b"));
        map.insert(QString("o"), QString("\uff75"));
        map.insert(QString("ca"), QString("\uff76"));
        map.insert(QString("ka"), QString("\uff76"));
        map.insert(QString("ga"), QString("\uff76\uff9e"));
        map.insert(QString("ki"), QString("\uff77"));
        map.insert(QString("kyi"), QString("\uff77\uff68"));
        map.insert(QString("kye"), QString("\uff77\uff6a"));
        map.insert(QString("kya"), QString("\uff77\uff6c"));
        map.insert(QString("kyu"), QString("\uff77\uff6d"));
        map.insert(QString("kyo"), QString("\uff77\uff6e"));
        map.insert(QString("gi"), QString("\uff77\uff9e"));
        map.insert(QString("gyi"), QString("\uff77\uff9e\uff68"));
        map.insert(QString("gye"), QString("\uff77\uff9e\uff6a"));
        map.insert(QString("gya"), QString("\uff77\uff9e\uff6c"));
        map.insert(QString("gyu"), QString("\uff77\uff9e\uff6d"));
        map.insert(QString("gyo"), QString("\uff77\uff9e\uff6e"));
        map.insert(QString("cu"), QString("\uff78"));
        map.insert(QString("ku"), QString("\uff78"));
        map.insert(QString("qu"), QString("\uff78"));
        map.insert(QString("kwa"), QString("\uff78\uff67"));
        map.insert(QString("qa"), QString("\uff78\uff67"));
        map.insert(QString("qwa"), QString("\uff78\uff67"));
        map.insert(QString("qi"), QString("\uff78\uff68"));
        map.insert(QString("qwi"), QString("\uff78\uff68"));
        map.insert(QString("qyi"), QString("\uff78\uff68"));
        map.insert(QString("qwu"), QString("\uff78\uff69"));
        map.insert(QString("qe"), QString("\uff78\uff6a"));
        map.insert(QString("qwe"), QString("\uff78\uff6a"));
        map.insert(QString("qye"), QString("\uff78\uff6a"));
        map.insert(QString("qo"), QString("\uff78\uff6b"));
        map.insert(QString("qwo"), QString("\uff78\uff6b"));
        map.insert(QString("qya"), QString("\uff78\uff6c"));
        map.insert(QString("qyu"), QString("\uff78\uff6d"));
        map.insert(QString("qyo"), QString("\uff78\uff6e"));
        map.insert(QString("gu"), QString("\uff78\uff9e"));
        map.insert(QString("gwa"), QString("\uff78\uff9e\uff67"));
        map.insert(QString("gwi"), QString("\uff78\uff9e\uff68"));
        map.insert(QString("gwu"), QString("\uff78\uff9e\uff69"));
        map.insert(QString("gwe"), QString("\uff78\uff9e\uff6a"));
        map.insert(QString("gwo"), QString("\uff78\uff9e\uff6b"));
        map.insert(QString("ke"), QString("\uff79"));
        map.insert(QString("ge"), QString("\uff79\uff9e"));
        map.insert(QString("co"), QString("\uff7a"));
        map.insert(QString("ko"), QString("\uff7a"));
        map.insert(QString("go"), QString("\uff7a\uff9e"));
        map.insert(QString("sa"), QString("\uff7b"));
        map.insert(QString("za"), QString("\uff7b\uff9e"));
        map.insert(QString("ci"), QString("\uff7c"));
        map.insert(QString("shi"), QString("\uff7c"));
        map.insert(QString("si"), QString("\uff7c"));
        map.insert(QString("syi"), QString("\uff7c\uff68"));
        map.insert(QString("she"), QString("\uff7c\uff6a"));
        map.insert(QString("sye"), QString("\uff7c\uff6a"));
        map.insert(QString("sha"), QString("\uff7c\uff6c"));
        map.insert(QString("sya"), QString("\uff7c\uff6c"));
        map.insert(QString("shu"), QString("\uff7c\uff6d"));
        map.insert(QString("syu"), QString("\uff7c\uff6d"));
        map.insert(QString("sho"), QString("\uff7c\uff6e"));
        map.insert(QString("syo"), QString("\uff7c\uff6e"));
        map.insert(QString("ji"), QString("\uff7c\uff9e"));
        map.insert(QString("zi"), QString("\uff7c\uff9e"));
        map.insert(QString("jyi"), QString("\uff7c\uff9e\uff68"));
        map.insert(QString("zyi"), QString("\uff7c\uff9e\uff68"));
        map.insert(QString("je"), QString("\uff7c\uff9e\uff6a"));
        map.insert(QString("jye"), QString("\uff7c\uff9e\uff6a"));
        map.insert(QString("zye"), QString("\uff7c\uff9e\uff6a"));
        map.insert(QString("ja"), QString("\uff7c\uff9e\uff6c"));
        map.insert(QString("jya"), QString("\uff7c\uff9e\uff6c"));
        map.insert(QString("zya"), QString("\uff7c\uff9e\uff6c"));
        map.insert(QString("ju"), QString("\uff7c\uff9e\uff6d"));
        map.insert(QString("jyu"), QString("\uff7c\uff9e\uff6d"));
        map.insert(QString("zyu"), QString("\uff7c\uff9e\uff6d"));
        map.insert(QString("jo"), QString("\uff7c\uff9e\uff6e"));
        map.insert(QString("jyo"), QString("\uff7c\uff9e\uff6e"));
        map.insert(QString("zyo"), QString("\uff7c\uff9e\uff6e"));
        map.insert(QString("su"), QString("\uff7d"));
        map.insert(QString("swa"), QString("\uff7d\uff67"));
        map.insert(QString("swi"), QString("\uff7d\uff68"));
        map.insert(QString("swu"), QString("\uff7d\uff69"));
        map.insert(QString("swe"), QString("\uff7d\uff6a"));
        map.insert(QString("swo"), QString("\uff7d\uff6b"));
        map.insert(QString("zu"), QString("\uff7d\uff9e"));
        map.insert(QString("ce"), QString("\uff7e"));
        map.insert(QString("se"), QString("\uff7e"));
        map.insert(QString("ze"), QString("\uff7e\uff9e"));
        map.insert(QString("so"), QString("\uff7f"));
        map.insert(QString("zo"), QString("\uff7f\uff9e"));
        map.insert(QString("ta"), QString("\uff80"));
        map.insert(QString("da"), QString("\uff80\uff9e"));
        map.insert(QString("chi"), QString("\uff81"));
        map.insert(QString("ti"), QString("\uff81"));
        map.insert(QString("cyi"), QString("\uff81\uff68"));
        map.insert(QString("tyi"), QString("\uff81\uff68"));
        map.insert(QString("che"), QString("\uff81\uff6a"));
        map.insert(QString("cye"), QString("\uff81\uff6a"));
        map.insert(QString("tye"), QString("\uff81\uff6a"));
        map.insert(QString("cha"), QString("\uff81\uff6c"));
        map.insert(QString("cya"), QString("\uff81\uff6c"));
        map.insert(QString("tya"), QString("\uff81\uff6c"));
        map.insert(QString("chu"), QString("\uff81\uff6d"));
        map.insert(QString("cyu"), QString("\uff81\uff6d"));
        map.insert(QString("tyu"), QString("\uff81\uff6d"));
        map.insert(QString("cho"), QString("\uff81\uff6e"));
        map.insert(QString("cyo"), QString("\uff81\uff6e"));
        map.insert(QString("tyo"), QString("\uff81\uff6e"));
        map.insert(QString("di"), QString("\uff81\uff9e"));
        map.insert(QString("dyi"), QString("\uff81\uff9e\uff68"));
        map.insert(QString("dye"), QString("\uff81\uff9e\uff6a"));
        map.insert(QString("dya"), QString("\uff81\uff9e\uff6c"));
        map.insert(QString("dyu"), QString("\uff81\uff9e\uff6d"));
        map.insert(QString("dyo"), QString("\uff81\uff9e\uff6e"));
        map.insert(QString("ltsu"), QString("\uff6f"));
        map.insert(QString("ltu"), QString("\uff6f"));
        map.insert(QString("xtu"), QString("\uff6f"));
        map.insert(QString(""), QString("\uff6f"));
        map.insert(QString("tsu"), QString("\uff82"));
        map.insert(QString("tu"), QString("\uff82"));
        map.insert(QString("tsa"), QString("\uff82\uff67"));
        map.insert(QString("tsi"), QString("\uff82\uff68"));
        map.insert(QString("tse"), QString("\uff82\uff6a"));
        map.insert(QString("tso"), QString("\uff82\uff6b"));
        map.insert(QString("du"), QString("\uff82\uff9e"));
        map.insert(QString("te"), QString("\uff83"));
        map.insert(QString("thi"), QString("\uff83\uff68"));
        map.insert(QString("the"), QString("\uff83\uff6a"));
        map.insert(QString("tha"), QString("\uff83\uff6c"));
        map.insert(QString("thu"), QString("\uff83\uff6d"));
        map.insert(QString("tho"), QString("\uff83\uff6e"));
        map.insert(QString("de"), QString("\uff83\uff9e"));
        map.insert(QString("dhi"), QString("\uff83\uff9e\uff68"));
        map.insert(QString("dhe"), QString("\uff83\uff9e\uff6a"));
        map.insert(QString("dha"), QString("\uff83\uff9e\uff6c"));
        map.insert(QString("dhu"), QString("\uff83\uff9e\uff6d"));
        map.insert(QString("dho"), QString("\uff83\uff9e\uff6e"));
        map.insert(QString("to"), QString("\uff84"));
        map.insert(QString("twa"), QString("\uff84\uff67"));
        map.insert(QString("twi"), QString("\uff84\uff68"));
        map.insert(QString("twu"), QString("\uff84\uff69"));
        map.insert(QString("twe"), QString("\uff84\uff6a"));
        map.insert(QString("two"), QString("\uff84\uff6b"));
        map.insert(QString("do"), QString("\uff84\uff9e"));
        map.insert(QString("dwa"), QString("\uff84\uff9e\uff67"));
        map.insert(QString("dwi"), QString("\uff84\uff9e\uff68"));
        map.insert(QString("dwu"), QString("\uff84\uff9e\uff69"));
        map.insert(QString("dwe"), QString("\uff84\uff9e\uff6a"));
        map.insert(QString("dwo"), QString("\uff84\uff9e\uff6b"));
        map.insert(QString("na"), QString("\uff85"));
        map.insert(QString("ni"), QString("\uff86"));
        map.insert(QString("nyi"), QString("\uff86\uff68"));
        map.insert(QString("nye"), QString("\uff86\uff6a"));
        map.insert(QString("nya"), QString("\uff86\uff6c"));
        map.insert(QString("nyu"), QString("\uff86\uff6d"));
        map.insert(QString("nyo"), QString("\uff86\uff6e"));
        map.insert(QString("nu"), QString("\uff87"));
        map.insert(QString("ne"), QString("\uff88"));
        map.insert(QString("no"), QString("\uff89"));
        map.insert(QString("ha"), QString("\uff8a"));
        map.insert(QString("ba"), QString("\uff8a\uff9e"));
        map.insert(QString("pa"), QString("\uff8a\uff9f"));
        map.insert(QString("hi"), QString("\uff8b"));
        map.insert(QString("hyi"), QString("\uff8b\uff68"));
        map.insert(QString("hye"), QString("\uff8b\uff6a"));
        map.insert(QString("hya"), QString("\uff8b\uff6c"));
        map.insert(QString("hyu"), QString("\uff8b\uff6d"));
        map.insert(QString("hyo"), QString("\uff8b\uff6e"));
        map.insert(QString("bi"), QString("\uff8b\uff9e"));
        map.insert(QString("byi"), QString("\uff8b\uff9e\uff68"));
        map.insert(QString("bye"), QString("\uff8b\uff9e\uff6a"));
        map.insert(QString("bya"), QString("\uff8b\uff9e\uff6c"));
        map.insert(QString("byu"), QString("\uff8b\uff9e\uff6d"));
        map.insert(QString("byo"), QString("\uff8b\uff9e\uff6e"));
        map.insert(QString("pi"), QString("\uff8b\uff9f"));
        map.insert(QString("pyi"), QString("\uff8b\uff9f\uff68"));
        map.insert(QString("pye"), QString("\uff8b\uff9f\uff6a"));
        map.insert(QString("pya"), QString("\uff8b\uff9f\uff6c"));
        map.insert(QString("pyu"), QString("\uff8b\uff9f\uff6d"));
        map.insert(QString("pyo"), QString("\uff8b\uff9f\uff6e"));
        map.insert(QString("fu"), QString("\uff8c"));
        map.insert(QString("hu"), QString("\uff8c"));
        map.insert(QString("fa"), QString("\uff8c\uff67"));
        map.insert(QString("fwa"), QString("\uff8c\uff67"));
        map.insert(QString("fi"), QString("\uff8c\uff68"));
        map.insert(QString("fwi"), QString("\uff8c\uff68"));
        map.insert(QString("fyi"), QString("\uff8c\uff68"));
        map.insert(QString("fwu"), QString("\uff8c\uff69"));
        map.insert(QString("fe"), QString("\uff8c\uff6a"));
        map.insert(QString("fwe"), QString("\uff8c\uff6a"));
        map.insert(QString("fye"), QString("\uff8c\uff6a"));
        map.insert(QString("fo"), QString("\uff8c\uff6b"));
        map.insert(QString("fwo"), QString("\uff8c\uff6b"));
        map.insert(QString("fya"), QString("\uff8c\uff6c"));
        map.insert(QString("fyu"), QString("\uff8c\uff6d"));
        map.insert(QString("fyo"), QString("\uff8c\uff6e"));
        map.insert(QString("bu"), QString("\uff8c\uff9e"));
        map.insert(QString("pu"), QString("\uff8c\uff9f"));
        map.insert(QString("he"), QString("\uff8d"));
        map.insert(QString("be"), QString("\uff8d\uff9e"));
        map.insert(QString("pe"), QString("\uff8d\uff9f"));
        map.insert(QString("ho"), QString("\uff8e"));
        map.insert(QString("bo"), QString("\uff8e\uff9e"));
        map.insert(QString("po"), QString("\uff8e\uff9f"));
        map.insert(QString("ma"), QString("\uff8f"));
        map.insert(QString("mi"), QString("\uff90"));
        map.insert(QString("myi"), QString("\uff90\uff68"));
        map.insert(QString("mye"), QString("\uff90\uff6a"));
        map.insert(QString("mya"), QString("\uff90\uff6c"));
        map.insert(QString("myu"), QString("\uff90\uff6d"));
        map.insert(QString("myo"), QString("\uff90\uff6e"));
        map.insert(QString("mu"), QString("\uff91"));
        map.insert(QString("me"), QString("\uff92"));
        map.insert(QString("mo"), QString("\uff93"));
        map.insert(QString("lya"), QString("\uff6c"));
        map.insert(QString("xya"), QString("\uff6c"));
        map.insert(QString("ya"), QString("\uff94"));
        map.insert(QString("lyu"), QString("\uff6d"));
        map.insert(QString("xyu"), QString("\uff6d"));
        map.insert(QString("yu"), QString("\uff95"));
        map.insert(QString("lyo"), QString("\uff6e"));
        map.insert(QString("xyo"), QString("\uff6e"));
        map.insert(QString("yo"), QString("\uff96"));
        map.insert(QString("ra"), QString("\uff97"));
        map.insert(QString("ri"), QString("\uff98"));
        map.insert(QString("ryi"), QString("\uff98\uff68"));
        map.insert(QString("rye"), QString("\uff98\uff6a"));
        map.insert(QString("rya"), QString("\uff98\uff6c"));
        map.insert(QString("ryu"), QString("\uff98\uff6d"));
        map.insert(QString("ryo"), QString("\uff98\uff6e"));
        map.insert(QString("ru"), QString("\uff99"));
        map.insert(QString("re"), QString("\uff9a"));
        map.insert(QString("ro"), QString("\uff9b"));
        map.insert(QString("lwa"), QString("\uff9c"));
        map.insert(QString("xwa"), QString("\uff9c"));
        map.insert(QString("wa"), QString("\uff9c"));
        map.insert(QString("wo"), QString("\uff66"));
        map.insert(QString("nn"), QString("\uff9d"));
        map.insert(QString("xn"), QString("\uff9d"));
        map.insert(QString("vu"), QString("\uff73\uff9e"));
        map.insert(QString("va"), QString("\uff73\uff9e\uff67"));
        map.insert(QString("vi"), QString("\uff73\uff9e\uff68"));
        map.insert(QString("vyi"), QString("\uff73\uff9e\uff68"));
        map.insert(QString("ve"), QString("\uff73\uff9e\uff6a"));
        map.insert(QString("vye"), QString("\uff73\uff9e\uff6a"));
        map.insert(QString("vo"), QString("\uff73\uff9e\uff6b"));
        map.insert(QString("vya"), QString("\uff73\uff9e\uff6c"));
        map.insert(QString("vyu"), QString("\uff73\uff9e\uff6d"));
        map.insert(QString("vyo"), QString("\uff73\uff9e\uff6e"));

        map.insert(QString("bb"), QString("\uff6fb"));
        map.insert(QString("cc"), QString("\uff6fc"));
        map.insert(QString("dd"), QString("\uff6fd"));
        map.insert(QString("ff"), QString("\uff6ff"));
        map.insert(QString("gg"), QString("\uff6fg"));
        map.insert(QString("hh"), QString("\uff6fh"));
        map.insert(QString("jj"), QString("\uff6fj"));
        map.insert(QString("kk"), QString("\uff6fk"));
        map.insert(QString("ll"), QString("\uff6fl"));
        map.insert(QString("mm"), QString("\uff6fm"));
        map.insert(QString("pp"), QString("\uff6fp"));
        map.insert(QString("qq"), QString("\uff6fq"));
        map.insert(QString("rr"), QString("\uff6fr"));
        map.insert(QString("ss"), QString("\uff6fs"));
        map.insert(QString("tt"), QString("\uff6ft"));
        map.insert(QString("vv"), QString("\uff6fv"));
        map.insert(QString("ww"), QString("\uff6fw"));
        map.insert(QString("xx"), QString("\uff6fx"));
        map.insert(QString("yy"), QString("\uff6fy"));
        map.insert(QString("zz"), QString("\uff6fz"));
        map.insert(QString("nb"), QString("\uff9db"));
        map.insert(QString("nc"), QString("\uff9dc"));
        map.insert(QString("nd"), QString("\uff9dd"));
        map.insert(QString("nf"), QString("\uff9df"));
        map.insert(QString("ng"), QString("\uff9dg"));
        map.insert(QString("nh"), QString("\uff9dh"));
        map.insert(QString("nj"), QString("\uff9dj"));
        map.insert(QString("nk"), QString("\uff9dk"));
        map.insert(QString("nm"), QString("\uff9dm"));
        map.insert(QString("np"), QString("\uff9dp"));
        map.insert(QString("nq"), QString("\uff9dq"));
        map.insert(QString("nr"), QString("\uff9dr"));
        map.insert(QString("ns"), QString("\uff9ds"));
        map.insert(QString("nt"), QString("\uff9dt"));
        map.insert(QString("nv"), QString("\uff9dv"));
        map.insert(QString("nw"), QString("\uff9dw"));
        map.insert(QString("nx"), QString("\uff9dx"));
        map.insert(QString("nz"), QString("\uff9dz"));
        map.insert(QString("nl"), QString("\uff9dl"));

        map.insert(QString("-"), QString("\uff70"));
        map.insert(QString("."), QString("\uff61"));
        map.insert(QString(","), QString("\uff64"));
        map.insert(QString("/"), QString("\uff65"));
        return map;
    }

    static const QMap<QString, QString> romkanTable;
};

const QMap<QString, QString> RomkanHalfKatakanaPrivate::romkanTable = RomkanHalfKatakanaPrivate::initRomkanTable();

RomkanHalfKatakana::RomkanHalfKatakana(QObject *parent) :
    Romkan(*new RomkanHalfKatakanaPrivate(), parent)
{
}

RomkanHalfKatakana::~RomkanHalfKatakana()
{
}

bool RomkanHalfKatakana::convert(ComposingText &text) const
{
    return convertImpl(text, RomkanHalfKatakanaPrivate::romkanTable);
}
