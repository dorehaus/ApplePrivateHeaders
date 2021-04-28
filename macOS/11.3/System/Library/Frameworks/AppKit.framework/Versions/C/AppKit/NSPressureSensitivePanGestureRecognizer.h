/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSPanGestureRecognizer.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface NSPressureSensitivePanGestureRecognizer : NSPanGestureRecognizer <NSCoding> {

	double _defaultPressure;
	double _pressure;
	long long _flags;

}

@property (assign) double defaultPressure; 
@property (assign) char recognizesOnPressureChange; 
@property (readonly) double pressure;                            //@synthesize pressure=_pressure - In the implementation block
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)reset;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)_appendSubclassDescription:(id)arg1 ;
-(void)_updateForMouseDownWithEvent:(id)arg1 ;
-(void)_updatePropertiesWithEvent:(id)arg1 ;
-(double)pressure;
-(char)recognizesOnPressureChange;
-(void)tabletPoint:(id)arg1 ;
-(void)pressureChangeWithEvent:(id)arg1 ;
-(void)setRecognizesOnPressureChange:(char)arg1 ;
-(void)setDefaultPressure:(double)arg1 ;
-(double)defaultPressure;
-(id)_desiredPressureBehavior;
-(char)shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(char)_hasCustomDefaultPressure;
-(void)_setHasCustomDefaultPressure:(char)arg1 ;
@end

