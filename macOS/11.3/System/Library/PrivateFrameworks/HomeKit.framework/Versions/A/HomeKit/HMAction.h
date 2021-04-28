/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKit.framework/Versions/A/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/HMObjectMerge.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HMFUnfairLock, NSUUID, _HMContext, HMActionSet, NSString;

@interface HMAction : NSObject <HMObjectMerge, NSSecureCoding, NSCopying> {

	HMFUnfairLock* _lock;
	NSUUID* _uniqueIdentifier;
	NSUUID* _uuid;
	_HMContext* _context;
	HMActionSet* _actionSet;

}

@property (nonatomic,retain) _HMContext * context;                          //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long type; 
@property (copy) NSUUID * uuid;                                             //@synthesize uuid=_uuid - In the implementation block
@property (__weak) HMActionSet * actionSet;                                 //@synthesize actionSet=_actionSet - In the implementation block
@property (getter=isValid,readonly) char valid; 
@property (readonly) char requiresDeviceUnlock; 
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier;              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)_actionWithInfo:(id)arg1 home:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(char)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)uuid;
-(unsigned long long)type;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(_HMContext *)context;
-(void)setContext:(_HMContext *)arg1 ;
-(id)initWithUUID:(id)arg1 ;
-(char)_handleUpdates:(id)arg1 ;
-(void)_unconfigure;
-(id)_serializeForAdd;
-(char)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)_unconfigureContext;
-(char)requiresDeviceUnlock;
-(id)encodeAsProtoBuf;
-(HMActionSet *)actionSet;
-(void)__configureWithContext:(id)arg1 actionSet:(id)arg2 ;
-(void)setActionSet:(HMActionSet *)arg1 ;
@end

