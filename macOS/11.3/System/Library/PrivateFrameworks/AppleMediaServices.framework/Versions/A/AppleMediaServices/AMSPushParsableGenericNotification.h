/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/Versions/A/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AMSPushParsable.h>

@class NSString;

@interface AMSPushParsableGenericNotification : NSObject <AMSPushParsable>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)handleNotificationPayload:(id)arg1 config:(id)arg2 bag:(id)arg3 ;
+(char)_shouldPresentAlertForPayload:(id)arg1 ;
+(id)_generateDialogRequestFromPayload:(id)arg1 config:(id)arg2 ;
+(id)_generateNotificationFromPayload:(id)arg1 config:(id)arg2 ;
@end

