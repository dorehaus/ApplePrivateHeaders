/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzComposer/QCPatch.h>

@class QCOpenGLPort_Image, QCOpenGLPort_Color, QCNumberPort, QCOpenGLPort_Blending;

@interface QCPsychedelic : QCPatch {

	QCOpenGLPort_Image* inputImage;
	QCOpenGLPort_Color* inputColor;
	QCNumberPort* inputSpeed;
	QCNumberPort* inputScale;
	QCOpenGLPort_Blending* inputBlending;
	char _clearDepthBuffer;

}
+(char)isSafe;
+(char)allowsSubpatchesWithIdentifier:(id)arg1 ;
+(Class)inspectorClassWithIdentifier:(id)arg1 ;
+(int)executionModeWithIdentifier:(id)arg1 ;
+(int)timeModeWithIdentifier:(id)arg1 ;
-(id)state;
-(id)initWithIdentifier:(id)arg1 ;
-(char)setState:(id)arg1 ;
-(char)setup:(id)arg1 ;
-(char)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
-(void)setClearsDepthBuffer:(char)arg1 ;
-(char)clearsDepthBuffer;
@end

