/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/Versions/A/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <GameplayKit/GKObstacle.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface GKPolygonObstacle : GKObstacle <NSSecureCoding> {

	GKCPolygonObstacle* _cPolygonObstacle;

}

@property (nonatomic,readonly) unsigned long long vertexCount; 
+(char)supportsSecureCoding;
+(id)obstacleWithPoints:(1*)arg1 count:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)vertexCount;
-(2)vertexAtIndex:(unsigned long long)arg1 ;
-(id)initWithPoints:(1*)arg1 count:(unsigned long long)arg2 ;
-(GKCPolygonObstacle*)cPolygonObstacle;
-(Obstacle*)obstacle;
-(void)setCPolygonObstacle:(GKCPolygonObstacle*)arg1 ;
@end

