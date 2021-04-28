/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/Versions/A/BiometricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BiometricKit/BKDevice.h>

@interface BKDeviceTouchID : BKDevice
+(char)deviceAvailableWithError:(id*)arg1 ;
-(id)createEnrollOperationWithError:(id*)arg1 ;
-(id)createMatchOperationWithError:(id*)arg1 ;
-(id)createPresenceDetectOperationWithError:(id*)arg1 ;
-(id)createExtendEnrollTouchIDOperationWithError:(id*)arg1 ;
-(char)enableBackgroundFingerDetection:(char)arg1 error:(id*)arg2 ;
@end
