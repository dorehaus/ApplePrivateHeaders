/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/Versions/A/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <CloudDocsDaemon/BRCDumper.h>

@interface BRCTermDumper : BRCDumper {

	_sFILE* _file;
	unsigned long long _termWidth;
	unsigned long long _usedTermWidth;
	int _curAttrs;
	int _curFg;
	int _curBg;
	char _isatty;
	char _useColor;
	char _supportsEscapeSequences;

}

@property (nonatomic,readonly) char isatty;                               //@synthesize isatty=_isatty - In the implementation block
@property (nonatomic,readonly) char supportsEscapeSequences;              //@synthesize supportsEscapeSequences=_supportsEscapeSequences - In the implementation block
@property (nonatomic,readonly) char useColor;                             //@synthesize useColor=_useColor - In the implementation block
+(void)setupPagerForFd:(int)arg1 ;
+(void)execPagerOnFileFd:(int)arg1 ;
-(void)reset;
-(void)put:(id)arg1 ;
-(void)write:(const char*)arg1 ;
-(id)initWithFd:(int)arg1 forceColor:(char)arg2 ;
-(unsigned long long)_startInCString:(char)arg1 fgColor:(int)arg2 bgColor:(int)arg3 attr:(int)arg4 ;
-(id)startStringForFgColor:(int)arg1 bgColor:(int)arg2 attr:(int)arg3 ;
-(void)startFgColor:(int)arg1 bgColor:(int)arg2 attr:(int)arg3 ;
-(void)cursorGotoLineStart;
-(void)forgetRemainingSpace;
-(void)puts:(const char*)arg1 len:(unsigned long long)arg2 ;
-(char)supportsEscapeSequences;
-(void)_putsAndCrop:(const char*)arg1 len:(unsigned long long)arg2 ;
-(void)puts:(const char*)arg1 ;
-(void)startPager;
-(id)stringForReset;
-(void)eraseEndOfLine;
-(void)eraseStartOfLine;
-(void)eraseLine;
-(void)eraseScreenDown;
-(void)eraseScreenUp;
-(void)cursorSave;
-(void)cursorRestore;
-(void)cursorUp:(unsigned)arg1 ;
-(void)cursorDown:(unsigned)arg1 ;
-(void)cursorRight:(unsigned)arg1 ;
-(void)cursorLeft:(unsigned)arg1 ;
-(void)startNewLine;
-(void)endLine;
-(unsigned long long)remainingSpace;
-(char)isatty;
-(char)useColor;
@end
