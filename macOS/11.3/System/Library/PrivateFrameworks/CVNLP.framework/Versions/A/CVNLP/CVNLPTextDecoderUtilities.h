/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CVNLP.framework/Versions/A/CVNLP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCharacterSet;

@interface CVNLPTextDecoderUtilities : NSObject {

	NSCharacterSet* _whitespaceCharSet;
	NSCharacterSet* _lowercaseCharSet;
	NSCharacterSet* _uppercaseCharSet;
	NSCharacterSet* _separatorCharSet;
	NSCharacterSet* _punctuationCharSet;
	NSCharacterSet* _latinNumeralCharSet;

}
+(id)sharedInstance;
-(id)init;
-(char)isStringWhitespace:(id)arg1 ;
-(char)isLatinCharacter:(id)arg1 ;
-(char)isStringPunctuation:(id)arg1 ;
-(char)isStringLatinNumeral:(id)arg1 ;
-(unsigned long long)unicodeFromCharacterString:(id)arg1 ;
-(char)isStringWordSeparator:(id)arg1 ;
-(char)isStringLowercase:(id)arg1 ;
-(char)isStringUppercase:(id)arg1 ;
-(unsigned long long)lengthOfString:(id)arg1 ;
@end

