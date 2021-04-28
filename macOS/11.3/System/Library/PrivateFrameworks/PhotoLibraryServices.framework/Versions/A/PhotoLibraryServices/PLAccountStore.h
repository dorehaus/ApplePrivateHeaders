/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Accounts/ACAccountStore.h>

@protocol OS_dispatch_queue;
@class NSObject, ACAccount;

@interface PLAccountStore : ACAccountStore {

	NSObject*<OS_dispatch_queue> _queue;
	ACAccount* _cachedPrimaryAppleAccount;

}

@property (__weak,readonly) ACAccount * cachedPrimaryAppleAccount; 
+(id)pl_sharedAccountStore;
-(void)dealloc;
-(id)init;
-(void)accountDidChange:(id)arg1 ;
-(void)clearCachedProperties;
-(ACAccount *)cachedPrimaryAppleAccount;
@end

