/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/QCRenderingPatch.h>

@class QCOpenGLPort_Image, QCNumberPort, QCOpenGLPort_Color, QCOpenGLPort_Blending, CIImage, CIFilter;

@interface QCBillboard : QCRenderingPatch {

	QCOpenGLPort_Image* inputImage;
	QCOpenGLPort_Image* inputMask;
	QCNumberPort* inputX;
	QCNumberPort* inputY;
	QCNumberPort* inputRotation;
	QCOpenGLPort_Color* inputColor;
	QCOpenGLPort_Blending* inputBlending;
	QCNumberPort* inputPixelAligned;
	char _directCIRendering;
	char _optimizedCropping;
	int _sizeMode;
	QCNumberPort* _widthPort;
	QCNumberPort* _heightPort;
	CIImage* _ciImage;
	CIFilter* _colorFilter;
	CIFilter* _maskFilter;

}
+(unsigned long long)stateVersionWithIdentifier:(id)arg1 ;
+(char)isSafe;
+(char)allowsSubpatchesWithIdentifier:(id)arg1 ;
+(id)serializedStateKeysWithIdentifier:(id)arg1 ;
+(id)stateKeysWithIdentifier:(id)arg1 ;
+(Class)inspectorClassWithIdentifier:(id)arg1 ;
+(int)executionModeWithIdentifier:(id)arg1 ;
+(char)allowsInteraction;
-(id)state;
-(id)initWithIdentifier:(id)arg1 ;
-(char)setState:(id)arg1 ;
-(double)rotation;
-(CGPoint)position;
-(void)setPosition:(CGPoint)arg1 ;
-(int)sizeMode;
-(void)setSizeMode:(int)arg1 ;
-(void)setRotation:(double)arg1 ;
-(void)setScaleX:(double)arg1 ;
-(void)setScaleY:(double)arg1 ;
-(double)scaleX;
-(double)scaleY;
-(char)setup:(id)arg1 ;
-(char)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
-(void)cleanup:(id)arg1 ;
-(void)receiveMessage:(id)arg1 name:(id)arg2 attributes:(id)arg3 ;
-(char)allowsScissors:(id)arg1 ;
-(QCDodRef)createDodForContext:(id)arg1 ;
-(char)automaticStateSet:(id)arg1 ;
@end

