/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/Versions/A/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface WBSCloudKitOperationRetryManager : NSObject {

	NSDate* _dateRetryWasFirstRequested;
	unsigned long long _numberOfRetries;
	double _timeout;

}

@property (assign,nonatomic) double timeout;              //@synthesize timeout=_timeout - In the implementation block
-(id)init;
-(double)timeout;
-(void)setTimeout:(double)arg1 ;
-(long long)scheduleRetryIfNeededForError:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
@end

