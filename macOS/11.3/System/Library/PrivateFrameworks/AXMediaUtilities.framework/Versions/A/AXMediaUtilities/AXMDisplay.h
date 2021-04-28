/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/Versions/A/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AXMDisplay : NSObject <NSCopying> {

	char _supportsDeepColor;
	NSString* _name;
	double _scale;
	double _orientation;
	long long _physicalOrientation;
	long long _backingType;
	CGSize _size;
	CGRect _referenceBounds;

}

@property (assign,nonatomic) long long backingType;                      //@synthesize backingType=_backingType - In the implementation block
@property (nonatomic,copy) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) double scale;                               //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) CGSize size;                                //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) double orientation;                         //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) long long physicalOrientation;              //@synthesize physicalOrientation=_physicalOrientation - In the implementation block
@property (assign,nonatomic) CGRect referenceBounds;                     //@synthesize referenceBounds=_referenceBounds - In the implementation block
@property (assign,nonatomic) char supportsDeepColor;                     //@synthesize supportsDeepColor=_supportsDeepColor - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)size;
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(void)setOrientation:(double)arg1 ;
-(double)scale;
-(double)orientation;
-(void)setScale:(double)arg1 ;
-(void)setBackingType:(long long)arg1 ;
-(long long)backingType;
-(CGRect)referenceBounds;
-(char)supportsDeepColor;
-(id)_initWithBackingType:(long long)arg1 ;
-(CGPoint)convertPointToDisplay:(CGPoint)arg1 ;
-(CGRect)convertRectToDisplay:(CGRect)arg1 ;
-(long long)physicalOrientation;
-(void)setPhysicalOrientation:(long long)arg1 ;
-(void)setReferenceBounds:(CGRect)arg1 ;
-(void)setSupportsDeepColor:(char)arg1 ;
@end
