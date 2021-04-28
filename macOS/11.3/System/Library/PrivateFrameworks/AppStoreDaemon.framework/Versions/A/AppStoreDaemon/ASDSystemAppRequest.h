/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Versions/A/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/ASDPersistentRequest.h>

@class NSString, NSNumber;

@interface ASDSystemAppRequest : ASDPersistentRequest {

	char _userInitiated;
	NSString* _bundleID;
	NSNumber* _storeItemID;

}

@property (nonatomic,copy,readonly) NSString * bundleID;                             //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSNumber * storeItemID;                                   //@synthesize storeItemID=_storeItemID - In the implementation block
@property (assign,getter=isUserInitiated,nonatomic) char userInitiated;              //@synthesize userInitiated=_userInitiated - In the implementation block
-(id)init;
-(NSString *)bundleID;
-(id)initWithBundleID:(id)arg1 ;
-(char)isUserInitiated;
-(void)setUserInitiated:(char)arg1 ;
-(NSNumber *)storeItemID;
-(void)setStoreItemID:(NSNumber *)arg1 ;
@end

