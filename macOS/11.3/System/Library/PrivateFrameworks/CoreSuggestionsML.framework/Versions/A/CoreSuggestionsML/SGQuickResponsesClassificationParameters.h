/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/Versions/A/CoreSuggestionsML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SGQuickResponsesClassificationParameters : NSObject {

	double _positiveSamplingRate;
	double _dynamicLabelSamplingRate;
	double _negativeSamplingRate;
	unsigned long long _maxReplyLength;
	unsigned long long _maxPromptLength;
	double _maxPromptWindowSeconds;
	NSString* _promptJoiningString;

}

@property (nonatomic,readonly) double positiveSamplingRate;                     //@synthesize positiveSamplingRate=_positiveSamplingRate - In the implementation block
@property (nonatomic,readonly) double dynamicLabelSamplingRate;                 //@synthesize dynamicLabelSamplingRate=_dynamicLabelSamplingRate - In the implementation block
@property (nonatomic,readonly) double negativeSamplingRate;                     //@synthesize negativeSamplingRate=_negativeSamplingRate - In the implementation block
@property (nonatomic,readonly) unsigned long long maxReplyLength;               //@synthesize maxReplyLength=_maxReplyLength - In the implementation block
@property (nonatomic,readonly) unsigned long long maxPromptLength;              //@synthesize maxPromptLength=_maxPromptLength - In the implementation block
@property (nonatomic,readonly) double maxPromptWindowSeconds;                   //@synthesize maxPromptWindowSeconds=_maxPromptWindowSeconds - In the implementation block
@property (nonatomic,readonly) NSString * promptJoiningString;                  //@synthesize promptJoiningString=_promptJoiningString - In the implementation block
-(unsigned long long)maxReplyLength;
-(unsigned long long)maxPromptLength;
-(NSString *)promptJoiningString;
-(double)maxPromptWindowSeconds;
-(id)initWithDictionary:(id)arg1 language:(id)arg2 ;
-(double)positiveSamplingRate;
-(double)dynamicLabelSamplingRate;
-(double)negativeSamplingRate;
@end

