/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@protocol AVTouchBarRecordingControlsControllingInternal, AVTouchBarAudioCaptureDeviceSelectionButtonViewControllerDelegate;
@class NSMutableArray, NSString, NSImage;

@interface AVTouchBarAudioCaptureDeviceSelectionButtonViewController : NSViewController {

	NSMutableArray* _bindings;
	id<AVTouchBarRecordingControlsControllingInternal> _captureController;
	id<AVTouchBarAudioCaptureDeviceSelectionButtonViewControllerDelegate> _delegate;

}

@property (readonly) char showsImage; 
@property (readonly) double width; 
@property (readonly) NSString * title; 
@property (readonly) NSImage * image; 
@property (getter=isEnabled,readonly) char enabled; 
@property (readonly) char hasChevron; 
@property (retain) id<AVTouchBarRecordingControlsControllingInternal> captureController;                                         //@synthesize captureController=_captureController - In the implementation block
@property (assign,nonatomic,__weak) id<AVTouchBarAudioCaptureDeviceSelectionButtonViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)keyPathsForValuesAffectingTitle;
+(id)keyPathsForValuesAffectingImage;
+(id)keyPathsForValuesAffectingShowsImage;
+(id)keyPathsForValuesAffectingWidth;
+(id)keyPathsForValuesAffectingEnabled;
+(id)keyPathsForValuesAffectingHasChevron;
-(void)dealloc;
-(id)init;
-(id<AVTouchBarAudioCaptureDeviceSelectionButtonViewControllerDelegate>)delegate;
-(void)setDelegate:(id<AVTouchBarAudioCaptureDeviceSelectionButtonViewControllerDelegate>)arg1 ;
-(char)isEnabled;
-(double)width;
-(NSString *)title;
-(NSImage *)image;
-(void)loadView;
-(void)actionButton:(id)arg1 ;
-(id<AVTouchBarRecordingControlsControllingInternal>)captureController;
-(void)setCaptureController:(id<AVTouchBarRecordingControlsControllingInternal>)arg1 ;
-(void)_bindObject:(id)arg1 withBinding:(id)arg2 toObject:(id)arg3 withKeyPath:(id)arg4 options:(id)arg5 ;
-(void)_unbindAllObjects;
-(char)showsImage;
-(char)hasChevron;
@end
