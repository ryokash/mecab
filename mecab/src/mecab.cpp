//  MeCab -- Yet Another Part-of-Speech and Morphological Analyzer
//
//  $Id: mecab.cpp 64 2007-01-30 00:51:51Z taku-ku $;
//
//  Copyright(C) 2001-2006 Taku Kudo <taku@chasen.org>
//  Copyright(C) 2004-2006 Nippon Telegraph and Telephone Corporation
#include "mecab.h"
#include "winmain.h"

int main(int argc, char **argv) {
  return mecab_do (argc, argv);
}
