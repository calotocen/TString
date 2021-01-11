/*
 * Copyright 2020 calotocen
 *
 * This software is released under the Apache License, Version 2.0.
 * see https://opensource.org/licenses/Apache-2.0.
 */
#include "pch.h"
#define TSTRING_SUPPRESS_INCLUDING_DEPENDENT_HEADERS
#define private public
#include "tstring.h"

TEST(TStringTest, TestConstractor001_001) {
	basic_tstring<char> str;
	EXPECT_TRUE(!str.m_string);
	EXPECT_TRUE(!str.m_u8string);
	EXPECT_TRUE(!str.m_u16string);
	EXPECT_TRUE(!str.m_u32string);
	EXPECT_TRUE(!str.m_wstring);
}

TEST(TStringTest, TestConstractor001_002) {
	basic_tstring<wchar_t> str;
	EXPECT_TRUE(!str.m_string);
	EXPECT_TRUE(!str.m_u8string);
	EXPECT_TRUE(!str.m_u16string);
	EXPECT_TRUE(!str.m_u32string);
	EXPECT_TRUE(!str.m_wstring);
}

TEST(TStringTest, TestConstractor002_001) {
	basic_tstring<char> str("test");
	EXPECT_TRUE(str.m_string);
	EXPECT_STREQ("test", str.m_string->c_str());
	EXPECT_TRUE(!str.m_u8string);
	EXPECT_TRUE(!str.m_u16string);
	EXPECT_TRUE(!str.m_u32string);
	EXPECT_TRUE(!str.m_wstring);
}

TEST(TStringTest, TestConstractor002_002) {
	basic_tstring<wchar_t> str("test");
	EXPECT_TRUE(str.m_string);
	EXPECT_STREQ("test", str.m_string->c_str());
	EXPECT_TRUE(!str.m_u8string);
	EXPECT_TRUE(!str.m_u16string);
	EXPECT_TRUE(!str.m_u32string);
	EXPECT_TRUE(!str.m_wstring);
}

TEST(TStringTest, TestConstractor003_001) {
	basic_tstring<char> str(L"test");
	EXPECT_TRUE(!str.m_string);
	EXPECT_TRUE(!str.m_u8string);
	EXPECT_TRUE(!str.m_u16string);
	EXPECT_TRUE(!str.m_u32string);
	EXPECT_TRUE(str.m_wstring);
	EXPECT_STREQ(L"test", str.m_wstring->c_str());
}

TEST(TStringTest, TestConstractor003_002) {
	basic_tstring<wchar_t> str(L"test");
	EXPECT_TRUE(!str.m_string);
	EXPECT_TRUE(!str.m_u8string);
	EXPECT_TRUE(!str.m_u16string);
	EXPECT_TRUE(!str.m_u32string);
	EXPECT_TRUE(str.m_wstring);
	EXPECT_STREQ(L"test", str.m_wstring->c_str());
}

