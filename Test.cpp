/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 *
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: <shahar>
 *
 * Date: 2020-02
 */

#include "doctest.h"
#include "PhoneticFinder.hpp"
using namespace phonetic;

#include <string>
using namespace std;



TEST_CASE("Test replacement of p and b") {
    string text = "xxx happy yyy";
            CHECK(find(text, "happy") == string("happy"));
            CHECK(find(text, "habby") == string("happy"));
            CHECK(find(text, "hapby") == string("happy"));
            CHECK(find(text, "habpy") == string("happy"));

    /* Add more checks here */
}

TEST_CASE("Test replacement of lower-case and upper-case") {
    string text = "Happi xxx yyy";
            CHECK(find(text, "happi") == string("Happi"));
            CHECK(find(text, "HAPPY") == string("Happi"));
            CHECK(find(text, "Happi") == string("Happi"));
            CHECK(find(text, "HAPPI") == string("Happi"));
            CHECK(find(text, "HaPpI") == string("Happi"));
    /* Add more checks here */
}

TEST_CASE("Test replacement of lower-case and upper-case") {
    string text = "always smile";
            CHECK(find(text, "ALWAYS") == string("always"));
            CHECK(find(text, "alvaiz") == string("always"));
            CHECK(find(text,"smile") == string("smile"));
            CHECK(find(text, "always") == string("always"));
            CHECK(find(text, "SMILE") == string("smile"));
            CHECK(find(text, "smylE") == string("smile"));
    /* Add more checks here */
}

TEST_CASE("Test replacement of lower-case and upper-case") {
    string text = "Dora went traveling";
            CHECK(find(text, "tRAwelIng") == string("traveling"));
            CHECK(find(text, "DravelinG") == string("traveling"));
            CHECK(find(text,"traveling") == string("traveling"));
            CHECK(find(text, "WENT") == string("went"));
            CHECK(find(text, "venD") == string("went"));
            CHECK(find(text, "toRa") == string("Dora"));
            CHECK(find(text, "Tura") == string("Dora"));
            CHECK(find(text, "dora") == string("Dora"));
    /* Add more checks here */
}

TEST_CASE("Test replacement of lower-case and upper-case") {
    string text = "shahar Glikman";
            CHECK(find(text, "SHAHAR") == string("shahar"));
            CHECK(find(text, "shahar") == string("shahar"));
            CHECK(find(text,"ShAhAr") == string("shahar"));
            CHECK(find(text, "glYkMan") == string("Glikman"));
            CHECK(find(text, "glikman") == string("Glikman"));
            CHECK(find(text, "GlIkMaN") == string("Glikman"));

    /* Add more checks here */
}

TEST_CASE("Test replacement of lower-case and upper-case") {
    string text = "I want to be a fireman";
            CHECK(find(text, "PireMan") == string("fireman"));
            CHECK(find(text, "FIREman") == string("fireman"));
            CHECK(find(text,"fyrEmaN") == string("fireman"));
            CHECK(find(text, "fireman") == string("fireman"));
            CHECK(find(text, "BE") == string("be"));
            CHECK(find(text, "be") == string("be"));
            CHECK(find(text, "tU") == string("to"));
            CHECK(find(text, "do") == string("to"));
            CHECK(find(text, "A") == string("a"));
            CHECK(find(text, "WANT") == string("want"));
            CHECK(find(text, "vand") == string("want"));
            CHECK(find(text, "want") == string("want"));
            CHECK(find(text, "vAnT") == string("want"));

    /* Add more checks here */
}

TEST_CASE("Test replacement of lower-case and upper-case") {
    string text = "Its Monday now";
            CHECK(find(text, "now") == string("now"));
            CHECK(find(text, "Now") == string("now"));
            CHECK(find(text, "monday") == string("Monday"));
            CHECK(find(text, "muntai") == string("Monday"));
            CHECK(find(text, "MoNdAy") == string("Monday"));
            CHECK(find(text, "MONDAY") == string("Monday"));
            CHECK(find(text, "its") == string("Its"));
            CHECK(find(text, "IdS") == string("Its"));
            CHECK(find(text, "Its") == string("Its"));


    /* Add more checks here */
}

TEST_CASE("Test replacement of lower-case and upper-case") {
    string text = "Best day of my life";
            CHECK(find(text, "best") == string("Best"));
            CHECK(find(text, "bezt") == string("Best"));
            CHECK(find(text, "day") == string("day"));
            CHECK(find(text, "tay") == string("day"));
            CHECK(find(text, "DAY") == string("day"));
            CHECK(find(text, "OF") == string("of"));
            CHECK(find(text, "of") == string("of"));
            CHECK(find(text, "uF") == string("of"));
            CHECK(find(text, "LIFE") == string("life"));
            CHECK(find(text, "lybe") == string("life"));
            CHECK(find(text, "lIbe") == string("life"));
            CHECK(find(text, "LiPE") == string("life"));
            CHECK(find(text, "life") == string("life"));
            CHECK(find(text, "MY") == string("my"));
            CHECK(find(text, "mY") == string("my"));
            CHECK(find(text, "My") == string("my"));



    /* Add more checks here */
}

TEST_CASE("Test replacement of lower-case and upper-case") {
    string text = "Another sentence in English";
            CHECK(find(text, "anudHer") == string("Another"));
            CHECK(find(text, "ANOTHER") == string("Another"));
            CHECK(find(text, "aNoThEr") == string("Another"));
            CHECK(find(text, "ZENTENCE") == string("sentence"));
            CHECK(find(text, "sendenCE") == string("sentence"));
            CHECK(find(text, "sentence") == string("sentence"));
            CHECK(find(text, "Sentence") == string("sentence"));
            CHECK(find(text, "IN") == string("in"));
            CHECK(find(text, "yn") == string("in"));
            CHECK(find(text, "yN") == string("in"));
            CHECK(find(text, "ENGLISH") == string("English"));
            CHECK(find(text, "enjlyzh") == string("English"));
            CHECK(find(text, "englyzh") == string("English"));
            CHECK(find(text, "english") == string("English"));
            CHECK(find(text, "EnGlISH") == string("English"));


    /* Add more checks here */
}

TEST_CASE("Test replacement of lower-case and upper-case") {
    string text = "If you believe in yourself anything is possible";
            CHECK(find(text, "yf") == string("If"));
            CHECK(find(text, "IF") == string("If"));
            CHECK(find(text, "if") == string("If"));
            CHECK(find(text, "iou") == string("you"));
            CHECK(find(text, "yuo") == string("you"));
            CHECK(find(text, "you") == string("you"));
            CHECK(find(text, "YOU") == string("you"));
            CHECK(find(text, "yOU") == string("you"));
            CHECK(find(text, "believe") == string("believe"));
            CHECK(find(text, "BELIEVE") == string("believe"));
            CHECK(find(text, "pelyewe") == string("believe"));
            CHECK(find(text, "beLIevE") == string("believe"));
            CHECK(find(text, "IN") == string("in"));
            CHECK(find(text, "in") == string("in"));
            CHECK(find(text, "yn") == string("in"));
            CHECK(find(text, "yourself") == string("yourself"));
            CHECK(find(text, "YOURSELF") == string("yourself"));
            CHECK(find(text, "YoUrSeLf") == string("yourself"));
            CHECK(find(text, "IUUrZelp") == string("yourself"));
            CHECK(find(text, "IUUrZelb") == string("yourself"));
            CHECK(find(text, "anything") == string("anything"));
            CHECK(find(text, "ANYTHING") == string("anything"));
            CHECK(find(text, "anyTHING") == string("anything"));
            CHECK(find(text, "anidhyng") == string("anything"));
            CHECK(find(text, "is") == string("is"));
            CHECK(find(text, "IS") == string("is"));
            CHECK(find(text, "POSSIBLE") == string("possible"));
            CHECK(find(text, "fOzzIPLE") == string("possible"));
            CHECK(find(text, "Pussyple") == string("possible"));
            CHECK(find(text, "BussIple") == string("possible"));
            CHECK(find(text, "possible") == string("possible"));






    /* Add more checks here */
}

/* Add more test cases here */
