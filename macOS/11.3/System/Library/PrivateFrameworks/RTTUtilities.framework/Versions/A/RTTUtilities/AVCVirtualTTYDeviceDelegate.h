/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RTTUtilities.framework/Versions/A/RTTUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVCVirtualTTYDeviceDelegate <NSObject>
@required
-(void)device:(id)arg1 didStart:(char)arg2 error:(id)arg3;
-(void)deviceDidStop:(id)arg1;
-(void)device:(id)arg1 didReceiveCharacter:(unsigned short)arg2;
-(void)device:(id)arg1 didReceiveText:(id)arg2;

@end
