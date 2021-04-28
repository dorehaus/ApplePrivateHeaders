/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SceneKit.framework/Versions/A/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SceneKit/SceneKit-Structs.h>
@interface SCNMTLShadable : NSObject {

	id _vertexBuffers[31];
	id _fragmentBuffers[31];
	id _vertexTextures[31];
	id _fragmentTextures[31];
	id _vertexSamplers[16];
	id _fragmentSamplers[16];
	long long materialModificationCount;
	long long geometryModificationCount;

}

@property (assign,nonatomic) long long materialModificationCount; 
@property (assign,nonatomic) long long geometryModificationCount; 
-(void)dealloc;
-(id)bufferAtIndices:(SCD_Struct_SC70)arg1 ;
-(id)textureAtIndices:(SCD_Struct_SC70)arg1 ;
-(id)samplerAtIndices:(SCD_Struct_SC70)arg1 ;
-(long long)materialModificationCount;
-(long long)geometryModificationCount;
-(void)setMaterialModificationCount:(long long)arg1 ;
-(void)setGeometryModificationCount:(long long)arg1 ;
-(void)setResource:(id)arg1 ofType:(unsigned long long)arg2 atIndices:(SCD_Struct_SC70)arg3 ;
@end

