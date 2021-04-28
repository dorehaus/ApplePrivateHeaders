/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/Versions/A/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface SKKeyframeSequence : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _count;
	NSMutableArray* _values;
	NSMutableArray* _times;
	long long _interpolationMode;
	long long _repeatMode;
	SKCKeyframeSequence* _cKeyframeSequence;

}

@property (assign,nonatomic) long long interpolationMode; 
@property (assign,nonatomic) long long repeatMode; 
+(char)supportsSecureCoding;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(unsigned long long)count;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithCount:(unsigned long long)arg1 ;
-(Class)_valueClass;
-(long long)repeatMode;
-(void)setRepeatMode:(long long)arg1 ;
-(id)sampleAtTime:(double)arg1 ;
-(void)removeAllKeyframes;
-(long long)interpolationMode;
-(double)getKeyframeTimeForIndex:(unsigned long long)arg1 ;
-(id)getKeyframeValueForIndex:(unsigned long long)arg1 ;
-(id)initWithKeyframeValues:(id)arg1 times:(id)arg2 ;
-(void)setInterpolationMode:(long long)arg1 ;
-(void)_dirtySKCKeyframeSequence;
-(void)setKeyframeValue:(id)arg1 forIndex:(unsigned long long)arg2 ;
-(void)setKeyframeTime:(double)arg1 forIndex:(unsigned long long)arg2 ;
-(SKCKeyframeSequence*)_createSKCKeyframeSequence;
-(void)addKeyframeValue:(id)arg1 time:(double)arg2 ;
-(void)removeLastKeyframe;
-(void)removeKeyframeAtIndex:(unsigned long long)arg1 ;
-(void)setKeyframeValue:(id)arg1 time:(double)arg2 forIndex:(unsigned long long)arg3 ;
-(char)isEqualToSequence:(id)arg1 ;
@end
