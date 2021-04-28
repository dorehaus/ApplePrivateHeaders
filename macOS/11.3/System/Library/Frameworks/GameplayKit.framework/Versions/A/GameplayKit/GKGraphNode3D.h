/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/Versions/A/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <GameplayKit/GKGraphNode.h>

@interface GKGraphNode3D : GKGraphNode {

	GKCGraphNode3D* _cGraphNode3D;

}

@property (assign,nonatomic)  position; 
+(char)supportsSecureCoding;
+(id)nodeWithPoint:;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-()position;
-(void)setPosition:;
-(id)initWithPoint:;
-(void)deleteCGraphNode;
-(float)estimatedCostToNode:(id)arg1 ;
-(float)costToNode:(id)arg1 ;
-(GKCGraphNode*)makeCGraphNode;
-(GKCGraphNode3D*)cGraphNode3D;
@end

