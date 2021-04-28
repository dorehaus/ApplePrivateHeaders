/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UniversalAccess.framework/Versions/A/UniversalAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UniversalAccess/UniversalAccess-Structs.h>
#import <AppKit/NSViewController.h>

@class NSImageView, NSImage, NSArray, UAOnboardingAccessibilitySettingsManager;

@interface UAOnboardingLocalizedImageViewController : NSViewController {

	NSImageView* _imageView;
	NSImage* _image;
	NSArray* _textFields;
	UAOnboardingAccessibilitySettingsManager* __settingsManager;
	CGSize _size;

}

@property (nonatomic,retain) UAOnboardingAccessibilitySettingsManager * _settingsManager;              //@synthesize _settingsManager=__settingsManager - In the implementation block
@property (nonatomic,retain) NSImageView * imageView;                                                  //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) NSImage * image;                                                          //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) CGSize size;                                                              //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) NSArray * textFields;                                                     //@synthesize textFields=_textFields - In the implementation block
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(void)setImage:(NSImage *)arg1 ;
-(NSImage *)image;
-(id)initWithImage:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear;
-(NSImageView *)imageView;
-(void)setImageView:(NSImageView *)arg1 ;
-(NSArray *)textFields;
-(void)setTextFields:(NSArray *)arg1 ;
-(UAOnboardingAccessibilitySettingsManager *)_settingsManager;
-(id)initWithImage:(id)arg1 nibName:(id)arg2 bundle:(id)arg3 ;
-(void)_constrainViews;
-(id)initWithImage:(id)arg1 size:(CGSize)arg2 nibName:(id)arg3 bundle:(id)arg4 ;
-(void)set_settingsManager:(UAOnboardingAccessibilitySettingsManager *)arg1 ;
-(id)initWithImage:(id)arg1 size:(CGSize)arg2 ;
@end

