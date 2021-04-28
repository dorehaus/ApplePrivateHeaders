/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/Versions/A/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/BSCompoundAssertionState.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@class NSMutableOrderedSet, NSString, NSSet, NSOrderedSet;

@interface BSCompoundAssertion : NSObject <BSCompoundAssertionState, BSInvalidatable> {

	os_unfair_lock_s _syncLock;
	char _syncLock_invalid;
	/*^block*/id _syncLock_block;
	os_unfair_lock_s _dataLock;
	NSMutableOrderedSet* _dataLock_acquisitions;
	NSString* _dataLock_identifierPrefix;

}

@property (readonly) NSSet * reasons; 
@property (readonly) NSOrderedSet * orderedReasons; 
@property (getter=isActive,readonly) char active; 
@property (readonly) NSSet * context; 
@property (readonly) NSOrderedSet * orderedContext; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
+(id)assertionWithIdentifier:(id)arg1 ;
+(id)assertionWithIdentifier:(id)arg1 stateDidChangeHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(NSString *)description;
-(id)init;
-(void)invalidate;
-(char)isActive;
-(NSSet *)context;
-(NSSet *)reasons;
-(NSOrderedSet *)orderedContext;
-(NSOrderedSet *)orderedReasons;
-(id)acquireForReason:(id)arg1 withContext:(id)arg2 ;
-(id)acquireForReason:(id)arg1 ;
@end

