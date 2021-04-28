/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IKPictureTakerInterface.h>

@class NSView, NSButton, NSSlider, NSTabView, NSBox;

@interface IKPictureTakerNibInterface : NSObject <IKPictureTakerInterface> {

	NSView* _layerSuperview;
	id _imageView;
	id _countdownView;
	NSButton* _chooseButton;
	NSButton* _setButton;
	NSButton* _cancelButton;
	NSSlider* _slider;
	NSButton* _smallerButton;
	NSButton* _largerButton;
	NSButton* _cameraButton;
	NSButton* _fxButton;
	NSTabView* _countdownTabView;
	NSView* _pictureTakerViewBox;
	NSBox* _verticalSeparator;
	id _delegate;

}
-(id)setButton;
-(id)cameraButton;
-(id)smallerButton;
-(id)largerButton;
-(id)fxButton;
-(id)layerSuperview;
-(void)setMode:(long long)arg1 options:(id)arg2 ;
-(id)countdownTabView;
-(id)pictureTakerViewBox;
-(void)setFxButtonsAreaInPanel:(id)arg1 collapsed:(char)arg2 ;
-(id)pictureTakerForRecentPicturesButton:(id)arg1 ;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(id)slider;
-(void)awakeFromNib;
-(id)cancelButton;
-(id)imageView;
-(id)countdownView;
-(id)chooseButton;
-(id)pictureTaker;
@end
