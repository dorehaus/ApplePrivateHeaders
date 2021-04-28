/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/Versions/A/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRC/CoreRC-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol CoreRCDeviceDelegate;
@class CoreRCManager, NSUUID;

@interface CoreRCDevice : NSObject <NSCopying, NSSecureCoding> {

	id<CoreRCDeviceDelegate> _delegate;
	CoreRCManager* _manager;
	unsigned long long _owningClients;
	char _isLocalDevice;
	NSUUID* _uniqueID;
	NSUUID* _busUniqueID;

}

@property (nonatomic,copy) NSUUID * uniqueID;                     //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,readonly) NSUUID * busUniqueID;              //@synthesize busUniqueID=_busUniqueID - In the implementation block
@property (nonatomic,readonly) char isLocalDevice;                //@synthesize isLocalDevice=_isLocalDevice - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(id)manager;
-(void)setManager:(id)arg1 ;
-(NSUUID *)uniqueID;
-(void)setUniqueID:(NSUUID *)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(char)isLocalDevice;
-(id)bus;
-(char)setExtendedProperty:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(id)extendedPropertyForKey:(id)arg1 error:(id*)arg2 ;
-(void)receivedHIDEvent:(id)arg1 fromDevice:(id)arg2 ;
-(id)initWithBus:(id)arg1 local:(char)arg2 ;
-(id)mergeProperties;
-(NSUUID *)busUniqueID;
-(char)sendHIDEvent:(id)arg1 target:(id)arg2 error:(id*)arg3 ;
-(void)readyToSend;
-(void)mergePropertiesFromDevice:(id)arg1 ;
-(char)sendHIDEvent:(id)arg1 error:(id*)arg2 ;
-(char)sendCommand:(unsigned long long)arg1 target:(id)arg2 withDuration:(unsigned long long)arg3 error:(id*)arg4 ;
-(void)willAddToBus:(id)arg1 ;
-(void)didAddToBus:(id)arg1 ;
-(void)willRemoveFromBus:(id)arg1 ;
-(void)didRemoveFromBus:(id)arg1 ;
-(unsigned long long)removeOwningClient:(id)arg1 ;
-(unsigned long long)addOwningClient:(id)arg1 ;
@end

