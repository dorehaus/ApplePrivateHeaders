/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class CALayer, NSArray;

@interface CASublayerEnumerator : NSEnumerator {

	CALayer* _mask;
	NSArray* _sublayers;
	unsigned long long _index;
	unsigned long long _count;

}
-(void)dealloc;
-(id)nextObject;
-(id)initWithLayer:(id)arg1 ;
@end

