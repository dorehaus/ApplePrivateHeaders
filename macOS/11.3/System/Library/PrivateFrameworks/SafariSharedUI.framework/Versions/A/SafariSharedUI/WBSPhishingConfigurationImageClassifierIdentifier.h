/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/Versions/A/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface WBSPhishingConfigurationImageClassifierIdentifier : NSObject {

	float _minimumConfidence;
	NSString* _domainName;

}

@property (nonatomic,copy,readonly) NSString * domainName;              //@synthesize domainName=_domainName - In the implementation block
@property (nonatomic,readonly) float minimumConfidence;                 //@synthesize minimumConfidence=_minimumConfidence - In the implementation block
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg1 error:(id*)arg2 ;
-(float)minimumConfidence;
-(NSString *)domainName;
-(id)initWithDomain:(id)arg1 minimumConfidence:(float)arg2 ;
@end

