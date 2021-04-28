/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhysicsKit.framework/Versions/A/PhysicsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhysicsKit/PhysicsKit-Structs.h>
@class PKQuadTree;

@interface PKPhysicsGrid : NSObject {

	shared_ptr<PKCGrid>* grid;
	PKQuadTree* quadTree;

}

@property (nonatomic,readonly) int width; 
@property (nonatomic,readonly) int height; 
@property (assign,nonatomic) shared_ptr<PKCGrid>* gridPtr; 
+(id)gridFromOccupancyArray:(const char*)arg1 bytePitch:(int)arg2 width:(int)arg3 height:(int)arg4 ;
+(id)gridFromRGBAU8PixelData:(const char*)arg1 imageWidth:(int)arg2 imageHeight:(int)arg3 alphaThreshold:(float)arg4 accuracy:(float)arg5 ;
+(id)vectorGridFromRGBAU8PixelData:(const char*)arg1 imageWidth:(int)arg2 imageHeight:(int)arg3 accuracy:(float)arg4 ;
-(int)width;
-(int)height;
-(shared_ptr<PKCGrid>*)gridPtr;
-(BOOL)isGridRegionOccupied:(int)arg1 y:(int)arg2 width:(int)arg3 height:(int)arg4 ;
-(unsigned char)gridDataAtX:(int)arg1 y:(int)arg2 z:(int)arg3 ;
-(id)physicsBodyFromSmoothedOutline:(double)arg1 size:(CGSize)arg2 ;
-(shared_ptr<PKPath>*)pathFromOutlineWithSmoothingThreshold:(double)arg1 bounds:(SCD_Struct_PK27)arg2 ;
-(id)physicsBodyFromLVS0:(CGRect)arg1 ;
-(void)setGridPtr:(shared_ptr<PKCGrid>*)arg1 ;
@end

