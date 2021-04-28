/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/Versions/A/EmailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <EmailCore/EmailCore-Structs.h>
@class NSNumber, NSString, NSData;

@interface ECEncodedWordDecoder : NSObject {

	NSNumber* _stringEncoding;
	NSString* _language;
	NSData* _headerData;
	long long _encodedWordEncoding;
	NSRange _encodedTextRange;

}

@property (nonatomic,copy,readonly) NSData * headerData;                 //@synthesize headerData=_headerData - In the implementation block
@property (nonatomic,retain) NSNumber * stringEncoding;                  //@synthesize stringEncoding=_stringEncoding - In the implementation block
@property (nonatomic,copy) NSString * language;                          //@synthesize language=_language - In the implementation block
@property (assign,nonatomic) long long encodedWordEncoding;              //@synthesize encodedWordEncoding=_encodedWordEncoding - In the implementation block
@property (assign,nonatomic) NSRange encodedTextRange;                   //@synthesize encodedTextRange=_encodedTextRange - In the implementation block
-(id)init;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(NSNumber *)stringEncoding;
-(id)initWithHeaderData:(id)arg1 ;
-(NSRange)identifyRangeOfEncodedWordAtIndex:(unsigned long long)arg1 ;
-(char)decodeEncodedTextToData:(id)arg1 ;
-(NSData *)headerData;
-(id)_encodedWordStartSequence;
-(id)_lineSeparator;
-(id)_encodedWordDelimiter;
-(id)_encodedWordEndSequence;
-(void)setEncodedWordEncoding:(long long)arg1 ;
-(void)setStringEncoding:(NSNumber *)arg1 ;
-(void)setEncodedTextRange:(NSRange)arg1 ;
-(id)_encodedWordLanguageDelimiter;
-(long long)encodedWordEncoding;
-(NSRange)encodedTextRange;
-(char)_decodeBEncodedTextToData:(id)arg1 ;
-(char)_decodeQEncodedTextToData:(id)arg1 ;
-(void)_enumerateQByteRangesUsingBlock:(/*^block*/id)arg1 ;
@end

