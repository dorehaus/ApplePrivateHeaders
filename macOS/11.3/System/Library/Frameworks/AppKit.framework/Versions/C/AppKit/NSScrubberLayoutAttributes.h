/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NSScrubberLayoutAttributes : NSObject <NSCopying> {

	long long _itemIndex;
	CGRect _frame;
	double _alpha;
	unsigned _escapes : 1;
	unsigned _reservedLayoutAttributeFlags : 31;

}

@property (assign) long long itemIndex;              //@synthesize itemIndex=_itemIndex - In the implementation block
@property (assign) CGRect frame;                     //@synthesize frame=_frame - In the implementation block
@property (assign) double alpha;                     //@synthesize alpha=_alpha - In the implementation block
+(id)layoutAttributesForItemAtIndex:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(CGRect)frame;
-(void)setFrame:(CGRect)arg1 ;
-(double)alpha;
-(void)setAlpha:(double)arg1 ;
-(long long)itemIndex;
-(id)_layoutAttributesByBlendingFraction:(double)arg1 ofAttributes:(id)arg2 ;
-(void)setEscapesFromScrollView:(char)arg1 ;
-(void)setItemIndex:(long long)arg1 ;
-(char)escapesFromScrollView;
@end
