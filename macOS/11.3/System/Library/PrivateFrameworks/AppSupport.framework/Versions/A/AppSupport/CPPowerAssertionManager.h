/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/Versions/A/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CPPowerAssertionManagerDelegate;
#import <AppSupport/AppSupport-Structs.h>
@class NSString, NSCountedSet, NSMutableDictionary, NSMutableSet;

@interface CPPowerAssertionManager : NSObject {

	NSString* _uuid;
	NSCountedSet* _contexts;
	NSMutableDictionary* _groupIdentifierToContexts;
	CFDictionaryRef _contextToGroupIdentifier;
	NSMutableSet* _heldAsideGroupIdentifiers;
	NSCountedSet* _heldAsideContexts;
	id<CPPowerAssertionManagerDelegate> _delegate;

}

@property (readonly) NSString * uuid;                                         //@synthesize uuid=_uuid - In the implementation block
@property (assign) id<CPPowerAssertionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)description;
-(id)init;
-(id<CPPowerAssertionManagerDelegate>)delegate;
-(void)setDelegate:(id<CPPowerAssertionManagerDelegate>)arg1 ;
-(NSString *)uuid;
-(void)retainPowerAssertionWithContext:(id)arg1 withGroupIdentifier:(id)arg2 ;
-(void)_retainAssertions;
-(void)_releaseAssertions;
-(unsigned long long)retainCountForContext:(id)arg1 ;
-(void)setUUIDPrefix:(id)arg1 ;
-(void)retainPowerAssertionWithContext:(id)arg1 ;
-(void)releasePowerAssertionWithContext:(id)arg1 ;
-(void)temporarilyReleasePowerAssertionsForGroupIdentifier:(id)arg1 ;
-(void)reretainPowerAssertionsForGroupIdentifier:(id)arg1 ;
@end
