/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NSRectSet : NSObject <NSCopying> {

	CGRect _bounds;
	CGRect* _rects;
	unsigned long long _count;

}
+(void)initialize;
+(id)emptyRectSet;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)description;
-(id)init;
-(unsigned long long)count;
-(char)isEmpty;
-(CGRect)bounds;
-(void)addClip;
-(void)stroke;
-(void)fill;
-(void)setClip;
-(id)initWithRect:(CGRect)arg1 ;
-(void)subtractRect:(CGRect)arg1 ;
-(void)setEmpty;
-(const CGRect*)rects;
-(id)initWithCopyOfRects:(const CGRect*)arg1 count:(unsigned long long)arg2 bounds:(CGRect)arg3 ;
-(void)convertFromAncestor:(id)arg1 toView:(id)arg2 clipTo:(CGRect)arg3 ;
-(id)initWithRegion:(id)arg1 ;
-(void)intersectWithRect:(CGRect)arg1 ;
-(void)fillExactInterior;
-(void)strokeExactInterior;
@end
