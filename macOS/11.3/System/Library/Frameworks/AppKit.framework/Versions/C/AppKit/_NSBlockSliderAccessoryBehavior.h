/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSSliderAccessoryBehavior.h>

@interface _NSBlockSliderAccessoryBehavior : NSSliderAccessoryBehavior {

	/*^block*/id _handler;

}

@property (copy,readonly) id handler;              //@synthesize handler=_handler - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)handler;
-(id)initWithHandler:(/*^block*/id)arg1 ;
-(void)handleAction:(id)arg1 ;
@end

