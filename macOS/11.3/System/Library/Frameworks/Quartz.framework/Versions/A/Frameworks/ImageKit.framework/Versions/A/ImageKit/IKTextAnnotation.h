/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <QuartzCore/CATextLayer.h>
#import <libobjc.A.dylib/NSWindowDelegate.h>
#import <libobjc.A.dylib/NSTextFieldDelegate.h>

@class IKKnobLayer, IKComposer, IKImageLayer, NSString, NSTextField, NSMutableDictionary;

@interface IKTextAnnotation : CATextLayer <NSWindowDelegate, NSTextFieldDelegate> {

	IKKnobLayer* _knobLayer;
	IKComposer* _composer;
	IKImageLayer* _imageLayer;
	NSString* _oldString;
	double _textColors[4];
	double _borderColors[4];
	double _backgroundColors[4];
	double _shadowColors[4];
	NSTextField* _textField;
	NSMutableDictionary* _attributes;
	char _selected;
	char _supportsUndo;

}

@property (assign) char supportsUndo;                               //@synthesize supportsUndo=_supportsUndo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultActionForKey:(id)arg1 ;
+(double)fadeDuration;
-(void)ikMouseDown:(id)arg1 ;
-(void)updateBorderWidth:(int)arg1 ;
-(void)toggleShadow;
-(void)toggleDash;
-(char)supportsUndo;
-(void)startEditing:(id)arg1 ;
-(char)isAnnotationLayer;
-(unsigned)defaultKnob;
-(void)setSupportsUndo:(char)arg1 ;
-(unsigned)knobLayerFlags;
-(void)setColorComponents:(double*)arg1 withColor:(id)arg2 ;
-(void)removeKnobLayer;
-(void)setNewFont:(id)arg1 ;
-(void)changeForegroundColor:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(void)cleanup;
-(void)setPosition:(CGPoint)arg1 ;
-(void)removeFromSuperlayer;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setAnchorPoint:(CGPoint)arg1 ;
-(char)containsPoint:(CGPoint)arg1 ;
-(void)windowWillClose:(id)arg1 ;
-(char)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3 ;
-(void)changeColor:(id)arg1 ;
-(void)changeFont:(id)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(char)selected;
-(void)setSelected:(char)arg1 ;
-(id)knobLayer;
-(void)setup:(id)arg1 ;
-(void)updateText:(id)arg1 ;
-(void)changeBackgroundColor:(id)arg1 ;
@end

