/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/Versions/A/SpeakerRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, SSRVoiceProfile, NSURL, NSDictionary, CSAsset, SSRLoggingAggregator;

@interface SSRVoiceProfileRetrainingContext : NSObject {

	char _filterToVoiceTriggerUtterances;
	char _forceRetrain;
	float _combinationWeight;
	NSString* _sessionId;
	NSArray* _compareVoiceProfileArray;
	SSRVoiceProfile* _voiceProfile;
	unsigned long long _spIdType;
	NSURL* _resourceFilePath;
	NSString* _configVersion;
	unsigned long long _maxAllowedSpeakerVectors;
	NSDictionary* _modelsContext;
	CSAsset* _asset;
	SSRLoggingAggregator* _logAggregator;

}

@property (nonatomic,retain) NSArray * compareVoiceProfileArray;                         //@synthesize compareVoiceProfileArray=_compareVoiceProfileArray - In the implementation block
@property (nonatomic,retain) SSRVoiceProfile * voiceProfile;                             //@synthesize voiceProfile=_voiceProfile - In the implementation block
@property (nonatomic,readonly) unsigned long long spIdType;                              //@synthesize spIdType=_spIdType - In the implementation block
@property (nonatomic,readonly) NSURL * resourceFilePath;                                 //@synthesize resourceFilePath=_resourceFilePath - In the implementation block
@property (nonatomic,readonly) NSString * configVersion;                                 //@synthesize configVersion=_configVersion - In the implementation block
@property (nonatomic,readonly) char filterToVoiceTriggerUtterances;                      //@synthesize filterToVoiceTriggerUtterances=_filterToVoiceTriggerUtterances - In the implementation block
@property (nonatomic,readonly) char forceRetrain;                                        //@synthesize forceRetrain=_forceRetrain - In the implementation block
@property (nonatomic,readonly) unsigned long long maxAllowedSpeakerVectors;              //@synthesize maxAllowedSpeakerVectors=_maxAllowedSpeakerVectors - In the implementation block
@property (nonatomic,readonly) NSDictionary * modelsContext;                             //@synthesize modelsContext=_modelsContext - In the implementation block
@property (nonatomic,readonly) float combinationWeight;                                  //@synthesize combinationWeight=_combinationWeight - In the implementation block
@property (nonatomic,retain) CSAsset * asset;                                            //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) SSRLoggingAggregator * logAggregator;                       //@synthesize logAggregator=_logAggregator - In the implementation block
@property (nonatomic,readonly) NSString * sessionId;                                     //@synthesize sessionId=_sessionId - In the implementation block
-(id)description;
-(NSString *)sessionId;
-(CSAsset *)asset;
-(void)setAsset:(CSAsset *)arg1 ;
-(NSString *)configVersion;
-(id)initWithVoiceRetrainingContext:(id)arg1 error:(id*)arg2 ;
-(NSDictionary *)modelsContext;
-(NSURL *)resourceFilePath;
-(SSRLoggingAggregator *)logAggregator;
-(float)combinationWeight;
-(char)forceRetrain;
-(SSRVoiceProfile *)voiceProfile;
-(unsigned long long)maxAllowedSpeakerVectors;
-(unsigned long long)spIdType;
-(void)setVoiceProfile:(SSRVoiceProfile *)arg1 ;
-(NSArray *)compareVoiceProfileArray;
-(void)setCompareVoiceProfileArray:(NSArray *)arg1 ;
-(char)filterToVoiceTriggerUtterances;
-(void)setLogAggregator:(SSRLoggingAggregator *)arg1 ;
@end

