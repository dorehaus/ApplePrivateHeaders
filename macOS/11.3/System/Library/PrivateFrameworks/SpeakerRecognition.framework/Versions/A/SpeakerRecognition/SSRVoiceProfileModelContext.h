/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/Versions/A/SpeakerRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSDictionary;

@interface SSRVoiceProfileModelContext : NSObject {

	NSURL* _configFilePath;
	NSURL* _voiceProfileModelFilePath;
	NSDictionary* _compareModelFilePaths;

}

@property (nonatomic,readonly) NSURL * configFilePath;                            //@synthesize configFilePath=_configFilePath - In the implementation block
@property (nonatomic,readonly) NSURL * voiceProfileModelFilePath;                 //@synthesize voiceProfileModelFilePath=_voiceProfileModelFilePath - In the implementation block
@property (nonatomic,readonly) NSDictionary * compareModelFilePaths;              //@synthesize compareModelFilePaths=_compareModelFilePaths - In the implementation block
-(NSURL *)configFilePath;
-(NSURL *)voiceProfileModelFilePath;
-(NSDictionary *)compareModelFilePaths;
-(id)initWithConfigFilePath:(id)arg1 withModelPath:(id)arg2 withCompareModelFilePaths:(id)arg3 ;
@end

