/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/Versions/A/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AMSPushHandlerDelegate;
@class NSString, NSSet;

@interface AMSPushConfiguration : NSObject {

	NSString* _userNotificationExtensionId;
	NSSet* _enabledActionTypes;
	id<AMSPushHandlerDelegate> _delegate;

}

@property (__weak) id<AMSPushHandlerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSString * userNotificationExtensionId;              //@synthesize userNotificationExtensionId=_userNotificationExtensionId - In the implementation block
@property (retain) NSSet * enabledActionTypes;                          //@synthesize enabledActionTypes=_enabledActionTypes - In the implementation block
-(id<AMSPushHandlerDelegate>)delegate;
-(void)setDelegate:(id<AMSPushHandlerDelegate>)arg1 ;
-(id)initWithEnabledActionTypes:(id)arg1 ;
-(NSString *)userNotificationExtensionId;
-(void)setUserNotificationExtensionId:(NSString *)arg1 ;
-(NSSet *)enabledActionTypes;
-(void)setEnabledActionTypes:(NSSet *)arg1 ;
@end
