/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSTouchBarItem.h>
#import <libobjc.A.dylib/NSSliderAccessoryContainer.h>

@class NSView, NSString, NSSliderAccessory, _NSSliderTouchBarItemView, NSSlider;

@interface NSSliderTouchBarItem : NSTouchBarItem <NSSliderAccessoryContainer> {

	NSView* _view;
	id _autounbinder;
	id _target;
	SEL _action;
	NSString* _customizationLabel;

}

@property (readonly) char _hasStepBehaviorContext; 
@property (assign) double value; 
@property (assign) double minimumValue; 
@property (assign) double maximumValue; 
@property (assign) double incrementValue; 
@property (readonly) NSSliderAccessory * minimumValueAccessory; 
@property (readonly) NSSliderAccessory * maximumValueAccessory; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) _NSSliderTouchBarItemView * _sliderItemView; 
@property (readonly) NSView*<NSUserInterfaceCompression> view; 
@property (retain) NSSlider * slider; 
@property (assign) double doubleValue; 
@property (assign) double minimumSliderWidth; 
@property (assign) double maximumSliderWidth; 
@property (copy) NSString * label; 
@property (retain) NSSliderAccessory * minimumValueAccessory; 
@property (retain) NSSliderAccessory * maximumValueAccessory; 
@property (assign) double valueAccessoryWidth; 
@property (__weak) id target;                                                  //@synthesize target=_target - In the implementation block
@property (assign) SEL action;                                                 //@synthesize action=_action - In the implementation block
@property (copy) NSString * customizationLabel; 
+(id)keyPathsForValuesAffecting_hasStepBehaviorContext;
-(oneway void)release;
-(void)dealloc;
-(double)doubleValue;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(id)initWithIdentifier:(id)arg1 ;
-(SEL)action;
-(double)value;
-(void)setAction:(SEL)arg1 ;
-(NSView*<NSUserInterfaceCompression>)view;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)setValue:(double)arg1 ;
-(void)setSlider:(NSSlider *)arg1 ;
-(void)setDoubleValue:(double)arg1 ;
-(NSSlider *)slider;
-(id)_autounbinder;
-(void)sendAction;
-(NSString *)customizationLabel;
-(void)setCustomizationLabel:(NSString *)arg1 ;
-(void)_loadViewIfNecessary;
-(long long)preferredPopoverTransposerPriority;
-(Class)preferredPopoverTransposerClass;
-(NSSliderAccessory *)minimumValueAccessory;
-(void)setMinimumValueAccessory:(NSSliderAccessory *)arg1 ;
-(NSSliderAccessory *)maximumValueAccessory;
-(void)setMaximumValueAccessory:(NSSliderAccessory *)arg1 ;
-(void)_incrementValue:(char)arg1 ;
-(id)makePressAndHoldTransposerWithSourceFrame:(CGRect)arg1 destinationContentView:(id)arg2 frame:(CGRect)arg3 ;
-(void)_sliderDidChange:(id)arg1 ;
-(double)valueAccessoryWidth;
-(void)setValueAccessoryWidth:(double)arg1 ;
-(double)minimumSliderWidth;
-(void)setMinimumSliderWidth:(double)arg1 ;
-(double)maximumSliderWidth;
-(void)setMaximumSliderWidth:(double)arg1 ;
-(char)_hasStepBehaviorContext;
-(double)minimumValue;
-(void)setMinimumValue:(double)arg1 ;
-(double)maximumValue;
-(void)setMaximumValue:(double)arg1 ;
-(double)incrementValue;
-(void)setIncrementValue:(double)arg1 ;
-(void)_itemViewWillBeginTracking;
-(void)_itemViewDidEndTracking;
-(void)_itemViewDidCancelTracking;
-(_NSSliderTouchBarItemView *)_sliderItemView;
@end
