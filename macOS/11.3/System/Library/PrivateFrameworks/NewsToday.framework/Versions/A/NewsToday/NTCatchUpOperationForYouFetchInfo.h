/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/Versions/A/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsToday/NewsToday-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface NTCatchUpOperationForYouFetchInfo : NSObject <NSCopying> {

	char _attemptedCachedOnly;
	NSDictionary* _feedContextByFeedID;

}

@property (nonatomic,readonly) char attemptedCachedOnly;                             //@synthesize attemptedCachedOnly=_attemptedCachedOnly - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * feedContextByFeedID;              //@synthesize feedContextByFeedID=_feedContextByFeedID - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSDictionary *)feedContextByFeedID;
-(char)attemptedCachedOnly;
-(id)initWithAttemptedCachedOnly:(char)arg1 feedContextByFeedID:(id)arg2 ;
@end
