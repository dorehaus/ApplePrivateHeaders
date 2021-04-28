/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSCharacterSet;

@interface NSScanner : NSObject <NSCopying>

@property (copy,readonly) NSString * string; 
@property (assign) unsigned long long scanLocation; 
@property (copy) NSCharacterSet * charactersToBeSkipped; 
@property (assign) char caseSensitive; 
@property (retain) id locale; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)scannerWithString:(id)arg1 ;
+(id)localizedScannerWithString:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)string;
-(id)initWithString:(id)arg1 ;
-(void)setLocale:(id)arg1 ;
-(id)locale;
-(char)isAtEnd;
-(unsigned long long)scanLocation;
-(void)setScanLocation:(unsigned long long)arg1 ;
-(id)_remainingString;
-(char)_scanDecimal:(unsigned long long)arg1 into:(long long*)arg2 ;
-(void)setCharactersToBeSkipped:(NSCharacterSet *)arg1 ;
-(char)scanCharactersFromSet:(id)arg1 intoString:(id*)arg2 ;
-(char)scanUpToCharactersFromSet:(id)arg1 intoString:(id*)arg2 ;
-(char)scanString:(id)arg1 intoString:(id*)arg2 ;
-(char)scanInt:(int*)arg1 ;
-(NSCharacterSet *)charactersToBeSkipped;
-(char)scanDecimal:(SCD_Struct_NS18*)arg1 ;
-(char)scanUpToString:(id)arg1 intoString:(id*)arg2 ;
-(char)caseSensitive;
-(void)setCaseSensitive:(char)arg1 ;
-(char)scanLongLong:(long long*)arg1 ;
-(char)scanUnsignedLongLong:(unsigned long long*)arg1 ;
-(char)scanHexLongLong:(unsigned long long*)arg1 ;
-(id)_invertedSkipSet;
-(char)scanDouble:(double*)arg1 ;
-(char)scanFloat:(float*)arg1 ;
-(char)scanHexDouble:(double*)arg1 ;
-(char)scanHexFloat:(float*)arg1 ;
-(char)scanInteger:(long long*)arg1 ;
-(char)scanUnsignedInteger:(unsigned long long*)arg1 ;
-(char)scanHexInt:(unsigned*)arg1 ;
@end

