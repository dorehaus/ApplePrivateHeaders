/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/Versions/A/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString;

@interface WBSCredentialMatchCriteria : NSObject {

	unsigned long long _options;
	NSURL* _URL;
	NSString* _partialUsername;

}

@property (nonatomic,readonly) unsigned long long options;                   //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) NSURL * URL;                             //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy,readonly) NSString * partialUsername;              //@synthesize partialUsername=_partialUsername - In the implementation block
-(NSURL *)URL;
-(unsigned long long)options;
-(id)initWithURL:(id)arg1 options:(unsigned long long)arg2 partialUsername:(id)arg3 ;
-(NSString *)partialUsername;
@end

