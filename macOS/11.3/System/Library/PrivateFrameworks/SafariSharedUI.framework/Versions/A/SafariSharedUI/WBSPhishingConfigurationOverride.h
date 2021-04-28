/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/Versions/A/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSRegularExpression;

@interface WBSPhishingConfigurationOverride : NSObject {

	NSRegularExpression* _expression;
	unsigned long long _classification;

}

@property (nonatomic,readonly) NSRegularExpression * expression;               //@synthesize expression=_expression - In the implementation block
@property (nonatomic,readonly) unsigned long long classification;              //@synthesize classification=_classification - In the implementation block
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)classification;
-(NSRegularExpression *)expression;
-(id)initWithExpression:(id)arg1 classification:(id)arg2 error:(id*)arg3 ;
@end

