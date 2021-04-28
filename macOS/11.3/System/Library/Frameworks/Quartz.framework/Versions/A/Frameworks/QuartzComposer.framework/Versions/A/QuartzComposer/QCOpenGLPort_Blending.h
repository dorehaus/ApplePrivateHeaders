/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzComposer/QCIndexPort.h>
#import <libobjc.A.dylib/QCOpenGLPort.h>

@interface QCOpenGLPort_Blending : QCIndexPort <QCOpenGLPort> {

	unsigned char _enabled;
	unsigned char _testingEnabled;
	int _sourceFunction;
	int _destFunction;
	int _alphaFunc;
	double _alphaRef;
	void** _unused4[1];

}
-(id)initWithNode:(id)arg1 arguments:(id)arg2 ;
-(void)setOnOpenGLContext:(id)arg1 ;
-(void)unsetOnOpenGLContext:(id)arg1 ;
@end

