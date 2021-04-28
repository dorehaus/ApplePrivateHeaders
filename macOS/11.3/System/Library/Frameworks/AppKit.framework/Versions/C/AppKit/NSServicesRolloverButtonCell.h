/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSButtonCell.h>

@interface NSServicesRolloverButtonCell : NSButtonCell {

	long long _style;

}

@property (readonly) long long style;              //@synthesize style=_style - In the implementation block
+(id)serviceRolloverButtonCellForStyle:(long long)arg1 ;
-(long long)style;
-(id)initWithStyle:(long long)arg1 ;
-(char)trackMouse:(id)arg1 inRect:(CGRect)arg2 ofView:(id)arg3 untilMouseUp:(char)arg4 ;
-(CGRect)rectForBounds:(CGRect)arg1 preferredEdge:(unsigned long long)arg2 ;
@end

