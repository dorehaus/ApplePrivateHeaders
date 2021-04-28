/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SafariServices.framework/Versions/A/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ViewBridge/NSRemoteViewController.h>

@protocol SFSafariExtensionRemoteViewControllerDelegate;
@class NSPopover;

@interface SFSafariExtensionRemoteViewController : NSRemoteViewController {

	id<SFSafariExtensionRemoteViewControllerDelegate> _delegate;
	NSPopover* _popover;

}

@property (assign,nonatomic,__weak) id<SFSafariExtensionRemoteViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) NSPopover * popover;                                                     //@synthesize popover=_popover - In the implementation block
-(id<SFSafariExtensionRemoteViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SFSafariExtensionRemoteViewControllerDelegate>)arg1 ;
-(NSPopover *)popover;
-(void)setPopover:(NSPopover *)arg1 ;
-(id)serviceViewControllerInterface;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
@end

