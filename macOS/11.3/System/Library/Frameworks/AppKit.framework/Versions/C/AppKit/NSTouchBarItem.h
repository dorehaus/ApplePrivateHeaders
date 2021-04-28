/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <libobjc.A.dylib/TouchBarsAndItems.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSView, NSViewController;

@interface NSTouchBarItem : NSObject <TouchBarsAndItems, NSCoding> {

	NSString* _identifier;
	float _visibilityPriority;
	long long _visibilityCount;
	char _requiresTrueCenterLayout;

}

@property (readonly) CGSize preferredSizeForCustomizationPalette; 
@property (readonly) long long preferredPopoverTransposerPriority; 
@property (readonly) Class preferredPopoverTransposerClass; 
@property (copy,readonly) NSString * identifier; 
@property (assign) float visibilityPriority; 
@property (readonly) NSView * view; 
@property (readonly) NSViewController * viewController; 
@property (copy,readonly) NSString * customizationLabel; 
@property (getter=isVisible,readonly) char visible; 
+(id)touchBarItemForIdentifier:(id)arg1 ;
+(void)initialize;
+(id)keyPathsForValuesAffectingView;
+(void)addSystemTrayItem:(id)arg1 ;
+(void)removeSystemTrayItem:(id)arg1 ;
+(void)addTouchIDItem:(id)arg1 ;
+(void)removeTouchIDItem:(id)arg1 ;
-(void)swizzledDealloc;
-(unsigned long long)viewServiceItemPosition;
-(id)viewServiceItemCustomizationLabel;
-(id)overlayIdentifier;
-(id)viewServiceTouchBarControllerIdentifier;
-(id)overlayForItemIdentifier:(id)arg1 ;
-(void)setViewServiceTouchBarControllerIdentifier:(id)arg1 ;
-(id)_viewServiceTouchBarControllerIdentifier;
-(void)setViewServiceItemPosition:(unsigned long long)arg1 ;
-(void)setViewServiceItemCustomizationLabel:(id)arg1 ;
-(void)setOverlayIdentifier:(id)arg1 ;
-(id)_itemBar;
-(void)addViewServiceTouchBarControllerObservers;
-(void)removeViewServiceTouchBarControllerObservers;
-(id)viewServiceTouchBarControllerDescription;
-(void)_hostShowedPopoverBar:(id)arg1 forItem:(id)arg2 sender:(id)arg3 ;
-(void)_hostHidPopoverBar:(id)arg1 forItem:(id)arg2 sender:(id)arg3 ;
-(id)serviceViewController;
-(void)setServiceViewController:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)_type;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(NSView *)view;
-(float)visibilityPriority;
-(void)setPriority:(float)arg1 ;
-(unsigned long long)itemPosition;
-(double)preferredZOrder;
-(char)isVisible;
-(float)priority;
-(id)makeViewForCustomizationPalette;
-(void)_itemViewMinSize:(CGSize*)arg1 maxSize:(CGSize*)arg2 preferredSize:(CGSize*)arg3 ;
-(NSString *)customizationLabel;
-(void)_itemViewMinSize:(CGSize*)arg1 maxSize:(CGSize*)arg2 preferredSize:(CGSize*)arg3 stretchesContent:(char)arg4 ;
-(NSViewController *)viewController;
-(long long)preferredPopoverTransposerPriority;
-(Class)preferredPopoverTransposerClass;
-(void)setVisibilityPriority:(float)arg1 ;
-(id)_imageToDisplayForImage:(id)arg1 ;
-(id)_playgroundQuickLookView;
-(id)makeViewForCustomization;
-(id)makeViewForCustomizationPreview;
-(CGSize)fallbackItemSizeForCustomization;
-(CGSize)preferredSizeForCustomizationPalette;
-(CGSize)_contentClippingSize;
-(char)_requiresTrueCenterLayout;
-(void)_itemViewMinSize:(CGSize*)arg1 maxSize:(CGSize*)arg2 ;
-(id)makePressAndHoldTransposerWithSourceFrame:(CGRect)arg1 destinationContentView:(id)arg2 frame:(CGRect)arg3 ;
-(void)_setRequiresTrueCenterLayout:(char)arg1 ;
@end

