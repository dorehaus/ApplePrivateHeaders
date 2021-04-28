/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Virtualization.framework/Versions/A/Virtualization
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VZVirtualMachine;

@interface _VZPointingDevice : NSObject {

	VZVirtualMachine* _virtualMachine;
	unsigned long long _pointingDeviceIndex;
	long long _type;

}

@property (readonly) long long type;              //@synthesize type=_type - In the implementation block
+(char)requiresGrabbingMouseInput;
-(long long)type;
-(id)initWithType:(long long)arg1 virtualMachine:(id)arg2 pointingDeviceIndex:(unsigned long long)arg3 ;
-(void)sendScrollWheelEvents:(id)arg1 ;
@end
