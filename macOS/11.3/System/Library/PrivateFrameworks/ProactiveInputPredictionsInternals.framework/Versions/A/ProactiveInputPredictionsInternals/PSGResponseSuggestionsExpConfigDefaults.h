/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ProactiveInputPredictionsInternals.framework/Versions/A/ProactiveInputPredictionsInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PSGResponseSuggestionsExpConfigProtocol.h>

@class NSString;

@interface PSGResponseSuggestionsExpConfigDefaults : NSObject <PSGResponseSuggestionsExpConfigProtocol> {

	char _isMLModelEnabled;
	NSString* _treatmentName;
	NSString* _experimentId;
	NSString* _treatmentId;
	NSString* _inferenceModelFilePath;
	NSString* _inferenceModelConfigPath;
	NSString* _espressoBinFilePath;

}

@property (nonatomic,readonly) NSString * treatmentName;                         //@synthesize treatmentName=_treatmentName - In the implementation block
@property (nonatomic,readonly) NSString * experimentId;                          //@synthesize experimentId=_experimentId - In the implementation block
@property (nonatomic,readonly) NSString * treatmentId;                           //@synthesize treatmentId=_treatmentId - In the implementation block
@property (nonatomic,readonly) char isMLModelEnabled;                            //@synthesize isMLModelEnabled=_isMLModelEnabled - In the implementation block
@property (nonatomic,readonly) NSString * inferenceModelFilePath;                //@synthesize inferenceModelFilePath=_inferenceModelFilePath - In the implementation block
@property (nonatomic,readonly) NSString * inferenceModelConfigPath;              //@synthesize inferenceModelConfigPath=_inferenceModelConfigPath - In the implementation block
@property (nonatomic,readonly) NSString * espressoBinFilePath;                   //@synthesize espressoBinFilePath=_espressoBinFilePath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isEqual:(id)arg1 ;
-(id)init;
-(NSString *)experimentId;
-(NSString *)treatmentId;
-(NSString *)espressoBinFilePath;
-(NSString *)inferenceModelFilePath;
-(NSString *)treatmentName;
-(NSString *)inferenceModelConfigPath;
-(char)isMLModelEnabled;
-(char)isEqualToConfig:(id)arg1 ;
@end

