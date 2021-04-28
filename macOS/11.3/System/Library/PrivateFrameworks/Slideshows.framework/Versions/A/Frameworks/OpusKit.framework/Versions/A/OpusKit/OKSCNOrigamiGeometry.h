/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Frameworks/OpusKit.framework/Versions/A/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <SceneKit/SCNGeometry.h>

@class OKSCNDoubleSidedMaterial;

@interface OKSCNOrigamiGeometry : SCNGeometry {

	double _length;
	SCNVector3 _vertices[20];
	OKSCNDoubleSidedMaterial* _material;
	SCNVector3 _pos0;
	SCNVector3 _pos1;
	SCNVector3 _pos2;
	SCNVector3 _pos4;
	SCNVector3 _pos5;
	SCNVector3 _pos8;
	SCNVector3 _pos9;
	SCNVector3 _pos10;

}

@property (assign) SCNVector3 pos0;               //@synthesize pos0=_pos0 - In the implementation block
@property (assign) SCNVector3 pos1;               //@synthesize pos1=_pos1 - In the implementation block
@property (assign) SCNVector3 pos2;               //@synthesize pos2=_pos2 - In the implementation block
@property (assign) SCNVector3 pos4;               //@synthesize pos4=_pos4 - In the implementation block
@property (assign) SCNVector3 pos5;               //@synthesize pos5=_pos5 - In the implementation block
@property (assign) SCNVector3 pos8;               //@synthesize pos8=_pos8 - In the implementation block
@property (assign) SCNVector3 pos9;               //@synthesize pos9=_pos9 - In the implementation block
@property (assign) SCNVector3 pos10;              //@synthesize pos10=_pos10 - In the implementation block
+(id)origamiWithSize:(double)arg1 ;
-(void)dealloc;
-(void)setFrontContents:(id)arg1 ;
-(void)setBackContents:(id)arg1 ;
-(void)updateFoldingRendering:(double)arg1 ;
-(void)setPos4:(SCNVector3)arg1 ;
-(void)setPos0:(SCNVector3)arg1 ;
-(void)setPos2:(SCNVector3)arg1 ;
-(void)setPos8:(SCNVector3)arg1 ;
-(void)setPos1:(SCNVector3)arg1 ;
-(void)setPos5:(SCNVector3)arg1 ;
-(void)setPos10:(SCNVector3)arg1 ;
-(void)setPos9:(SCNVector3)arg1 ;
-(SCNVector3)pos0;
-(SCNVector3)pos1;
-(SCNVector3)pos2;
-(SCNVector3)pos4;
-(SCNVector3)pos5;
-(SCNVector3)pos8;
-(SCNVector3)pos9;
-(SCNVector3)pos10;
@end

