/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SceneKit.framework/Versions/A/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <AppKit/NSTextField.h>

@interface SCNUIScrubber : NSTextField {

	float deltaX;
	float v0;
	CGPoint p0;
	float minValue;
	float maxValue;
	char drag;
	char rejectFirstResponder;

}
-(void)mouseDown:(id)arg1 ;
-(char)becomeFirstResponder;
-(void)mouseDragged:(id)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(float)checkBounds:(float)arg1 ;
@end

