/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _KSDeviceStateMonitor : NSObject {

	char _isContentProtectionAvailable;

}

@property (assign,nonatomic) char isContentProtectionAvailable;              //@synthesize isContentProtectionAvailable=_isContentProtectionAvailable - In the implementation block
+(char)isRunningOnInternalBuild;
+(id)deviceStateMonitor;
-(void)dealloc;
-(id)init;
-(char)isDataAvailableForClassC;
-(char)isContentProtectionAvailable;
-(void)setIsContentProtectionAvailable:(char)arg1 ;
@end

