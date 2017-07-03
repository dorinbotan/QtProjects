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

#include "kanaconverter.h"

#include <QtCore/private/qobject_p.h>

class KanaConverterPrivate : public QObjectPrivate
{
public:
    static QMap<QString, QString> initHalfKatakanaMap()
    {
        QMap<QString, QString> map;
        map.insert(QString("\u3042"), QString("\uff71"));
        map.insert(QString("\u3044"), QString("\uff72"));
        map.insert(QString("\u3046"), QString("\uff73"));
        map.insert(QString("\u3048"), QString("\uff74"));
        map.insert(QString("\u304a"), QString("\uff75"));
        map.insert(QString("\u3041"), QString("\uff67"));
        map.insert(QString("\u3043"), QString("\uff68"));
        map.insert(QString("\u3045"), QString("\uff69"));
        map.insert(QString("\u3047"), QString("\uff6a"));
        map.insert(QString("\u3049"), QString("\uff6b"));
        //map.insert(QString("\u30f4\u3041"), QString("\uff73\uff9e\uff67"));
        //map.insert(QString("\u30f4\u3043"), QString("\uff73\uff9e\uff68"));
        map.insert(QString("\u30f4"), QString("\uff73\uff9e"));
        //map.insert(QString("\u30f4\u3047"), QString("\uff73\uff9e\uff6a"));
        //map.insert(QString("\u30f4\u3049"), QString("\uff73\uff9e\uff6b"));
        map.insert(QString("\u304b"), QString("\uff76"));
        map.insert(QString("\u304d"), QString("\uff77"));
        map.insert(QString("\u304f"), QString("\uff78"));
        map.insert(QString("\u3051"), QString("\uff79"));
        map.insert(QString("\u3053"), QString("\uff7a"));
        map.insert(QString("\u304c"), QString("\uff76\uff9e"));
        map.insert(QString("\u304e"), QString("\uff77\uff9e"));
        map.insert(QString("\u3050"), QString("\uff78\uff9e"));
        map.insert(QString("\u3052"), QString("\uff79\uff9e"));
        map.insert(QString("\u3054"), QString("\uff7a\uff9e"));
        map.insert(QString("\u3055"), QString("\uff7b"));
        map.insert(QString("\u3057"), QString("\uff7c"));
        map.insert(QString("\u3059"), QString("\uff7d"));
        map.insert(QString("\u305b"), QString("\uff7e"));
        map.insert(QString("\u305d"), QString("\uff7f"));
        map.insert(QString("\u3056"), QString("\uff7b\uff9e"));
        map.insert(QString("\u3058"), QString("\uff7c\uff9e"));
        map.insert(QString("\u305a"), QString("\uff7d\uff9e"));
        map.insert(QString("\u305c"), QString("\uff7e\uff9e"));
        map.insert(QString("\u305e"), QString("\uff7f\uff9e"));
        map.insert(QString("\u305f"), QString("\uff80"));
        map.insert(QString("\u3061"), QString("\uff81"));
        map.insert(QString("\u3064"), QString("\uff82"));
        map.insert(QString("\u3066"), QString("\uff83"));
        map.insert(QString("\u3068"), QString("\uff84"));
        map.insert(QString("\u3063"), QString("\uff6f"));
        map.insert(QString("\u3060"), QString("\uff80\uff9e"));
        map.insert(QString("\u3062"), QString("\uff81\uff9e"));
        map.insert(QString("\u3065"), QString("\uff82\uff9e"));
        map.insert(QString("\u3067"), QString("\uff83\uff9e"));
        map.insert(QString("\u3069"), QString("\uff84\uff9e"));
        map.insert(QString("\u306a"), QString("\uff85"));
        map.insert(QString("\u306b"), QString("\uff86"));
        map.insert(QString("\u306c"), QString("\uff87"));
        map.insert(QString("\u306d"), QString("\uff88"));
        map.insert(QString("\u306e"), QString("\uff89"));
        map.insert(QString("\u306f"), QString("\uff8a"));
        map.insert(QString("\u3072"), QString("\uff8b"));
        map.insert(QString("\u3075"), QString("\uff8c"));
        map.insert(QString("\u3078"), QString("\uff8d"));
        map.insert(QString("\u307b"), QString("\uff8e"));
        map.insert(QString("\u3070"), QString("\uff8a\uff9e"));
        map.insert(QString("\u3073"), QString("\uff8b\uff9e"));
        map.insert(QString("\u3076"), QString("\uff8c\uff9e"));
        map.insert(QString("\u3079"), QString("\uff8d\uff9e"));
        map.insert(QString("\u307c"), QString("\uff8e\uff9e"));
        map.insert(QString("\u3071"), QString("\uff8a\uff9f"));
        map.insert(QString("\u3074"), QString("\uff8b\uff9f"));
        map.insert(QString("\u3077"), QString("\uff8c\uff9f"));
        map.insert(QString("\u307a"), QString("\uff8d\uff9f"));
        map.insert(QString("\u307d"), QString("\uff8e\uff9f"));
        map.insert(QString("\u307e"), QString("\uff8f"));
        map.insert(QString("\u307f"), QString("\uff90"));
        map.insert(QString("\u3080"), QString("\uff91"));
        map.insert(QString("\u3081"), QString("\uff92"));
        map.insert(QString("\u3082"), QString("\uff93"));
        map.insert(QString("\u3084"), QString("\uff94"));
        map.insert(QString("\u3086"), QString("\uff95"));
        map.insert(QString("\u3088"), QString("\uff96"));
        map.insert(QString("\u3083"), QString("\uff6c"));
        map.insert(QString("\u3085"), QString("\uff6d"));
        map.insert(QString("\u3087"), QString("\uff6e"));
        map.insert(QString("\u3089"), QString("\uff97"));
        map.insert(QString("\u308a"), QString("\uff98"));
        map.insert(QString("\u308b"), QString("\uff99"));
        map.insert(QString("\u308c"), QString("\uff9a"));
        map.insert(QString("\u308d"), QString("\uff9b"));
        map.insert(QString("\u308f"), QString("\uff9c"));
        map.insert(QString("\u3092"), QString("\uff66"));
        map.insert(QString("\u3093"), QString("\uff9d"));
        map.insert(QString("\u308e"), QString("\uff9c"));
        map.insert(QString("\u30fc"), QString("\uff70"));
        return map;
    }

    static QMap<QString, QString> initFullKatakanaMap()
    {
        QMap<QString, QString> map;
        map.insert(QString("\u3042"), QString("\u30a2"));
        map.insert(QString("\u3044"), QString("\u30a4"));
        map.insert(QString("\u3046"), QString("\u30a6"));
        map.insert(QString("\u3048"), QString("\u30a8"));
        map.insert(QString("\u304a"), QString("\u30aa"));
        map.insert(QString("\u3041"), QString("\u30a1"));
        map.insert(QString("\u3043"), QString("\u30a3"));
        map.insert(QString("\u3045"), QString("\u30a5"));
        map.insert(QString("\u3047"), QString("\u30a7"));
        map.insert(QString("\u3049"), QString("\u30a9"));
        //map.insert(QString("\u30f4\u3041"), QString("\u30f4\u30a1"));
        //map.insert(QString("\u30f4\u3043"), QString("\u30f4\u30a3"));
        map.insert(QString("\u30f4"), QString("\u30f4"));
        //map.insert(QString("\u30f4\u3047"), QString("\u30f4\u30a7"));
        //map.insert(QString("\u30f4\u3049"), QString("\u30f4\u30a9"));
        map.insert(QString("\u304b"), QString("\u30ab"));
        map.insert(QString("\u304d"), QString("\u30ad"));
        map.insert(QString("\u304f"), QString("\u30af"));
        map.insert(QString("\u3051"), QString("\u30b1"));
        map.insert(QString("\u3053"), QString("\u30b3"));
        map.insert(QString("\u304c"), QString("\u30ac"));
        map.insert(QString("\u304e"), QString("\u30ae"));
        map.insert(QString("\u3050"), QString("\u30b0"));
        map.insert(QString("\u3052"), QString("\u30b2"));
        map.insert(QString("\u3054"), QString("\u30b4"));
        map.insert(QString("\u3055"), QString("\u30b5"));
        map.insert(QString("\u3057"), QString("\u30b7"));
        map.insert(QString("\u3059"), QString("\u30b9"));
        map.insert(QString("\u305b"), QString("\u30bb"));
        map.insert(QString("\u305d"), QString("\u30bd"));
        map.insert(QString("\u3056"), QString("\u30b6"));
        map.insert(QString("\u3058"), QString("\u30b8"));
        map.insert(QString("\u305a"), QString("\u30ba"));
        map.insert(QString("\u305c"), QString("\u30bc"));
        map.insert(QString("\u305e"), QString("\u30be"));
        map.insert(QString("\u305f"), QString("\u30bf"));
        map.insert(QString("\u3061"), QString("\u30c1"));
        map.insert(QString("\u3064"), QString("\u30c4"));
        map.insert(QString("\u3066"), QString("\u30c6"));
        map.insert(QString("\u3068"), QString("\u30c8"));
        map.insert(QString("\u3063"), QString("\u30c3"));
        map.insert(QString("\u3060"), QString("\u30c0"));
        map.insert(QString("\u3062"), QString("\u30c2"));
        map.insert(QString("\u3065"), QString("\u30c5"));
        map.insert(QString("\u3067"), QString("\u30c7"));
        map.insert(QString("\u3069"), QString("\u30c9"));
        map.insert(QString("\u306a"), QString("\u30ca"));
        map.insert(QString("\u306b"), QString("\u30cb"));
        map.insert(QString("\u306c"), QString("\u30cc"));
        map.insert(QString("\u306d"), QString("\u30cd"));
        map.insert(QString("\u306e"), QString("\u30ce"));
        map.insert(QString("\u306f"), QString("\u30cf"));
        map.insert(QString("\u3072"), QString("\u30d2"));
        map.insert(QString("\u3075"), QString("\u30d5"));
        map.insert(QString("\u3078"), QString("\u30d8"));
        map.insert(QString("\u307b"), QString("\u30db"));
        map.insert(QString("\u3070"), QString("\u30d0"));
        map.insert(QString("\u3073"), QString("\u30d3"));
        map.insert(QString("\u3076"), QString("\u30d6"));
        map.insert(QString("\u3079"), QString("\u30d9"));
        map.insert(QString("\u307c"), QString("\u30dc"));
        map.insert(QString("\u3071"), QString("\u30d1"));
        map.insert(QString("\u3074"), QString("\u30d4"));
        map.insert(QString("\u3077"), QString("\u30d7"));
        map.insert(QString("\u307a"), QString("\u30da"));
        map.insert(QString("\u307d"), QString("\u30dd"));
        map.insert(QString("\u307e"), QString("\u30de"));
        map.insert(QString("\u307f"), QString("\u30df"));
        map.insert(QString("\u3080"), QString("\u30e0"));
        map.insert(QString("\u3081"), QString("\u30e1"));
        map.insert(QString("\u3082"), QString("\u30e2"));
        map.insert(QString("\u3084"), QString("\u30e4"));
        map.insert(QString("\u3086"), QString("\u30e6"));
        map.insert(QString("\u3088"), QString("\u30e8"));
        map.insert(QString("\u3083"), QString("\u30e3"));
        map.insert(QString("\u3085"), QString("\u30e5"));
        map.insert(QString("\u3087"), QString("\u30e7"));
        map.insert(QString("\u3089"), QString("\u30e9"));
        map.insert(QString("\u308a"), QString("\u30ea"));
        map.insert(QString("\u308b"), QString("\u30eb"));
        map.insert(QString("\u308c"), QString("\u30ec"));
        map.insert(QString("\u308d"), QString("\u30ed"));
        map.insert(QString("\u308f"), QString("\u30ef"));
        map.insert(QString("\u3092"), QString("\u30f2"));
        map.insert(QString("\u3093"), QString("\u30f3"));
        map.insert(QString("\u308e"), QString("\u30ee"));
        map.insert(QString("\u30fc"), QString("\u30fc"));
        return map;
    }

    static QMap<QString, QString> initFullAlphabetMapQwety()
    {
        QMap<QString, QString> map;
        map.insert(QString("a"), QString("\uff41"));
        map.insert(QString("b"), QString("\uff42"));
        map.insert(QString("c"), QString("\uff43"));
        map.insert(QString("d"), QString("\uff44"));
        map.insert(QString("e"), QString("\uff45"));
        map.insert(QString("f"), QString("\uff46"));
        map.insert(QString("g"), QString("\uff47"));
        map.insert(QString("h"), QString("\uff48"));
        map.insert(QString("i"), QString("\uff49"));
        map.insert(QString("j"), QString("\uff4a"));
        map.insert(QString("k"), QString("\uff4b"));
        map.insert(QString("l"), QString("\uff4c"));
        map.insert(QString("m"), QString("\uff4d"));
        map.insert(QString("n"), QString("\uff4e"));
        map.insert(QString("o"), QString("\uff4f"));
        map.insert(QString("p"), QString("\uff50"));
        map.insert(QString("q"), QString("\uff51"));
        map.insert(QString("r"), QString("\uff52"));
        map.insert(QString("s"), QString("\uff53"));
        map.insert(QString("t"), QString("\uff54"));
        map.insert(QString("u"), QString("\uff55"));
        map.insert(QString("v"), QString("\uff56"));
        map.insert(QString("w"), QString("\uff57"));
        map.insert(QString("x"), QString("\uff58"));
        map.insert(QString("y"), QString("\uff59"));
        map.insert(QString("z"), QString("\uff5a"));
        map.insert(QString("A"), QString("\uff21"));
        map.insert(QString("B"), QString("\uff22"));
        map.insert(QString("C"), QString("\uff23"));
        map.insert(QString("D"), QString("\uff24"));
        map.insert(QString("E"), QString("\uff25"));
        map.insert(QString("F"), QString("\uff26"));
        map.insert(QString("G"), QString("\uff27"));
        map.insert(QString("H"), QString("\uff28"));
        map.insert(QString("I"), QString("\uff29"));
        map.insert(QString("J"), QString("\uff2a"));
        map.insert(QString("K"), QString("\uff2b"));
        map.insert(QString("L"), QString("\uff2c"));
        map.insert(QString("M"), QString("\uff2d"));
        map.insert(QString("N"), QString("\uff2e"));
        map.insert(QString("O"), QString("\uff2f"));
        map.insert(QString("P"), QString("\uff30"));
        map.insert(QString("Q"), QString("\uff31"));
        map.insert(QString("R"), QString("\uff32"));
        map.insert(QString("S"), QString("\uff33"));
        map.insert(QString("T"), QString("\uff34"));
        map.insert(QString("U"), QString("\uff35"));
        map.insert(QString("V"), QString("\uff36"));
        map.insert(QString("W"), QString("\uff37"));
        map.insert(QString("X"), QString("\uff38"));
        map.insert(QString("Y"), QString("\uff39"));
        map.insert(QString("Z"), QString("\uff3a"));
        return map;
    }

    void createPseudoCandidateListForQwerty(QList<WnnWord> &list, const QString &inputHiragana, const QString &inputRomaji)
    {
        /* Create pseudo candidates for half width alphabet */
        QString convHanEijiLower = inputRomaji.toLower();
        list.append(WnnWord(inputRomaji, inputHiragana, mPosDefault));
        list.append(WnnWord(convHanEijiLower, inputHiragana, mPosSymbol));
        list.append(WnnWord(convertCaps(convHanEijiLower), inputHiragana, mPosSymbol));
        list.append(WnnWord(inputRomaji.toUpper(), inputHiragana, mPosSymbol));

        /* Create pseudo candidates for the full width alphabet */
        QString convZenEiji;
        if (createCandidateString(inputRomaji, mFullAlphabetMapQwety, convZenEiji)) {
            QString convZenEijiLower = convZenEiji.toLower();
            list.append(WnnWord(convZenEiji, inputHiragana, mPosSymbol));
            list.append(WnnWord(convZenEijiLower, inputHiragana, mPosSymbol));
            list.append(WnnWord(convertCaps(convZenEijiLower), inputHiragana, mPosSymbol));
            list.append(WnnWord(convZenEiji.toUpper(), inputHiragana, mPosSymbol));
        }
    }

    static bool createCandidateString(const QString &input, const QMap<QString, QString> &map, QString &outBuf) {
        outBuf.clear();
        const QString empty;
        for (int index = 0, length = input.length(); index < length; index++) {
            QString out = map.value(input.mid(index, 1), empty);
            if (out.isEmpty())
                return false;
            outBuf.append(out);
        }
        return true;
    }

    QString convertCaps(const QString &moji) {
        QString tmp;
        if (!moji.isEmpty()) {
            tmp.append(moji.left(1).toUpper());
            tmp.append(moji.mid(1).toLower());
        }
        return tmp;
    }

    static const QMap<QString, QString> mHalfKatakanaMap;
    static const QMap<QString, QString> mFullKatakanaMap;
    static const QMap<QString, QString> mFullAlphabetMapQwety;

    WnnPOS mPosDefault;
    WnnPOS mPosNumber;
    WnnPOS mPosSymbol;
};

const QMap<QString, QString> KanaConverterPrivate::mHalfKatakanaMap = KanaConverterPrivate::initHalfKatakanaMap();
const QMap<QString, QString> KanaConverterPrivate::mFullKatakanaMap = KanaConverterPrivate::initFullKatakanaMap();
const QMap<QString, QString> KanaConverterPrivate::mFullAlphabetMapQwety = KanaConverterPrivate::initFullAlphabetMapQwety();

KanaConverter::KanaConverter(QObject *parent) :
    QObject(*new KanaConverterPrivate(), parent)
{
}

KanaConverter::~KanaConverter()
{
}

void KanaConverter::setDictionary(OpenWnnDictionary *dict)
{
    Q_D(KanaConverter);
    /* get part of speech tags */
    d->mPosDefault  = dict->getPOS(OpenWnnDictionary::POS_TYPE_MEISI);
    d->mPosNumber   = dict->getPOS(OpenWnnDictionary::POS_TYPE_SUUJI);
    d->mPosSymbol   = dict->getPOS(OpenWnnDictionary::POS_TYPE_KIGOU);
}

QList<WnnWord> KanaConverter::createPseudoCandidateList(const QString &inputHiragana, const QString &inputRomaji)
{
    Q_D(KanaConverter);
    QList<WnnWord> list;

    if (inputHiragana.length() == 0) {
        return list;
    }

    /* Create pseudo candidates for all keyboard type */
    /* Hiragana(reading) / Full width katakana / Half width katakana */
    list.append(WnnWord(inputHiragana, inputHiragana));
    QString stringBuff;
    if (d->createCandidateString(inputHiragana, KanaConverterPrivate::mFullKatakanaMap, stringBuff)) {
        list.append(WnnWord(stringBuff, inputHiragana, d->mPosDefault));
    }
    if (d->createCandidateString(inputHiragana, KanaConverterPrivate::mHalfKatakanaMap, stringBuff)) {
        list.append(WnnWord(stringBuff, inputHiragana, d->mPosDefault));
    }

    /* Create pseudo candidates for Qwerty keyboard */
    d->createPseudoCandidateListForQwerty(list, inputHiragana, inputRomaji);
    return list;
}
