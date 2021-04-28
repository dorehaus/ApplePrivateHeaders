/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DisplayTransportServices.framework/Versions/A/DisplayTransportServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DTSDeviceDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol DTSDisplayPortDeviceInfo;
@interface DTSDPDeviceDescription : NSObject <DTSDeviceDescription, NSSecureCoding> {

	unsigned _port;
	unsigned _framebufferIndex;
	unsigned long long _registryEntryID;
	id<DTSDisplayPortDeviceInfo> _info;

}

@property (nonatomic,readonly) unsigned long long registryEntryID;              //@synthesize registryEntryID=_registryEntryID - In the implementation block
@property (nonatomic,readonly) unsigned port;                                   //@synthesize port=_port - In the implementation block
@property (nonatomic,readonly) unsigned framebufferIndex;                       //@synthesize framebufferIndex=_framebufferIndex - In the implementation block
@property (nonatomic,readonly) id<DTSDisplayPortDeviceInfo> info;               //@synthesize info=_info - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)port;
-(id<DTSDisplayPortDeviceInfo>)info;
-(id)initWithDescription:(id)arg1 ;
-(unsigned long long)registryEntryID;
-(unsigned)framebufferIndex;
-(id)initWithRegistryEntryID:(unsigned long long)arg1 port:(unsigned)arg2 framebufferIndex:(unsigned)arg3 info:(id)arg4 ;
@end

