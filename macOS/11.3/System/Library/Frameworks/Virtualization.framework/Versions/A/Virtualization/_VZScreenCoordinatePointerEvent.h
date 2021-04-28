/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Virtualization.framework/Versions/A/Virtualization
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Virtualization/Virtualization-Structs.h>
@interface _VZScreenCoordinatePointerEvent : NSObject {

	long long _pressedButtons;
	CGPoint _location;

}

@property (readonly) CGPoint location;                      //@synthesize location=_location - In the implementation block
@property (readonly) long long pressedButtons;              //@synthesize pressedButtons=_pressedButtons - In the implementation block
-(CGPoint)location;
-(id)initWithEvent:(id)arg1 view:(id)arg2 ;
-(id)initWithLocation:(CGPoint)arg1 pressedButtons:(long long)arg2 ;
-(long long)pressedButtons;
@end

