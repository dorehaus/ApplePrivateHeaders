/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/Versions/A/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString;

@interface NviContext : NSObject {

	char _requestHistoricalAudio;
	char _shouldLogRawSensorData;
	NSDictionary* _voiceTriggerInfo;
	unsigned long long _reqStartAudioSampleId;
	unsigned long long _reqStartMachAbsTime;
	NSString* _rootLogDir;

}

@property (nonatomic,retain) NSDictionary * voiceTriggerInfo;                       //@synthesize voiceTriggerInfo=_voiceTriggerInfo - In the implementation block
@property (assign,nonatomic) char requestHistoricalAudio;                           //@synthesize requestHistoricalAudio=_requestHistoricalAudio - In the implementation block
@property (assign,nonatomic) unsigned long long reqStartAudioSampleId;              //@synthesize reqStartAudioSampleId=_reqStartAudioSampleId - In the implementation block
@property (assign,nonatomic) unsigned long long reqStartMachAbsTime;                //@synthesize reqStartMachAbsTime=_reqStartMachAbsTime - In the implementation block
@property (assign,nonatomic) char shouldLogRawSensorData;                           //@synthesize shouldLogRawSensorData=_shouldLogRawSensorData - In the implementation block
@property (nonatomic,retain) NSString * rootLogDir;                                 //@synthesize rootLogDir=_rootLogDir - In the implementation block
-(id)description;
-(NSDictionary *)voiceTriggerInfo;
-(char)requestHistoricalAudio;
-(unsigned long long)reqStartAudioSampleId;
-(void)setVoiceTriggerInfo:(NSDictionary *)arg1 ;
-(void)setRequestHistoricalAudio:(char)arg1 ;
-(void)setReqStartAudioSampleId:(unsigned long long)arg1 ;
-(unsigned long long)reqStartMachAbsTime;
-(void)setReqStartMachAbsTime:(unsigned long long)arg1 ;
-(char)shouldLogRawSensorData;
-(void)setShouldLogRawSensorData:(char)arg1 ;
-(NSString *)rootLogDir;
-(void)setRootLogDir:(NSString *)arg1 ;
@end

