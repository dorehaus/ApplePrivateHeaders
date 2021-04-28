/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSControl.h>
#import <libobjc.A.dylib/NSScrubberDelegate.h>
#import <libobjc.A.dylib/NSScrubberDataSource.h>
#import <libobjc.A.dylib/NSTouchBarColorListPickerPressAndHoldPopUpDelegate.h>
#import <libobjc.A.dylib/NSGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/NSTouchBarColorPickerView.h>

@class NSColorList, NSColor, NSScrubber, NSPressGestureRecognizer, NSTouchBarColorListPickerPressAndHoldPopUp, NSArray, NSString;

@interface NSTouchBarColorListPicker : NSControl <NSScrubberDelegate, NSScrubberDataSource, NSTouchBarColorListPickerPressAndHoldPopUpDelegate, NSGestureRecognizerDelegate, NSTouchBarColorPickerView> {

	NSColorList* _colorList;
	NSColor* _currentColor;
	NSColor* _preTrackingColor;
	id _autounbinder;
	NSScrubber* _scrubber;
	NSPressGestureRecognizer* _longPressRecognizer;
	NSTouchBarColorListPickerPressAndHoldPopUp* _pressAndHoldPopUp;
	NSArray* _allowedColorSpaces;
	long long _scrubberHighlightCount;
	char _continuous;
	char _allowsAlpha;
	char _supportsPressAndHoldVariants;

}

@property (retain) NSColorList * colorList; 
@property (assign) char supportsPressAndHoldVariants;               //@synthesize supportsPressAndHoldVariants=_supportsPressAndHoldVariants - In the implementation block
@property (copy) NSArray * allowedColorSpaces;                      //@synthesize allowedColorSpaces=_allowedColorSpaces - In the implementation block
@property (copy) NSString * selectedColorKey; 
@property (copy) NSColor * currentColor;                            //@synthesize currentColor=_currentColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) char allowsAlpha;                                //@synthesize allowsAlpha=_allowsAlpha - In the implementation block
@property (__weak) id target; 
@property (assign) SEL action; 
+(char)accessibilityIsSingleCelled;
+(long long)preferredColorSwatchType;
+(id)thumbnailWithSize:(CGSize)arg1 inView:(id)arg2 ;
+(id)keyPathsForValuesAffectingSelectedColorKey;
+(char)automaticallyNotifiesObserversOfCurrentColor;
+(id)keyPathsForValuesAffectingCurrentColor;
-(oneway void)release;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setContinuous:(char)arg1 ;
-(long long)numberOfItemsForScrubber:(id)arg1 ;
-(void)scrubber:(id)arg1 didHighlightItemAtIndex:(long long)arg2 ;
-(void)scrubber:(id)arg1 didSelectItemAtIndex:(long long)arg2 ;
-(void)didBeginInteractingWithScrubber:(id)arg1 ;
-(void)didFinishInteractingWithScrubber:(id)arg1 ;
-(void)didCancelInteractingWithScrubber:(id)arg1 ;
-(char)isContinuous;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(id)_autounbinder;
-(NSArray *)allowedColorSpaces;
-(void)setAllowedColorSpaces:(NSArray *)arg1 ;
-(NSColorList *)colorList;
-(void)setColorList:(NSColorList *)arg1 ;
-(id)scrubber:(id)arg1 viewForItemAtIndex:(long long)arg2 ;
-(NSColor *)currentColor;
-(void)setSupportsPressAndHoldVariants:(char)arg1 ;
-(void)setCurrentColor:(NSColor *)arg1 ;
-(char)allowsAlpha;
-(void)setAllowsAlpha:(char)arg1 ;
-(void)_colorListDidChange:(id)arg1 ;
-(long long)_effectiveSelectedColorIndex;
-(void)longPress:(id)arg1 ;
-(void)_setCurrentColor:(id)arg1 updateScrubber:(char)arg2 ;
-(unsigned long long)_effectiveColorCount;
-(id)_colorKeyForColorAtIndex:(long long)arg1 ;
-(NSString *)selectedColorKey;
-(void)_setCurrentColorWithScrubberIndex:(unsigned long long)arg1 ;
-(void)_didFinishInteractingWithScrubber:(id)arg1 cancelled:(char)arg2 ;
-(void)popUpDidDismiss:(id)arg1 ;
-(void)popUp:(id)arg1 didHighlightColor:(id)arg2 withKey:(id)arg3 atIndex:(long long)arg4 ;
-(void)popUpDidEndColorSelection:(id)arg1 cancelled:(char)arg2 ;
-(void)setSelectedColorKey:(NSString *)arg1 ;
-(char)supportsPressAndHoldVariants;
@end

