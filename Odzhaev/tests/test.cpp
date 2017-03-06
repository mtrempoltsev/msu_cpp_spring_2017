#include "stdafx.h"

#include "../src/translator.h"

class test
        : public ::testing::Test
{
protected:
        Translator mutko;
};

TEST_F(test, test_strings)
{
        EXPECT_STREQ("2", mutko.translate("a").c_str());
        EXPECT_STREQ("22", mutko.translate("b").c_str());
        EXPECT_STREQ("222", mutko.translate("c").c_str());

        EXPECT_STREQ("3", mutko.translate("d").c_str());
        EXPECT_STREQ("33", mutko.translate("e").c_str());
        EXPECT_STREQ("333", mutko.translate("f").c_str());

        EXPECT_STREQ("4", mutko.translate("g").c_str());
        EXPECT_STREQ("44", mutko.translate("h").c_str());
        EXPECT_STREQ("444", mutko.translate("i").c_str());

        EXPECT_STREQ("5", mutko.translate("j").c_str());
        EXPECT_STREQ("55", mutko.translate("k").c_str());
        EXPECT_STREQ("555", mutko.translate("l").c_str());

        EXPECT_STREQ("6", mutko.translate("m").c_str());
        EXPECT_STREQ("66", mutko.translate("n").c_str());
        EXPECT_STREQ("666", mutko.translate("o").c_str());

        EXPECT_STREQ("7", mutko.translate("p").c_str());
        EXPECT_STREQ("77", mutko.translate("q").c_str());
        EXPECT_STREQ("777", mutko.translate("r").c_str());
        EXPECT_STREQ("7777", mutko.translate("s").c_str());

        EXPECT_STREQ("8", mutko.translate("t").c_str());
        EXPECT_STREQ("88", mutko.translate("u").c_str());
        EXPECT_STREQ("888", mutko.translate("v").c_str());

        EXPECT_STREQ("9", mutko.translate("w").c_str());
        EXPECT_STREQ("99", mutko.translate("x").c_str());
        EXPECT_STREQ("999", mutko.translate("y").c_str());
        EXPECT_STREQ("9999", mutko.translate("z").c_str());

        EXPECT_STREQ("0 0 0", mutko.translate("   ").c_str());
        EXPECT_STREQ("2 2 2", mutko.translate("aaa").c_str());


        EXPECT_STREQ("44 444", mutko.translate("hi").c_str());

        EXPECT_STREQ("999337777", mutko.translate("yes").c_str());

        EXPECT_STREQ("333666 6660 022 2777", mutko.translate("foo  bar").c_str());

        EXPECT_STREQ("4433555 555666096667775553", mutko.translate("hello world").c_str());

        EXPECT_STREQ("String is empty", mutko.translate("").c_str());

        EXPECT_STREQ("A is not symbol a-z or space", mutko.translate("A").c_str());

        EXPECT_STREQ("1 is not symbol a-z or space", mutko.translate("1").c_str());
}