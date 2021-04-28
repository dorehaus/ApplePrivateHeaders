/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/Versions/A/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReminderKit/REMXPCDaemonControllerPerformerResolver.h>

@class REMStoreContainerToken;

@interface REMXPCDaemonControllerPerformerResolver_store : REMXPCDaemonControllerPerformerResolver {

	REMStoreContainerToken* _storeContainerToken;

}

@property (nonatomic,readonly) REMStoreContainerToken * storeContainerToken;              //@synthesize storeContainerToken=_storeContainerToken - In the implementation block
-(id)name;
-(id)initWithStoreContainerToken:(id)arg1 ;
-(REMStoreContainerToken *)storeContainerToken;
-(void)resolveWithDaemon:(id)arg1 reason:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

