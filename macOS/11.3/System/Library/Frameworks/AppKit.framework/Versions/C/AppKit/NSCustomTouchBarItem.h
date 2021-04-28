/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSTouchBarItem.h>

@class NSView, NSViewController, NSString;

@interface NSCustomTouchBarItem : NSTouchBarItem {

	NSView* _view;
	NSViewController* _viewController;
	NSString* _customizationLabel;
	long long _preferredPopoverTransposerPriority;
	Class _preferredPopoverTransposerClass;
	double _preferredZOrder;

}

@property (retain) NSView * viewForCustomizationPalette; 
@property (retain) NSView * viewForCustomizationPreview; 
@property (assign) CGSize preferredSizeForCustomizationPalette; 
@property (assign) long long preferredPopoverTransposerPriority;              //@synthesize preferredPopoverTransposerPriority=_preferredPopoverTransposerPriority - In the implementation block
@property (assign) Class preferredPopoverTransposerClass;                     //@synthesize preferredPopoverTransposerClass=_preferredPopoverTransposerClass - In the implementation block
@property (retain) NSView * view; 
@property (retain) NSViewController * viewController; 
@property (copy) NSString * customizationLabel; 
+(char)automaticallyNotifiesObserversOfView;
+(char)automaticallyNotifiesObserversOfViewController;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(NSView *)view;
-(void)setView:(NSView *)arg1 ;
-(double)preferredZOrder;
-(id)makeViewForCustomizationPalette;
-(void)setViewController:(NSViewController *)arg1 ;
-(NSString *)customizationLabel;
-(void)setCustomizationLabel:(NSString *)arg1 ;
-(void)setViewForCustomizationPreview:(NSView *)arg1 ;
-(void)setViewForCustomizationPalette:(NSView *)arg1 ;
-(void)setPreferredSizeForCustomizationPalette:(CGSize)arg1 ;
-(NSViewController *)viewController;
-(void)setPreferredZOrder:(double)arg1 ;
-(long long)preferredPopoverTransposerPriority;
-(void)setPreferredPopoverTransposerPriority:(long long)arg1 ;
-(Class)preferredPopoverTransposerClass;
-(void)setPreferredPopoverTransposerClass:(Class)arg1 ;
-(id)makeViewForCustomizationPreview;
-(CGSize)preferredSizeForCustomizationPalette;
-(NSView *)viewForCustomizationPalette;
-(NSView *)viewForCustomizationPreview;
@end

