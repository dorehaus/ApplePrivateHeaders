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

@class NSUUID, HMDAccountHandle, NSString;

@interface _HMDDeviceHandle : HMFObject <NSCopying, NSSecureCoding> {

	NSUUID* _identifier;

}

@property (readonly) NSUUID * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (getter=isLocal,readonly) char local; 
@property (getter=isGlobal,readonly) char global; 
@property (copy,readonly) HMDAccountHandle * accountHandle; 
@property (copy,readonly) NSString * destination; 
+(char)supportsSecureCoding;
+(char)isValidDestination:(id)arg1 ;
+(id)identifierNamespace;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(NSString *)destination;
-(char)isGlobal;
-(char)isLocal;
-(id)initWithDestination:(id)arg1 ;
-(HMDAccountHandle *)accountHandle;
@end

