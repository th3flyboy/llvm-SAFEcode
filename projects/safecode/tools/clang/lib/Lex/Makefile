##===- clang/lib/Lex/Makefile ------------------------------*- Makefile -*-===##
# 
#                     The LLVM Compiler Infrastructure
#
# This file is distributed under the University of Illinois Open Source
# License. See LICENSE.TXT for details.
# 
##===----------------------------------------------------------------------===##
#
#  This implements the Lexer library for the C-Language front-end.
#
##===----------------------------------------------------------------------===##

CLANG_LEVEL := ../..
LEVEL := $(CLANG_LEVEL)/../..
include $(CLANG_LEVEL)/../../Makefile.common

LIBRARYNAME := clangLex

ifeq ($(ARCH),PowerPC)
CXX.Flags += -maltivec
endif

include $(CLANG_LEVEL)/Makefile

