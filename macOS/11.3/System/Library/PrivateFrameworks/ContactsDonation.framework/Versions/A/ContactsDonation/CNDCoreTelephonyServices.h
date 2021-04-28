/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsDonation.framework/Versions/A/ContactsDonation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsDonation/ContactsDonation-Structs.h>
#import <libobjc.A.dylib/CNDCoreTelephonyServices.h>

@protocol CNDCoreTelephonyServices <NSObject>
@required
-(CTServerConnectionRef)_CTServerConnectionCreateOnTargetQueue:(const CFAllocatorRef)arg1 :(const CFStringRef)arg2 :(id)arg3 :(/*^block*/id)arg4;
-(void)_CTServerConnectionRegisterBlockForNotification:(CTServerConnectionRef)arg1 :(const CFStringRef)arg2 :(/*^block*/id)arg3;
-(void)_CTServerConnectionUnregisterForNotification:(CTServerConnectionRef)arg1 :(const CFStringRef)arg2;

@end


@class NSString;

@interface CNDCoreTelephonyServices : NSObject <CNDCoreTelephonyServices>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CTServerConnectionRef)_CTServerConnectionCreateOnTargetQueue:(CFAllocatorRef)arg1 :(CFStringRef)arg2 :(id)arg3 :(/*^block*/id)arg4 ;
-(void)_CTServerConnectionRegisterBlockForNotification:(CTServerConnectionRef)arg1 :(CFStringRef)arg2 :(/*^block*/id)arg3 ;
-(void)_CTServerConnectionUnregisterForNotification:(CTServerConnectionRef)arg1 :(CFStringRef)arg2 ;
@end
