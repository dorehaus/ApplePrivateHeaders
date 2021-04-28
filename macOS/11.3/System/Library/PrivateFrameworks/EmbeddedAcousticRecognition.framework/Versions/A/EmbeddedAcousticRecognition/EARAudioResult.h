/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/Versions/A/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface EARAudioResult : NSObject {

	NSData* _audioResultMat;
	unsigned long long _audioResultsNumVectors;
	unsigned long long _audioResultsVectorSize;

}

@property (nonatomic,retain) NSData * audioResultMat;                                //@synthesize audioResultMat=_audioResultMat - In the implementation block
@property (assign,nonatomic) unsigned long long audioResultsNumVectors;              //@synthesize audioResultsNumVectors=_audioResultsNumVectors - In the implementation block
@property (assign,nonatomic) unsigned long long audioResultsVectorSize;              //@synthesize audioResultsVectorSize=_audioResultsVectorSize - In the implementation block
-(id)initWithAudioResultMat:(id)arg1 vectorSize:(unsigned long long)arg2 numVectors:(unsigned long long)arg3 ;
-(NSData *)audioResultMat;
-(void)setAudioResultMat:(NSData *)arg1 ;
-(unsigned long long)audioResultsNumVectors;
-(void)setAudioResultsNumVectors:(unsigned long long)arg1 ;
-(unsigned long long)audioResultsVectorSize;
-(void)setAudioResultsVectorSize:(unsigned long long)arg1 ;
@end
