/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _HMDDeviceHandle, HMDAccountHandle, NSString, NSData, NSUUID;

@interface HMDDeviceHandle : HMFObject <NSCopying, NSSecureCoding> {

	_HMDDeviceHandle* _internal;

}

@property (copy,readonly) _HMDDeviceHandle * internal;                   //@synthesize internal=_internal - In the implementation block
@property (copy,readonly) HMDAccountHandle * accountHandle; 
@property (copy,readonly) NSString * destination; 
@property (copy,readonly) NSData * pushToken; 
@property (getter=isLocal,readonly) char local; 
@property (getter=isGlobal,readonly) char global; 
@property (copy,readonly) NSUUID * identifier; 
+(char)supportsSecureCoding;
+(id)deviceHandleForDestination:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(NSString *)destination;
-(char)isGlobal;
-(id)shortDescription;
-(_HMDDeviceHandle *)internal;
-(char)isLocal;
-(NSData *)pushToken;
-(id)initWithInternal:(id)arg1 ;
-(id)attributeDescriptions;
-(HMDAccountHandle *)accountHandle;
-(char)matchesPushToken:(id)arg1 ;
@end
