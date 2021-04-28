/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/Versions/A/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ICRandomNumberGenerator;

@interface ICRandomTextGenerator : NSObject {

	unsigned long long _language;
	ICRandomNumberGenerator* _randomNumberGenerator;

}

@property (nonatomic,retain) ICRandomNumberGenerator * randomNumberGenerator;              //@synthesize randomNumberGenerator=_randomNumberGenerator - In the implementation block
@property (assign,nonatomic) unsigned long long language;                                  //@synthesize language=_language - In the implementation block
@property (nonatomic,readonly) char isRightToLeftLanguage; 
+(id)loadWordsForLanguage:(unsigned long long)arg1 ;
+(id)wordsForLanguage:(unsigned long long)arg1 ;
+(char)hasSpacesBetweenWordsForLanguage:(unsigned long long)arg1 ;
+(id)sentencePunctuationForLanguage:(unsigned long long)arg1 endOfParagraph:(char)arg2 ;
-(unsigned long long)language;
-(void)setLanguage:(unsigned long long)arg1 ;
-(ICRandomNumberGenerator *)randomNumberGenerator;
-(id)word;
-(id)paragraph;
-(id)sentence;
-(void)setRandomNumberGenerator:(ICRandomNumberGenerator *)arg1 ;
-(id)generateMinWords:(unsigned long long)arg1 maxWords:(unsigned long long)arg2 ;
-(id)generateMinSentences:(unsigned long long)arg1 maxSentences:(unsigned long long)arg2 minWords:(unsigned long long)arg3 maxWords:(unsigned long long)arg4 ;
-(id)generateWords:(unsigned long long)arg1 minLength:(unsigned long long)arg2 ;
-(id)initWithRandomNumberGenerator:(id)arg1 ;
-(char)isRightToLeftLanguage;
-(id)lineOfText;
-(id)generateWordsWithMinLength:(unsigned long long)arg1 ;
@end

