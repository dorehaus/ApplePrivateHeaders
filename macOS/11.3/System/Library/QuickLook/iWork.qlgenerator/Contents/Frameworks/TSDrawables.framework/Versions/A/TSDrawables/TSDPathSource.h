/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSDrawables.framework/Versions/A/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSDrawables/TSDrawables-Structs.h>
#import <TSDrawables/TSDMixing.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, TSUBezierPath;

@interface TSDPathSource : NSObject <TSDMixing, NSCopying> {

	char _horizontalFlip;
	char _verticalFlip;
	NSString* _localizationKey;
	NSString* _name;
	NSString* _identifier;

}

@property (nonatomic,readonly) char isRectangular; 
@property (nonatomic,readonly) char isRectangularForever; 
@property (nonatomic,readonly) char isCircular; 
@property (nonatomic,copy,readonly) TSUBezierPath * bezierPath; 
@property (nonatomic,copy,readonly) TSUBezierPath * bezierPathWithoutFlips; 
@property (nonatomic,copy,readonly) TSUBezierPath * interiorWrapPath; 
@property (nonatomic,readonly) Class preferredControllerClass; 
@property (assign,nonatomic) CGSize naturalSize; 
@property (nonatomic,readonly) char isClosed; 
@property (assign,nonatomic) char hasHorizontalFlip;                                     //@synthesize horizontalFlip=_horizontalFlip - In the implementation block
@property (assign,nonatomic) char hasVerticalFlip;                                       //@synthesize verticalFlip=_verticalFlip - In the implementation block
@property (getter=isClosed,nonatomic,readonly) char closed; 
@property (nonatomic,copy) NSString * localizationKey;                                   //@synthesize localizationKey=_localizationKey - In the implementation block
@property (nonatomic,copy) NSString * userDefinedIdentifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * userDefinedName;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * inferredAccessibilityDescription; 
@property (nonatomic,readonly) CGAffineTransform pathFlipTransform; 
+(id)pathSourceForShapeType:(long long)arg1 naturalSize:(CGSize)arg2 ;
+(id)pathSourceWithArchive:(const PathSourceArchive*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(TSUBezierPath *)bezierPath;
-(char)isClosed;
-(char)isRectangular;
-(CGSize)naturalSize;
-(void)setNaturalSize:(CGSize)arg1 ;
-(char)isCircular;
-(id)initWithArchive:(const PathSourceArchive*)arg1 ;
-(void)saveToArchive:(PathSourceArchive*)arg1 ;
-(void)setLocalizationKey:(NSString *)arg1 ;
-(NSString *)localizationKey;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(char)hasHorizontalFlip;
-(void)setHasHorizontalFlip:(char)arg1 ;
-(char)hasVerticalFlip;
-(void)setHasVerticalFlip:(char)arg1 ;
-(TSUBezierPath *)bezierPathWithoutFlips;
-(CGAffineTransform)pathFlipTransform;
-(char)isRectangularForever;
-(TSUBezierPath *)interiorWrapPath;
-(Class)preferredControllerClass;
-(double)uniformScaleForScalingToNaturalSize:(CGSize)arg1 ;
-(void)scaleToNaturalSize:(CGSize)arg1 ;
-(long long)mixingTypeWithObject:(id)arg1 context:(id)arg2 ;
-(NSString *)inferredAccessibilityDescription;
-(void)setUserDefinedName:(NSString *)arg1 ;
-(NSString *)userDefinedName;
-(void)loadSharedFromArchive:(const PathSourceArchive*)arg1 ;
-(void)saveSharedToArchive:(PathSourceArchive*)arg1 ;
-(NSString *)userDefinedIdentifier;
-(void)setUserDefinedIdentifier:(NSString *)arg1 ;
-(id)interiorWrapPathForInset:(double)arg1 joinStyle:(unsigned long long)arg2 ;
@end
