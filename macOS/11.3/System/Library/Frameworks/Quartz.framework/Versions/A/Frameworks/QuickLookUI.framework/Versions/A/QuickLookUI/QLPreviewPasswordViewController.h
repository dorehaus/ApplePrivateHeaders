/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLookUI/QuickLookUI-Structs.h>
#import <AppKit/NSViewController.h>
#import <libobjc.A.dylib/QLDisplayable.h>

@class QLPreviewDocument, NSView, NSTextField, NSImageView, CALayer, QLDisplayBundleViewController, NSResponder, NSDictionary, NSString;

@interface QLPreviewPasswordViewController : NSViewController <QLDisplayable> {

	char _hasEnteredWrongPassword;
	char _isHidden;
	QLPreviewDocument* _document;
	NSView* _containerView;
	NSTextField* _passwordField;
	NSTextField* _descriptionField;
	NSImageView* _imageView;
	NSImageView* _smallAlternateImageView;

}

@property (assign) char isHidden;                                                          //@synthesize isHidden=_isHidden - In the implementation block
@property (__weak) NSView * containerView;                                                 //@synthesize containerView=_containerView - In the implementation block
@property (__weak) NSTextField * passwordField;                                            //@synthesize passwordField=_passwordField - In the implementation block
@property (__weak) NSTextField * descriptionField;                                         //@synthesize descriptionField=_descriptionField - In the implementation block
@property (__weak) NSImageView * imageView;                                                //@synthesize imageView=_imageView - In the implementation block
@property (__weak) NSImageView * smallAlternateImageView;                                  //@synthesize smallAlternateImageView=_smallAlternateImageView - In the implementation block
@property (__weak) QLPreviewDocument * document;                                           //@synthesize document=_document - In the implementation block
@property (assign) char hasEnteredWrongPassword; 
@property (readonly) NSView * quickLookView; 
@property (readonly) CALayer * quickLookLayer; 
@property (readonly) QLDisplayBundleViewController * quickLookViewController; 
@property (assign) CGRect quickLookFrame; 
@property (readonly) NSResponder * responder; 
@property (readonly) CGRect borderFrame; 
@property (readonly) NSDictionary * sizingConstraints; 
@property (assign) unsigned long long currentPage; 
@property (readonly) id accessibilityFocusedUIElement; 
@property (assign) int inputFocusType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)inputFocusType;
-(void)giveInputFocus;
-(char)hasContentAtLocation:(CGPoint)arg1 ;
-(void)setHasEnteredWrongPassword:(char)arg1 ;
-(NSImageView *)smallAlternateImageView;
-(void)_updateWithSizeVariantForFrame:(CGRect)arg1 ;
-(char)hasEnteredWrongPassword;
-(void)setSmallAlternateImageView:(NSImageView *)arg1 ;
-(char)isHidden;
-(QLPreviewDocument *)document;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(NSView *)containerView;
-(void)setContainerView:(NSView *)arg1 ;
-(void)setDocument:(QLPreviewDocument *)arg1 ;
-(NSImageView *)imageView;
-(void)setImageView:(NSImageView *)arg1 ;
-(NSTextField *)passwordField;
-(void)setIsHidden:(char)arg1 ;
-(void)setPasswordField:(NSTextField *)arg1 ;
-(NSTextField *)descriptionField;
-(void)setDescriptionField:(NSTextField *)arg1 ;
-(void)didShow;
-(void)willHide;
-(void)validatePassword:(id)arg1 ;
-(QLDisplayBundleViewController *)quickLookViewController;
-(NSView *)quickLookView;
-(void)setQuickLookFrame:(CGRect)arg1 ;
-(CGRect)quickLookFrame;
-(NSDictionary *)sizingConstraints;
-(CALayer *)quickLookLayer;
@end
