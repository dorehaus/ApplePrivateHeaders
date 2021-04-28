/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSControl.h>
#import <libobjc.A.dylib/NSTouchBarColorPickerSliderMinimizationDelegate.h>
#import <libobjc.A.dylib/NSTouchBarColorPickerView.h>

@class NSArray, NSTouchBarColorPickerSlider, NSColor, NSString;

@interface NSTouchBarColorPickerSliders : NSControl <NSTouchBarColorPickerSliderMinimizationDelegate, NSTouchBarColorPickerView> {

	NSArray* _componentSliders;
	NSTouchBarColorPickerSlider* _alphaSlider;
	unsigned long long _unminimizedComponents;
	NSArray* _allowedColorSpaces;
	NSColor* _currentColor;
	id _autounbinder;
	char _allowsAlpha;

}

@property (assign) unsigned long long _unminimizedComponents;              //@synthesize unminimizedComponents=_unminimizedComponents - In the implementation block
@property (copy) NSArray * allowedColorSpaces; 
@property (copy,readonly) NSColor * colorSpaceColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) NSColor * currentColor;                                   //@synthesize currentColor=_currentColor - In the implementation block
@property (assign) char allowsAlpha;                                       //@synthesize allowsAlpha=_allowsAlpha - In the implementation block
@property (__weak) id target; 
@property (assign) SEL action; 
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
+(id)defaultColorSpace;
+(id)colorValueKeyForComponent:(long long)arg1 ;
+(id)artworkProviderKeyForComponent:(long long)arg1 ;
+(id)accessibilityIdentifierForComponent:(long long)arg1 ;
+(char)requiresConstraintBasedLayout;
+(id)keyPathsForValuesInvalidatingConstraints;
+(char)accessibilityIsSingleCelled;
+(long long)numberOfColorComponents;
+(long long)preferredColorSwatchType;
+(void)orderedColorComponentsEnumerator:(/*^block*/id)arg1 ;
+(unsigned long long)colorComponentsMask:(unsigned long long)arg1 byAddingComponent:(long long)arg2 ;
+(id)colorSpaceNormalizedColor:(id)arg1 withinAllowedColorSpaces:(id)arg2 ;
+(void)enumerateColorComponentsInMask:(unsigned long long)arg1 enumerator:(/*^block*/id)arg2 ;
+(id)_fallbackColorSpaceWithAllowedColorSpaces:(id)arg1 ;
+(unsigned long long)colorComponentsMask:(unsigned long long)arg1 byRemovingComponent:(long long)arg2 ;
+(id)keyPathsForValuesAffectingColorSpaceColor;
+(id)thumbnailWithSize:(CGSize)arg1 inView:(id)arg2 ;
-(oneway void)release;
-(void)dealloc;
-(NSColor *)colorSpaceColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(char)isAccessibilityElement;
-(id)_autounbinder;
-(NSArray *)allowedColorSpaces;
-(id)declaredLayoutConstraints;
-(void)setAllowedColorSpaces:(NSArray *)arg1 ;
-(char)colorPickerSliderWantsToBeUnminimized:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)colorPickerSliderCompletedInteraction:(id)arg1 ;
-(NSColor *)currentColor;
-(void)setCurrentColor:(NSColor *)arg1 ;
-(char)allowsAlpha;
-(void)setAllowsAlpha:(char)arg1 ;
-(long long)_componentForSlider:(id)arg1 ;
-(id)colorWithValue:(double)arg1 forComponent:(long long)arg2 baseColor:(id)arg3 ;
-(unsigned long long)_unminimizedComponents;
-(id)sliderForComponent:(long long)arg1 ;
-(void)set_unminimizedComponents:(unsigned long long)arg1 ;
-(void)_selectComponentValueFrom:(id)arg1 ;
-(void)_sliderWillBeginTracking;
-(void)_sliderDidEndTracking;
@end

