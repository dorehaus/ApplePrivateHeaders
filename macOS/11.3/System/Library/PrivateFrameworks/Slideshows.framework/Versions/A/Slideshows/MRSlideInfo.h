/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Slideshows/Slideshows-Structs.h>
@class NSString;

@interface MRSlideInfo : NSObject {

	char _isMain;
	NSString* _assetPath;
	unsigned long long _index;
	double _aspectRatio;
	double _time;
	double _scale;
	double _rotation;
	id _player;
	CGPoint _center;

}

@property (nonatomic,copy) NSString * assetPath;                    //@synthesize assetPath=_assetPath - In the implementation block
@property (assign,nonatomic) unsigned long long index;              //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) double aspectRatio;                    //@synthesize aspectRatio=_aspectRatio - In the implementation block
@property (assign,nonatomic) double time;                           //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) CGPoint center;                        //@synthesize center=_center - In the implementation block
@property (assign,nonatomic) double scale;                          //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) double rotation;                       //@synthesize rotation=_rotation - In the implementation block
@property (assign,nonatomic) id player;                             //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) char isMain;                           //@synthesize isMain=_isMain - In the implementation block
-(void)dealloc;
-(id)description;
-(unsigned long long)index;
-(void)setIndex:(unsigned long long)arg1 ;
-(double)rotation;
-(double)scale;
-(double)time;
-(CGPoint)center;
-(void)setScale:(double)arg1 ;
-(void)setAspectRatio:(double)arg1 ;
-(double)aspectRatio;
-(void)setRotation:(double)arg1 ;
-(void)setPlayer:(id)arg1 ;
-(void)setCenter:(CGPoint)arg1 ;
-(void)setTime:(double)arg1 ;
-(id)player;
-(void)setAssetPath:(NSString *)arg1 ;
-(char)isMain;
-(NSString *)assetPath;
-(void)setIsMain:(char)arg1 ;
@end
