/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@protocol AVFunctionBarMediaSelectionControlling, AVFunctionBarMediaSelectionViewControllerDelegate;
@class NSTextField, NSStackView;

@interface AVFunctionBarMediaSelectionViewController : NSViewController {

	NSTextField* _audioLabel;
	NSTextField* _legibleLabel;
	NSStackView* _audioOptionsContainerView;
	NSStackView* _legibleOptionsContainerView;
	id<AVFunctionBarMediaSelectionControlling> _playerController;
	id<AVFunctionBarMediaSelectionViewControllerDelegate> _delegate;

}

@property (retain) id<AVFunctionBarMediaSelectionControlling> playerController;                                  //@synthesize playerController=_playerController - In the implementation block
@property (assign,nonatomic,__weak) id<AVFunctionBarMediaSelectionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<AVFunctionBarMediaSelectionViewControllerDelegate>)delegate;
-(void)setDelegate:(id<AVFunctionBarMediaSelectionViewControllerDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)loadView;
-(void)setPlayerController:(id<AVFunctionBarMediaSelectionControlling>)arg1 ;
-(id<AVFunctionBarMediaSelectionControlling>)playerController;
-(void)actionAudioFunctionBarMediaSelectionOptionSelected:(id)arg1 ;
-(void)actionLegibleFunctionBarMediaSelectionOptionSelected:(id)arg1 ;
-(void)_updateFunctionBarMediaSelectionOptionInContainerView:(id)arg1 mediaSelectionOptions:(id)arg2 currentMediaSelectionOption:(id)arg3 selectionAction:(SEL)arg4 ;
-(void)_updateButtonStatesForCurrentFunctionBarMediaSelectionOption:(id)arg1 containerView:(id)arg2 ;
@end

