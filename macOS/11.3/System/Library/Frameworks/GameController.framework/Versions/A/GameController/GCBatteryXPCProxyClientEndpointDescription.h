/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/GameController.framework/Versions/A/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_GCControllerComponentDescription.h>

@protocol NSObjectNSCopyingNSSecureCoding;
@class GCDeviceBattery, GCBatteryXPCProxyClientEndpoint, NSString;

@interface GCBatteryXPCProxyClientEndpointDescription : NSObject <_GCControllerComponentDescription> {

	GCDeviceBattery* _initialBattery;
	GCBatteryXPCProxyClientEndpoint* _materializedObject;
	id<NSObject><NSCopying><NSSecureCoding> _identifier;

}

@property (readonly) id<NSObject><NSCopying><NSSecureCoding> identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<NSObject><NSCopying><NSSecureCoding>)identifier;
-(id)initWithIdentifier:(id)arg1 initialBattery:(id)arg2 ;
-(id)materializeWithContext:(id)arg1 ;
@end

