/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SceneKit.framework/Versions/A/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SceneKit/SceneKit-Structs.h>
@class SCNNode;

@interface SCNHitTestResult : NSObject {

	C3DHitTestResultRef _result;

}

@property (nonatomic,readonly)  simdLocalCoordinates; 
@property (nonatomic,readonly)  simdWorldCoordinates; 
@property (nonatomic,readonly)  simdLocalNormal; 
@property (nonatomic,readonly)  simdWorldNormal; 
@property (nonatomic,readonly) SCD_Struct_SC60 simdModelTransform; 
@property (nonatomic,readonly) SCNNode * node; 
@property (nonatomic,readonly) long long geometryIndex; 
@property (nonatomic,readonly) long long faceIndex; 
@property (nonatomic,readonly) SCNVector3 localCoordinates; 
@property (nonatomic,readonly) SCNVector3 worldCoordinates; 
@property (nonatomic,readonly) SCNVector3 localNormal; 
@property (nonatomic,readonly) SCNVector3 worldNormal; 
@property (nonatomic,readonly) CATransform3D modelTransform; 
@property (nonatomic,readonly) SCNNode * boneNode; 
+(id)hitTestResultsFromHitTestResultRef:(CFArrayRef)arg1 ;
-(void)dealloc;
-(id)description;
-(SCNNode *)node;
-(id)initWithResult:(C3DHitTestResultRef)arg1 ;
-(CGPoint)textureCoordinatesWithMappingChannel:(long long)arg1 ;
-(long long)geometryIndex;
-(long long)faceIndex;
-(SCNVector3)localCoordinates;
-(SCNVector3)worldCoordinates;
-(SCNVector3)localNormal;
-(SCNVector3)worldNormal;
-(CGPoint)textureCoordinate;
-(CATransform3D)modelTransform;
-()simdWorldCoordinates;
-()simdLocalCoordinates;
-()simdLocalNormal;
-()simdWorldNormal;
-(SCNNode *)boneNode;
-(SCD_Struct_SC60)simdModelTransform;
@end

