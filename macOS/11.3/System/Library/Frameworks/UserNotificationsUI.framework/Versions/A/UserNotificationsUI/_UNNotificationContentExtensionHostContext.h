/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/UserNotificationsUI.framework/Versions/A/UserNotificationsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsUI/UserNotificationsUI-Structs.h>
#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/_UNNotificationExtensionHostInterface.h>
#import <libobjc.A.dylib/_UNNotificationExtensionVendorInterface.h>

@protocol _UNNotificationContentExtensionHostContextDelegate, OS_dispatch_queue;
@class NSColor, NSObject;

@interface _UNNotificationContentExtensionHostContext : NSExtensionContext <_UNNotificationExtensionHostInterface, _UNNotificationExtensionVendorInterface> {

	char _wantsToBecomeFirstResponder;
	char _wantsToReceiveActionResponses;
	char _delegateQueueSuspended;
	unsigned long long _playPauseMediaButtonType;
	NSColor* _playPauseMediaButtonColor;
	id<_UNNotificationContentExtensionHostContextDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	CGRect _playPauseMediaButtonFrame;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                                          //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (assign,getter=isDelegateQueueSuspended,nonatomic) char delegateQueueSuspended;                         //@synthesize delegateQueueSuspended=_delegateQueueSuspended - In the implementation block
@property (assign,nonatomic) char wantsToBecomeFirstResponder;                                                    //@synthesize wantsToBecomeFirstResponder=_wantsToBecomeFirstResponder - In the implementation block
@property (assign,nonatomic) char wantsToReceiveActionResponses;                                                  //@synthesize wantsToReceiveActionResponses=_wantsToReceiveActionResponses - In the implementation block
@property (assign,nonatomic) unsigned long long playPauseMediaButtonType;                                         //@synthesize playPauseMediaButtonType=_playPauseMediaButtonType - In the implementation block
@property (assign,nonatomic) CGRect playPauseMediaButtonFrame;                                                    //@synthesize playPauseMediaButtonFrame=_playPauseMediaButtonFrame - In the implementation block
@property (nonatomic,retain) NSColor * playPauseMediaButtonColor;                                                 //@synthesize playPauseMediaButtonColor=_playPauseMediaButtonColor - In the implementation block
@property (assign,nonatomic,__weak) id<_UNNotificationContentExtensionHostContextDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)dealloc;
-(id<_UNNotificationContentExtensionHostContextDelegate>)delegate;
-(void)setDelegate:(id<_UNNotificationContentExtensionHostContextDelegate>)arg1 ;
-(id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3 ;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)_extensionWantsToReceiveActionResponses:(char)arg1 ;
-(void)_extensionWantsToBecomeFirstResponder:(char)arg1 ;
-(void)_extensionDidCompleteNotificationResponse:(id)arg1 withOption:(unsigned long long)arg2 ;
-(void)_extensionSetPlayPauseMediaButtonType:(unsigned long long)arg1 ;
-(void)_extensionSetPlayPauseMediaButtonFrame:(CGRect)arg1 ;
-(void)_extensionSetPlayPauseMediaButtonColor:(id)arg1 ;
-(void)_extensionMediaPlayingStarted;
-(void)_extensionMediaPlayingPaused;
-(void)_extensionDidUpdatePlayPauseMediaButton;
-(void)_extensionRequestsDefaultAction;
-(void)_extensionRequestsDismiss;
-(void)_extensionDidUpdateTitle:(id)arg1 ;
-(void)_extensionDidUpdateNotificationActions:(id)arg1 ;
-(void)_extensionUpdatedPreferredContentSize:(CGSize)arg1 ;
-(void)_extensionUpdatedContentSize:(CGSize)arg1 sendRight:(id)arg2 ;
-(void)_hostDidReceiveNotification:(id)arg1 ;
-(void)_hostDidReceiveNotificationResponse:(id)arg1 ;
-(void)_hostWantsMediaToPlay;
-(void)_hostWantsMediaToPause;
-(void)_hostWantsToUpdateMediaPlayPauseButton;
-(void)_hostWantsToPreserveInputViews;
-(void)_hostWantsToRestoreInputViews;
-(void)_resumeDelegateQueueIfNecessary;
-(void)setWantsToReceiveActionResponses:(char)arg1 ;
-(void)setWantsToBecomeFirstResponder:(char)arg1 ;
-(void)setPlayPauseMediaButtonType:(unsigned long long)arg1 ;
-(void)setPlayPauseMediaButtonFrame:(CGRect)arg1 ;
-(void)setPlayPauseMediaButtonColor:(NSColor *)arg1 ;
-(void)didReceiveNotification:(id)arg1 ;
-(void)didReceiveNotificationResponse:(id)arg1 ;
-(void)mediaPause;
-(void)mediaPlay;
-(void)updateMediaPlayPauseButton;
-(void)preserveInputViews;
-(void)restoreInputViews;
-(char)wantsToBecomeFirstResponder;
-(char)wantsToReceiveActionResponses;
-(unsigned long long)playPauseMediaButtonType;
-(CGRect)playPauseMediaButtonFrame;
-(NSColor *)playPauseMediaButtonColor;
-(char)isDelegateQueueSuspended;
-(void)setDelegateQueueSuspended:(char)arg1 ;
@end
