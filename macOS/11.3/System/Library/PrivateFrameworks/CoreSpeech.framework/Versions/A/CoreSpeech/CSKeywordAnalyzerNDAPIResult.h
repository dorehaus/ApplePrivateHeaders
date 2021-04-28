/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/Versions/A/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface CSKeywordAnalyzerNDAPIResult : NSObject {

	char _isEarlyWarning;
	char _isRescoring;
	float _bestScore;
	unsigned long long _phraseId;
	unsigned long long _samplesFed;
	unsigned long long _bestPhrase;
	unsigned long long _bestStart;
	unsigned long long _bestEnd;
	unsigned long long _samplesAtFire;
	unsigned long long _startSampleCount;

}

@property (assign,nonatomic) unsigned long long phraseId;                      //@synthesize phraseId=_phraseId - In the implementation block
@property (assign,nonatomic) unsigned long long samplesFed;                    //@synthesize samplesFed=_samplesFed - In the implementation block
@property (assign,nonatomic) unsigned long long bestPhrase;                    //@synthesize bestPhrase=_bestPhrase - In the implementation block
@property (assign,nonatomic) unsigned long long bestStart;                     //@synthesize bestStart=_bestStart - In the implementation block
@property (assign,nonatomic) unsigned long long bestEnd;                       //@synthesize bestEnd=_bestEnd - In the implementation block
@property (assign,nonatomic) float bestScore;                                  //@synthesize bestScore=_bestScore - In the implementation block
@property (assign,nonatomic) char isEarlyWarning;                              //@synthesize isEarlyWarning=_isEarlyWarning - In the implementation block
@property (assign,nonatomic) char isRescoring;                                 //@synthesize isRescoring=_isRescoring - In the implementation block
@property (assign,nonatomic) unsigned long long samplesAtFire;                 //@synthesize samplesAtFire=_samplesAtFire - In the implementation block
@property (assign,nonatomic) unsigned long long startSampleCount;              //@synthesize startSampleCount=_startSampleCount - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionary; 
-(id)init;
-(NSDictionary *)dictionary;
-(void)setBestScore:(float)arg1 ;
-(float)bestScore;
-(unsigned long long)bestEnd;
-(unsigned long long)bestStart;
-(unsigned long long)startSampleCount;
-(unsigned long long)samplesFed;
-(void)setSamplesFed:(unsigned long long)arg1 ;
-(void)setBestStart:(unsigned long long)arg1 ;
-(void)setBestEnd:(unsigned long long)arg1 ;
-(unsigned long long)samplesAtFire;
-(unsigned long long)phraseId;
-(void)setPhraseId:(unsigned long long)arg1 ;
-(unsigned long long)bestPhrase;
-(void)setBestPhrase:(unsigned long long)arg1 ;
-(char)isEarlyWarning;
-(void)setIsEarlyWarning:(char)arg1 ;
-(char)isRescoring;
-(void)setIsRescoring:(char)arg1 ;
-(void)setSamplesAtFire:(unsigned long long)arg1 ;
-(void)setStartSampleCount:(unsigned long long)arg1 ;
@end

